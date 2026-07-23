/*
 * XREFs of RtlQueryInformationActivationContext @ 0x1800475D0
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x180047230 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800ECF28 (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueryInformationActiveActivationContext @ 0x1800F0240 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003C2E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800489D0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     RtlPcToFileHeader @ 0x18008B820 (RtlPcToFileHeader.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800EE434 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryRunLevel @ 0x18010641C (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x18010D36C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180110EA4 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x180111BD0 (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

NTSTATUS __cdecl RtlQueryInformationActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PACTIVATION_CONTEXT_QUERY_INDEX SubInstanceIndex,
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  PACTIVATION_CONTEXT_QUERY_INDEX v8; // r11
  PACTIVATION_CONTEXT v9; // r14
  int v11; // ecx
  ULONG v12; // eax
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  __int128 *v14; // rax
  const char *NotificationContext; // r10
  __int64 v16; // r10
  NTSTATUS RunLevel; // ebx
  int InformationActivationContextDetailedInformation; // eax
  signed __int32 RefCount; // eax
  _ACTIVATION_CONTEXT *v20; // rax
  int LoadedDllByHandle; // eax
  unsigned int v22; // ecx
  int v23; // eax
  int v25; // [rsp+30h] [rbp-88h]
  int v26; // [rsp+34h] [rbp-84h] BYREF
  __int64 v27; // [rsp+38h] [rbp-80h]
  PVOID BaseAddress; // [rsp+40h] [rbp-78h] BYREF
  const char *v29; // [rsp+48h] [rbp-70h]
  int v30; // [rsp+50h] [rbp-68h]
  PVOID BaseOfImage; // [rsp+58h] [rbp-60h] BYREF
  struct _TEB *v32; // [rsp+60h] [rbp-58h]
  struct _TEB *v33; // [rsp+68h] [rbp-50h]
  __int128 v34; // [rsp+70h] [rbp-48h] BYREF
  __int128 v35; // [rsp+80h] [rbp-38h]
  PACTIVATION_CONTEXT v36; // [rsp+C8h] [rbp+10h]

  v36 = ActivationContext;
  v8 = SubInstanceIndex;
  v9 = ActivationContext;
  v34 = 0LL;
  v35 = 0LL;
  v11 = 0;
  v26 = 0;
  BaseAddress = 0LL;
  DWORD2(v35) = 4;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_47;
  if ( (Flags & 0x80000000) != 0
    && (((ActivationContextInformationClass - 1) & 0xFFFFFFFA) != 0
     || ActivationContextInformationClass == ActivationContextDetailedInformation) )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags,
      ActivationContextInformationClass);
    RunLevel = -1073741585;
    goto LABEL_117;
  }
  if ( (unsigned int)(ActivationContextInformationClass - 1) > 6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      ActivationContextInformationClass);
    RunLevel = -1073741583;
    goto LABEL_117;
  }
  if ( ActivationContextInformationLength )
  {
    if ( !ActivationContextInformation )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      RunLevel = -1073741582;
      goto LABEL_117;
    }
  }
  else if ( !ReturnLength )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    RunLevel = -1073741580;
    goto LABEL_117;
  }
  v12 = Flags & 7;
  if ( v12 != 1 )
  {
    if ( (Flags & 7) == 0 )
      goto LABEL_12;
    if ( v12 != 2 )
    {
      if ( v12 != 4 )
      {
LABEL_47:
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
          "RtlQueryInformationActivationContext",
          Flags);
LABEL_48:
        RunLevel = -1073741585;
        goto LABEL_117;
      }
      BaseOfImage = 0LL;
      if ( !ActivationContext )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_79;
      }
      v20 = (_ACTIVATION_CONTEXT *)RtlPcToFileHeader(ActivationContext, &BaseOfImage);
      BaseOfImage = v20;
      if ( !v20 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          v9);
        RunLevel = -1073741515;
        goto LABEL_117;
      }
      v9 = v20;
      v36 = v20;
    }
    if ( v9 )
    {
      LoadedDllByHandle = LdrpFindLoadedDllByHandle(v9, (__int64 *)&BaseAddress, &v26);
      RunLevel = LoadedDllByHandle;
      v25 = LoadedDllByHandle;
      ActivationContext = 0LL;
      if ( LoadedDllByHandle >= 0 && v26 < 5 )
      {
        v32 = NtCurrentTeb();
        if ( (v32->SameTebFlags & 0x1000) != 0 )
        {
          RunLevel = LoadedDllByHandle;
        }
        else
        {
          LdrpDrainWorkQueue(0LL);
          v23 = v25;
          if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) != 9 )
            v23 = -1073741515;
          RunLevel = v23;
          LdrpDropLastInProgressCount();
        }
        v9 = v36;
      }
      v11 = 0;
      if ( RunLevel < 0 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller passed invalid hmodule (%p)\n",
          "RtlQueryInformationActivationContext",
          v9);
        goto LABEL_117;
      }
      v9 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
      v36 = v9;
      v8 = SubInstanceIndex;
      goto LABEL_12;
    }
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
LABEL_79:
    RunLevel = -1073741584;
    goto LABEL_117;
  }
  if ( ActivationContext )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
    RunLevel = -1073741584;
    goto LABEL_117;
  }
  v33 = NtCurrentTeb();
  ActivationContextStackPointer = v33->ActivationContextStackPointer;
  if ( ActivationContextStackPointer->ActiveFrame )
  {
    v9 = ActivationContextStackPointer->ActiveFrame->ActivationContext;
    v36 = v9;
  }
  else
  {
    v9 = ActivationContext;
  }
LABEL_12:
  v14 = &v34;
  if ( (Flags & 0x40000000) == 0 )
    v14 = 0LL;
  NotificationContext = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  if ( v9 )
  {
    if ( v9 != (PACTIVATION_CONTEXT)-4LL )
    {
      if ( v9 == (PACTIVATION_CONTEXT)-3LL )
      {
        NotificationContext = "Actx ";
        v29 = "Actx ";
      }
      else
      {
        NotificationContext = (const char *)v9->NotificationContext;
        v29 = NotificationContext;
      }
      goto LABEL_18;
    }
    v16 = 776LL;
    goto LABEL_17;
  }
  if ( !v14 )
    goto LABEL_16;
  v22 = *((_DWORD *)v14 + 6) & 7;
  if ( v22 <= 1 )
  {
    v11 = 0;
LABEL_16:
    v16 = 760LL;
LABEL_17:
    v27 = v16;
    NotificationContext = *(const char **)(&NtCurrentPeb()->InheritedAddressSpace + v16);
    v29 = NotificationContext;
    v9 = v36;
    goto LABEL_18;
  }
  if ( v22 == 2 )
  {
    v16 = 776LL;
    v11 = 0;
    goto LABEL_17;
  }
  if ( v22 != 4 )
  {
    RunLevel = -1073741584;
    v11 = 0;
    goto LABEL_21;
  }
  v11 = 0;
LABEL_18:
  if ( !NotificationContext )
  {
    NotificationContext = "Actx ";
    v29 = "Actx ";
  }
  RunLevel = 0;
LABEL_21:
  if ( RunLevel < 0 )
    goto LABEL_117;
  if ( !NotificationContext )
  {
    ActivationContext = (PACTIVATION_CONTEXT)0x180000000LL;
    switch ( ActivationContextInformationClass )
    {
      case ActivationContextDetailedInformation:
      case AssemblyDetailedInformationInActivationContext:
      case FileInformationInAssemblyOfAssemblyInActivationContext:
      case RunlevelInformationInActivationContext:
      case CompatibilityInformationInActivationContext:
      case ActivationContextManifestResourceName:
        goto LABEL_48;
      default:
        break;
    }
  }
  if ( ActivationContextInformationClass != ActivationContextBasicInformation )
  {
    switch ( ActivationContextInformationClass )
    {
      case ActivationContextDetailedInformation:
        InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                            NotificationContext,
                                                            ActivationContext,
                                                            ActivationContextInformation,
                                                            ActivationContextInformationLength,
                                                            ReturnLength);
        break;
      case AssemblyDetailedInformationInActivationContext:
        if ( !v8 )
        {
          RunLevel = -1073741811;
          goto LABEL_117;
        }
        InformationActivationContextDetailedInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                            NotificationContext,
                                                            v8->ulAssemblyIndex,
                                                            ActivationContextInformation,
                                                            ActivationContextInformationLength,
                                                            ReturnLength);
        break;
      case FileInformationInAssemblyOfAssemblyInActivationContext:
        if ( !v8 )
        {
          RunLevel = -1073741811;
          goto LABEL_117;
        }
        InformationActivationContextDetailedInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                            (_DWORD)NotificationContext,
                                                            (_DWORD)v8,
                                                            (_DWORD)ActivationContextInformation,
                                                            ActivationContextInformationLength,
                                                            (__int64)ReturnLength);
        break;
      case RunlevelInformationInActivationContext:
        if ( ActivationContextInformationLength >= 0xC )
        {
          *(_QWORD *)ActivationContextInformation = 0LL;
          *((_DWORD *)ActivationContextInformation + 2) = 0;
          RunLevel = RtlpQueryRunLevel(
                       (unsigned int)(ActivationContextInformationClass - 5),
                       NotificationContext,
                       ActivationContextInformation);
          if ( RunLevel >= 0 )
          {
            if ( ReturnLength )
              *ReturnLength = 12LL;
            goto LABEL_37;
          }
        }
        else
        {
          RunLevel = -1073741789;
          if ( ReturnLength )
            *ReturnLength = 12LL;
        }
        goto LABEL_117;
      case CompatibilityInformationInActivationContext:
        InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                            NotificationContext,
                                                            ActivationContextInformation,
                                                            ActivationContextInformationLength,
                                                            ReturnLength);
        break;
      case ActivationContextManifestResourceName:
        InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                            NotificationContext,
                                                            ActivationContextInformation,
                                                            ActivationContextInformationLength,
                                                            ReturnLength);
        break;
      default:
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
          "RtlQueryInformationActivationContext",
          ActivationContextInformationClass);
        RunLevel = -1073741595;
        goto LABEL_117;
    }
    RunLevel = InformationActivationContextDetailedInformation;
    if ( InformationActivationContextDetailedInformation < 0 )
      goto LABEL_117;
LABEL_37:
    RunLevel = 0;
    goto LABEL_117;
  }
  v30 = 0;
  if ( (Flags & 0x80000000) != 0 )
    v11 = 1;
  v30 = v11;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( ActivationContextInformationLength < 0x10 )
  {
    if ( ReturnLength )
      *ReturnLength = 16LL;
    RunLevel = -1073741789;
  }
  else
  {
    if ( NotificationContext )
      *((_DWORD *)ActivationContextInformation + 2) = *((_DWORD *)NotificationContext + 7);
    else
      *((_DWORD *)ActivationContextInformation + 2) = 0;
    if ( (v11 & 1) == 0
      && v9
      && (((unsigned __int64)&v9[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
      && v9->RefCount != 0x7FFFFFFF )
    {
      do
      {
        if ( v9->RefCount == 0x7FFFFFFF )
          break;
        RefCount = v9->RefCount;
      }
      while ( RefCount != _InterlockedCompareExchange(&v9->RefCount, RefCount + 1, RefCount) );
    }
    *(_QWORD *)ActivationContextInformation = v9;
    if ( ReturnLength )
      *ReturnLength = 16LL;
    RunLevel = 0;
  }
  if ( RunLevel >= 0 )
    goto LABEL_37;
LABEL_117:
  if ( BaseAddress )
    LdrpDereferenceModule(BaseAddress);
  return RunLevel;
}
