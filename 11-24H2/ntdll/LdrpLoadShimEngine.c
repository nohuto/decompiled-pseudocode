/*
 * XREFs of LdrpLoadShimEngine @ 0x1800AD9B0
 * Callers:
 *     LdrInitShimEngineDynamic @ 0x1800ACB80 (LdrInitShimEngineDynamic.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180037BF0 (LdrpLoadDll.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpPinModule @ 0x180089BC8 (LdrpPinModule.c)
 *     LdrpInitializeNode @ 0x18008C3E0 (LdrpInitializeNode.c)
 *     LdrpInitializeDllPath @ 0x1800AD900 (LdrpInitializeDllPath.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x1800ADC7C (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x1800ADD0C (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializationFailure @ 0x1800AE1D4 (LdrpInitializationFailure.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

char __fastcall LdrpLoadShimEngine(wchar_t *String)
{
  char v2; // r14
  void (__fastcall *v3)(_QWORD); // r15
  __int64 v4; // rdi
  __int64 *v5; // rbx
  size_t v7; // rax
  int Dll; // eax
  char *v9; // rbx
  PVOID v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int32 v13; // edi
  __int64 i; // rax
  __int64 v15; // [rsp+38h] [rbp-89h]
  __int128 v16; // [rsp+48h] [rbp-79h] BYREF
  PVOID BaseAddress[2]; // [rsp+58h] [rbp-69h] BYREF
  __int64 v18[16]; // [rsp+68h] [rbp-59h] BYREF

  memset_thunk_772440563353939046(v18, 0, 0x80uLL);
  BaseAddress[0] = 0LL;
  v16 = 0LL;
  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, (__int64)v18);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *String )
  {
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = String;
    v7 = 2 * wcslen(String);
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    LOWORD(v16) = v7;
    WORD1(v16) = v7 + 2;
    Dll = LdrpLoadDll((unsigned __int16 *)&v16, (int)v18, 1, (__int64)BaseAddress);
    if ( Dll < 0 )
    {
      LODWORD(v15) = Dll;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        3357,
        (__int64)"LdrpLoadShimEngine",
        0,
        "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
        &v16,
        v15);
      v2 = 0;
    }
    else
    {
      v9 = (char *)BaseAddress[0];
      v10 = BaseAddress[0];
      *((_DWORD *)BaseAddress[0] + 26) |= 0x100u;
      LdrpPinModule((__int64)v10);
      v11 = *((_QWORD *)v9 + 19);
      if ( *(_DWORD *)(v11 + 56) == 7 )
      {
        v12 = LdrpInitializeNode(v11);
        v13 = v12;
        if ( v12 < 0 )
        {
          LODWORD(v15) = v12;
          LdrpLogInternal(
            "minkernel\\ldr\\ldrinit.c",
            3383,
            (__int64)"LdrpLoadShimEngine",
            0,
            "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
            &v16,
            v15);
          v2 = 0;
          LdrpInitializationFailure(v13);
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v13);
          break;
        }
      }
      v3(*((_QWORD *)v9 + 6));
      LdrpDereferenceModule(v9);
    }
    String += (unsigned __int64)WORD1(v16) >> 1;
  }
  LdrpReleaseDllPath(v18);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_1801D18D0; (__int64 *)i != &qword_1801D18D0; i = *(_QWORD *)i )
      *(_BYTE *)(i + 105) &= ~8u;
  }
  v5 = (__int64 *)qword_1801D18D0;
  if ( LdrInitState >= 2 )
    goto LABEL_8;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_8:
    if ( v5 == &qword_1801D18D0 )
      break;
    LdrpSendShimEngineInitialNotifications(v5[19], v4);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
