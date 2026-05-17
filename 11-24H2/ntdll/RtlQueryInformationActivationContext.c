/*
 * XREFs of RtlQueryInformationActivationContext @ 0x18001ABD0
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18001A830 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800F22A8 (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueryInformationActiveActivationContext @ 0x1800F5720 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x18000F8E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18001BFD0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlPcToFileHeader @ 0x18006EF40 (RtlPcToFileHeader.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800F3F14 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryRunLevel @ 0x18010BA4C (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180111EFC (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180115A10 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x18011699C (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        volatile signed __int32 *a2,
        unsigned int *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned int *v8; // r11
  volatile signed __int32 *ActivationContext; // r14
  int v11; // ecx
  int v12; // eax
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  __int128 *v14; // rax
  const char *v15; // r10
  __int64 v16; // r10
  int RunLevel; // ebx
  int InformationActivationContextDetailedInformation; // eax
  signed __int32 v19; // eax
  PVOID v20; // rax
  int LoadedDllByHandle; // eax
  unsigned int v22; // ecx
  int v23; // eax
  int v25; // [rsp+30h] [rbp-88h]
  int v26; // [rsp+34h] [rbp-84h] BYREF
  __int64 v27; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+40h] [rbp-78h] BYREF
  const char *v29; // [rsp+48h] [rbp-70h]
  int v30; // [rsp+50h] [rbp-68h]
  PVOID BaseOfImage; // [rsp+58h] [rbp-60h] BYREF
  struct _TEB *v32; // [rsp+60h] [rbp-58h]
  struct _TEB *v33; // [rsp+68h] [rbp-50h]
  __int128 v34; // [rsp+70h] [rbp-48h] BYREF
  __int128 v35; // [rsp+80h] [rbp-38h]
  volatile signed __int32 *v36; // [rsp+C8h] [rbp+10h]

  v36 = a2;
  v8 = a3;
  ActivationContext = a2;
  v34 = 0LL;
  v35 = 0LL;
  v11 = 0;
  v26 = 0;
  v28 = 0LL;
  DWORD2(v35) = 4;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
    goto LABEL_47;
  if ( a1 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
    RunLevel = -1073741585;
    goto LABEL_117;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    RunLevel = -1073741583;
    goto LABEL_117;
  }
  if ( a6 )
  {
    if ( !a5 )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      RunLevel = -1073741582;
      goto LABEL_117;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    RunLevel = -1073741580;
    goto LABEL_117;
  }
  v12 = a1 & 7;
  if ( v12 != 1 )
  {
    if ( (a1 & 7) == 0 )
      goto LABEL_12;
    if ( v12 != 2 )
    {
      if ( v12 != 4 )
      {
LABEL_47:
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
          "RtlQueryInformationActivationContext",
          a1);
LABEL_48:
        RunLevel = -1073741585;
        goto LABEL_117;
      }
      BaseOfImage = 0LL;
      if ( !a2 )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_79;
      }
      v20 = RtlPcToFileHeader((PVOID)a2, &BaseOfImage);
      BaseOfImage = v20;
      if ( !v20 )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          (const void *)ActivationContext);
        RunLevel = -1073741515;
        goto LABEL_117;
      }
      ActivationContext = (volatile signed __int32 *)v20;
      v36 = (volatile signed __int32 *)v20;
    }
    if ( ActivationContext )
    {
      LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)ActivationContext, &v28, &v26);
      RunLevel = LoadedDllByHandle;
      v25 = LoadedDllByHandle;
      a2 = 0LL;
      if ( LoadedDllByHandle >= 0 && v26 < 5 )
      {
        v32 = NtCurrentTeb();
        if ( (v32->SameTebFlags & 0x1000) != 0 )
        {
          RunLevel = LoadedDllByHandle;
        }
        else
        {
          LdrpDrainWorkQueue(0);
          v23 = v25;
          if ( *(_DWORD *)(*(_QWORD *)(v28 + 152) + 56LL) != 9 )
            v23 = -1073741515;
          RunLevel = v23;
          LdrpDropLastInProgressCount();
        }
        ActivationContext = v36;
      }
      v11 = 0;
      if ( RunLevel < 0 )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller passed invalid hmodule (%p)\n",
          "RtlQueryInformationActivationContext",
          (const void *)ActivationContext);
        goto LABEL_117;
      }
      ActivationContext = *(volatile signed __int32 **)(v28 + 136);
      v36 = ActivationContext;
      v8 = a3;
      goto LABEL_12;
    }
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
LABEL_79:
    RunLevel = -1073741584;
    goto LABEL_117;
  }
  if ( a2 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      (const void *)a2);
    RunLevel = -1073741584;
    goto LABEL_117;
  }
  v33 = NtCurrentTeb();
  ActivationContextStackPointer = v33->ActivationContextStackPointer;
  if ( ActivationContextStackPointer->ActiveFrame )
  {
    ActivationContext = (volatile signed __int32 *)ActivationContextStackPointer->ActiveFrame->ActivationContext;
    v36 = ActivationContext;
  }
  else
  {
    ActivationContext = a2;
  }
LABEL_12:
  v14 = &v34;
  if ( (a1 & 0x40000000) == 0 )
    v14 = 0LL;
  v15 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  if ( ActivationContext )
  {
    if ( ActivationContext != (volatile signed __int32 *)-4LL )
    {
      if ( ActivationContext == (volatile signed __int32 *)-3LL )
      {
        v15 = "Actx ";
        v29 = "Actx ";
      }
      else
      {
        v15 = (const char *)*((_QWORD *)ActivationContext + 3);
        v29 = v15;
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
    v15 = *(const char **)(&NtCurrentPeb()->InheritedAddressSpace + v16);
    v29 = v15;
    ActivationContext = v36;
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
  if ( !v15 )
  {
    v15 = "Actx ";
    v29 = "Actx ";
  }
  RunLevel = 0;
LABEL_21:
  if ( RunLevel < 0 )
    goto LABEL_117;
  if ( !v15 )
  {
    a2 = (volatile signed __int32 *)0x180000000LL;
    switch ( a4 )
    {
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        goto LABEL_48;
      default:
        break;
    }
  }
  if ( a4 != 1 )
  {
    switch ( a4 )
    {
      case 2:
        InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                            v15,
                                                            a2,
                                                            a5,
                                                            a6,
                                                            a7);
        break;
      case 3:
        if ( !v8 )
        {
          RunLevel = -1073741811;
          goto LABEL_117;
        }
        InformationActivationContextDetailedInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                            v15,
                                                            *v8,
                                                            a5,
                                                            a6,
                                                            a7);
        break;
      case 4:
        if ( !v8 )
        {
          RunLevel = -1073741811;
          goto LABEL_117;
        }
        InformationActivationContextDetailedInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                            (_DWORD)v15,
                                                            (_DWORD)v8,
                                                            a5,
                                                            a6,
                                                            (__int64)a7);
        break;
      case 5:
        if ( a6 >= 0xC )
        {
          *(_QWORD *)a5 = 0LL;
          *(_DWORD *)(a5 + 8) = 0;
          RunLevel = RtlpQueryRunLevel((unsigned int)(a4 - 5), v15, a5);
          if ( RunLevel >= 0 )
          {
            if ( a7 )
              *a7 = 12LL;
            goto LABEL_37;
          }
        }
        else
        {
          RunLevel = -1073741789;
          if ( a7 )
            *a7 = 12LL;
        }
        goto LABEL_117;
      case 6:
        InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                            v15,
                                                            a5,
                                                            a6,
                                                            a7);
        break;
      case 7:
        InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                            v15,
                                                            a5,
                                                            a6,
                                                            a7);
        break;
      default:
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
          "RtlQueryInformationActivationContext",
          a4);
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
  if ( a1 < 0 )
    v11 = 1;
  v30 = v11;
  if ( a7 )
    *a7 = 0LL;
  if ( a6 < 0x10 )
  {
    if ( a7 )
      *a7 = 16LL;
    RunLevel = -1073741789;
  }
  else
  {
    if ( v15 )
      *(_DWORD *)(a5 + 8) = *((_DWORD *)v15 + 7);
    else
      *(_DWORD *)(a5 + 8) = 0;
    if ( (v11 & 1) == 0
      && ActivationContext
      && (((unsigned __int64)ActivationContext - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL
      && *ActivationContext != 0x7FFFFFFF )
    {
      do
      {
        if ( *ActivationContext == 0x7FFFFFFF )
          break;
        v19 = *ActivationContext;
      }
      while ( v19 != _InterlockedCompareExchange(ActivationContext, v19 + 1, v19) );
    }
    *(_QWORD *)a5 = ActivationContext;
    if ( a7 )
      *a7 = 16LL;
    RunLevel = 0;
  }
  if ( RunLevel >= 0 )
    goto LABEL_37;
LABEL_117:
  if ( v28 )
    LdrpDereferenceModule(v28);
  return (unsigned int)RunLevel;
}
