/*
 * XREFs of RtlFindActivationContextSectionString @ 0x180073890
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180073190 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpQuerySxSMUIFile @ 0x18009A09C (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x18001E700 (RtlAddRefActivationContext.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18001E96C (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     RtlpFindUnicodeStringInSection @ 0x180073BF0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindNextActivationContextSection @ 0x180074170 (RtlpFindNextActivationContextSection.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl RtlFindActivationContextSectionString(
        ULONG Flags,
        PGUID ExtensionGuid,
        ULONG SectionId,
        PUNICODE_STRING StringToFind,
        PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
  struct _TEB *v6; // rcx
  int v7; // r12d
  _PEB *ProcessEnvironmentBlock; // rax
  NTSTATUS NextActivationContextSection; // ebx
  int v11; // r14d
  _DWORD *v12; // r15
  int UnicodeStringInSection; // eax
  int v14; // eax
  PACTIVATION_CONTEXT v15; // r13
  void (__fastcall *v16)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, _BYTE *); // rax
  _BYTE v17[4]; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-1Dh] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-19h] BYREF
  int v20; // [rsp+50h] [rbp-11h] BYREF
  int v21; // [rsp+54h] [rbp-Dh] BYREF
  _ACTIVATION_CONTEXT *v22; // [rsp+58h] [rbp-9h] BYREF
  PACTIVATION_CONTEXT ActivationContext; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v24; // [rsp+68h] [rbp+7h] BYREF
  ULONG v25; // [rsp+6Ch] [rbp+Bh]
  PGUID v26; // [rsp+70h] [rbp+Fh]
  ULONG v27; // [rsp+78h] [rbp+17h]
  __int64 v28; // [rsp+7Ch] [rbp+1Bh]
  int v29; // [rsp+84h] [rbp+23h]

  v6 = NtCurrentTeb();
  v7 = (int)StringToFind;
  v29 = 0;
  v19 = 0LL;
  ProcessEnvironmentBlock = v6->ProcessEnvironmentBlock;
  if ( ProcessEnvironmentBlock->ActivationContextData
    || ProcessEnvironmentBlock->SystemDefaultActivationContextData
    || v6->ActivationContextStackPointer->ActiveFrame )
  {
    v18 = 0;
    v21 = -1;
    v20 = 0;
    if ( !StringToFind || (Flags & 0xFFFFFFF8) != 0 )
      return -1073741811;
    if ( (Flags & 7) != 0 )
    {
      if ( !ReturnedData )
        return -1073741811;
    }
    else if ( !ReturnedData )
    {
      goto LABEL_7;
    }
    if ( ReturnedData->cbSize >= 0x40 )
    {
LABEL_7:
      if ( (Flags & 2) != 0
        && &ReturnedData->AssemblyMetadata > (ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA *)((char *)ReturnedData
                                                                                           + ReturnedData->cbSize) )
      {
        NextActivationContextSection = -1073741811;
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n",
          "RtlpFindActivationContextSection_CheckParameters",
          -1073741811);
      }
      else if ( (Flags & 4) != 0
             && &ReturnedData[1] > (PACTCTX_SECTION_KEYED_DATA)((char *)ReturnedData + ReturnedData->cbSize) )
      {
        NextActivationContextSection = -1073741811;
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n",
          "RtlpFindActivationContextSection_CheckParameters",
          -1073741811);
      }
      else
      {
        v26 = ExtensionGuid;
        v27 = SectionId;
        v24 = 32;
        v25 = Flags;
        v28 = 0LL;
        v22 = 0LL;
        NextActivationContextSection = RtlpFindNextActivationContextSection(&v24, &v19, &v18, &v22);
        if ( NextActivationContextSection >= 0 )
        {
          v15 = v22;
          while ( 1 )
          {
            v11 = v18;
            v12 = v19;
            if ( v18 < 0x2C || *v19 != 1682469715 )
            {
              DbgPrintEx(
                0x33u,
                0,
                "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
                v19,
                v18);
              return -1072365565;
            }
            UnicodeStringInSection = RtlpFindUnicodeStringInSection(
                                       (_DWORD)v19,
                                       v18,
                                       v7,
                                       (_DWORD)ReturnedData,
                                       (__int64)&v21,
                                       (__int64)&v20);
            NextActivationContextSection = UnicodeStringInSection;
            if ( UnicodeStringInSection >= 0 )
              break;
            if ( UnicodeStringInSection != -1072365560 )
              return NextActivationContextSection;
            ActivationContext = 0LL;
            if ( v24 < 0x20 || (v25 & 0xFFFFFFF8) != 0 )
              return -1073741811;
            v14 = RtlpFindNextActivationContextSection(&v24, &v19, &v18, &ActivationContext);
            NextActivationContextSection = v14;
            if ( v14 < 0 )
            {
              if ( v14 == -1072365567 )
                return -1072365560;
              return NextActivationContextSection;
            }
            v15 = ActivationContext;
            RtlAddRefActivationContext(ActivationContext);
          }
          if ( (((unsigned __int64)&v15[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
          {
            v16 = *(void (__fastcall **)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, _BYTE *))v15->SentNotifications;
            if ( v16 )
            {
              if ( (v15->SentNotifications[4] & 8) == 0 || (v15->DisabledNotifications[4] & 8) == 0 )
              {
                v17[0] = 0;
                v16(3LL, v15, v15->NotificationContext, *(_QWORD *)&v15->SentNotifications[2], 0LL, v17);
                v15->SentNotifications[4] |= 8u;
                if ( v17[0] )
                  v15->DisabledNotifications[4] |= 8u;
              }
            }
          }
          if ( !ReturnedData )
            return 0;
          NextActivationContextSection = RtlpFindActivationContextSection_FillOutReturnedData(
                                           Flags,
                                           (__int64)ReturnedData,
                                           v15,
                                           (__int64)&v24,
                                           (__int64)v12,
                                           v12[9],
                                           v12[10],
                                           v11);
          if ( NextActivationContextSection >= 0 )
            return 0;
        }
      }
      return NextActivationContextSection;
    }
    return -1073741811;
  }
  return -1072365567;
}
