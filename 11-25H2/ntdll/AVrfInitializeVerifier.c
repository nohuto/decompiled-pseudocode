/*
 * XREFs of AVrfInitializeVerifier @ 0x18011B9E0
 * Callers:
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800B270C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 *     LdrGetProcedureAddressEx @ 0x180007BB0 (LdrGetProcedureAddressEx.c)
 *     LdrpInitializeGraphRecurse @ 0x180008690 (LdrpInitializeGraphRecurse.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800B260C (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D04C4 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x180118E80 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpParseVerifierDllsString @ 0x18011AFB4 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x18011F4F4 (AVrfpVerifierStopInitialize.c)
 *     AVrfpEnableVerifierOptions @ 0x180120144 (AVrfpEnableVerifierOptions.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x180121B54 (AVrfpChainDuplicateVerificationLayers.c)
 */

__int64 __fastcall AVrfInitializeVerifier(char a1, __int64 a2, void *a3, int a4, void *a5, _QWORD *a6)
{
  struct _PEB *v6; // r14
  int Dll; // ebx
  __int64 *i; // rbx
  int LoadedDllByName; // eax
  void *v13; // rbx
  NTSTATUS v14; // ebx
  __int64 *j; // rdi
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  unsigned int NtGlobalFlag; // r11d
  int v21; // r14d
  int v22; // eax
  ULONG Flags[2]; // [rsp+20h] [rbp-20h]
  PVOID BaseAddress; // [rsp+30h] [rbp-10h] BYREF
  PVOID ProcedureAddress; // [rsp+38h] [rbp-8h] BYREF
  int v27; // [rsp+88h] [rbp+48h] BYREF

  v6 = NtCurrentPeb();
  BaseAddress = 0LL;
  ProcedureAddress = 0LL;
  v27 = 0;
  if ( !a4 )
  {
    v19 = a6;
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v6->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      v21 = 1;
    }
    else
    {
      v21 = 0;
      if ( LdrpPayloadRestrictionMitigationsEnabled() )
        v21 = 2;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v22 = 0, a1) )
      v22 = 294916;
    AVrfpVerifierFlags = v22;
    LOWORD(AVrfpVerifierDllsString[0]) = 0;
    if ( a3 )
    {
      RtlQueryImageFileKeyOption(a3, (wchar_t *)L"VerifierFlags", 4, (ULONG *)&v27, 4u, 0LL);
      LOBYTE(v22) = v27;
      if ( v27 )
      {
        AVrfpVerifierFlags = v27;
LABEL_45:
        if ( (v22 & 4) != 0 )
          RtlQueryImageFileKeyOption(a3, (wchar_t *)L"HandleTraces", 4, (ULONG *)&AVrfpHandleTraces, 4u, 0LL);
        RtlQueryImageFileKeyOption(a3, (wchar_t *)L"VerifierDebug", 4, (ULONG *)&AVrfpDebug, 4u, 0LL);
        RtlQueryImageFileKeyOption(a3, (wchar_t *)L"VerifierDlls", 1, AVrfpVerifierDllsString, 0x200u, 0LL);
LABEL_48:
        Dll = AvrfMiniLoadDll((__int64)&VerifierDllString, a2, (__int64)a3, a5, (__int64)&AvrfpLoaderEntry);
        if ( Dll >= 0 )
        {
          *v19 = &AvrfpLoaderEntry;
          Dll = AVrfpEnableVerifierOptions();
          if ( Dll >= 0 )
          {
            LdrProtectMrdata(0);
            AvrfAppVerifierMode = v21;
            LdrProtectMrdata(1);
          }
        }
        return (unsigned int)Dll;
      }
      LOBYTE(v22) = AVrfpVerifierFlags;
    }
    if ( a1 )
      AVrfpEnabledSystemWide = 1;
    if ( !a3 )
      goto LABEL_48;
    goto LABEL_45;
  }
  if ( a4 != 1 )
    return 0;
  qword_1801D6598 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx(&AVrfpVerifierLock, 0, 0);
  if ( Dll >= 0 )
  {
    if ( AvrfAppVerifierMode == 2 )
    {
      LOBYTE(v27) = 0;
      Dll = LdrpInitializeGraphRecurse(qword_1801D66F8, 0LL, &v27);
      if ( Dll < 0 )
        return (unsigned int)Dll;
    }
    else
    {
      DbgPrintEx(
        0x5Du,
        0,
        "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
        *(_QWORD *)(qword_1801D4950 + 96),
        NtCurrentTeb()->ClientId.UniqueProcess,
        AVrfpVerifierFlags);
      if ( (int)AVrfpParseVerifierDllsString() < 0 )
      {
        Flags[0] = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
        DbgPrintEx(
          0x5Du,
          0,
          "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
          *(_QWORD *)(qword_1801D4950 + 96),
          *(_QWORD *)Flags);
        Dll = -1073741823;
        NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
        return (unsigned int)Dll;
      }
      for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
      {
        if ( !AVrfpLoadAndInitializeProvider((__int64)i) )
          return (unsigned int)-1073741502;
      }
      AVrfpChainDuplicateVerificationLayers();
      LoadedDllByName = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0, &BaseAddress, 0LL);
      Dll = LoadedDllByName;
      if ( LoadedDllByName < 0 )
      {
        if ( LoadedDllByName != -1073741515 )
          return (unsigned int)Dll;
        v13 = (void *)qword_1801D65F0;
      }
      else
      {
        v13 = (void *)*((_QWORD *)BaseAddress + 6);
        LdrpDereferenceModule((char *)BaseAddress);
      }
      v14 = LdrGetProcedureAddressEx(v13, (PANSI_STRING)&AvrfpAPILookupCallbackName, 0, &ProcedureAddress, 1u);
      LdrProtectMrdata(0);
      if ( v14 >= 0 )
      {
        AvrfpAPILookupCallbackRoutine = __ROR8__(
                                          (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                          MEMORY[0x7FFE0330] & 0x3F);
        AvrfpAPILookupCallbacksEnabled = 1;
      }
      AVrfpEnabled = 1;
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
      AVrfpSnapAlreadyLoadedDlls();
      LdrpInitializeTls();
      for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
      {
        v16 = j[4];
        LOBYTE(v27) = 0;
        Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v16 + 152), 0LL, &v27);
        if ( Dll < 0 )
          return (unsigned int)Dll;
      }
      if ( (AVrfpDebug & 8) != 0 )
      {
        DbgPrint("AVRF: -*- final list of providers -*- \n");
        v17 = (__int64 *)AVrfpVerifierProvidersList;
        while ( v17 != &AVrfpVerifierProvidersList )
        {
          v18 = v17[3];
          v17 = (__int64 *)*v17;
          DbgPrint("AVRF: provider %ws \n", v18);
        }
      }
      AVrfpVerifierStopInitialize();
      RtlImageNtHeaderEx(3u, v6->ImageBaseAddress, 0LL, (PIMAGE_NT_HEADERS *)&ProcedureAddress);
    }
    return 0;
  }
  return (unsigned int)Dll;
}
