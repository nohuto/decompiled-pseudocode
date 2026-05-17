/*
 * XREFs of LdrpLoadShimEngine @ 0x1800D1760
 * Callers:
 *     LdrInitShimEngineDynamic @ 0x1800D01B0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitShimEngine @ 0x1800D0BF0 (LdrpInitShimEngine.c)
 * Callees:
 *     LdrpPinModule @ 0x18003E278 (LdrpPinModule.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18004A090 (LdrpLoadDll.c)
 *     LdrpInitializeNode @ 0x180073610 (LdrpInitializeNode.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x1800D1A2C (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x1800D1ABC (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializationFailure @ 0x1800D1C78 (LdrpInitializationFailure.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char __fastcall LdrpLoadShimEngine(wchar_t *String)
{
  char v2; // r14
  void (__fastcall *v3)(_QWORD); // r15
  __int64 v4; // rdi
  __int64 *v5; // rbx
  size_t v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edi
  __int64 i; // rax
  char v13[16]; // [rsp+48h] [rbp-79h] BYREF
  __int64 v14; // [rsp+58h] [rbp-69h] BYREF
  __int64 v15[16]; // [rsp+68h] [rbp-59h] BYREF

  memset_thunk_772440563353939046(v15, 0, 0x80uLL);
  v14 = 0LL;
  *(_OWORD *)v13 = 0LL;
  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, (__int64)v15);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *String )
  {
    *(_QWORD *)v13 = 0LL;
    *(_QWORD *)&v13[8] = String;
    v7 = 2 * wcslen(String);
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    *(_WORD *)v13 = v7;
    *(_WORD *)&v13[2] = v7 + 2;
    if ( (int)LdrpLoadDll((unsigned __int16 *)v13, (__int64)v15, 1, (__int64)&v14) < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        3359,
        (__int64)"LdrpLoadShimEngine",
        0,
        "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
        (char)v13);
      v2 = 0;
    }
    else
    {
      v8 = v14;
      v9 = v14;
      *(_DWORD *)(v14 + 104) |= 0x100u;
      LdrpPinModule(v9);
      v10 = *(_QWORD *)(v8 + 152);
      if ( *(_DWORD *)(v10 + 56) == 7 )
      {
        v11 = LdrpInitializeNode(v10);
        if ( v11 < 0 )
        {
          LdrpLogInternal(
            (__int64)"minkernel\\ldr\\ldrinit.c",
            3385,
            (__int64)"LdrpLoadShimEngine",
            0,
            "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
            (char)v13);
          v2 = 0;
          LdrpInitializationFailure((unsigned int)v11);
          ZwTerminateProcess(-1LL, (unsigned int)v11);
          break;
        }
      }
      v3(*(_QWORD *)(v8 + 48));
      LdrpDereferenceModule(v8);
    }
    String += (unsigned __int64)*(unsigned __int16 *)&v13[2] >> 1;
  }
  LdrpReleaseDllPath(v15);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_1801D4950; (__int64 *)i != &qword_1801D4950; i = *(_QWORD *)i )
      *(_BYTE *)(i + 105) &= ~8u;
  }
  v5 = (__int64 *)qword_1801D4950;
  if ( LdrInitState >= 2 )
    goto LABEL_8;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_8:
    if ( v5 == &qword_1801D4950 )
      break;
    LdrpSendShimEngineInitialNotifications(v5[19], v4);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
