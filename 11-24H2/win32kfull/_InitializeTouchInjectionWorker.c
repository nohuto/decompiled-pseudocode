/*
 * XREFs of _InitializeTouchInjectionWorker @ 0x140278960
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x140277F64 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     NtUserInitializeTouchInjection @ 0x140298BC0 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     CleanupInjectedTouchProcess @ 0x140234DB0 (CleanupInjectedTouchProcess.c)
 *     CreatePseudoDigitizerDevice @ 0x140279418 (CreatePseudoDigitizerDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InitializeTouchInjectionWorker(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 PseudoDigitizerDevice; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int128 v18; // xmm0
  __int64 v19; // rax
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  v5 = a1;
  v7 = ((unsigned __int64)(5000LL * gliQpcFreq) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  gullTouchInjectionMaxTimeOffset = (v7 + ((unsigned __int64)(5000LL * gliQpcFreq - v7) >> 1)) >> 9;
  if ( *(_QWORD *)(a3 + 888) )
    CleanupInjectedTouchProcess(a3);
  v8 = Win32AllocPoolWithQuotaZInit(104LL, 1953067861LL);
  v9 = v8;
  if ( !v8 )
    goto LABEL_12;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v5, a2, v8);
  if ( !PseudoDigitizerDevice )
    goto LABEL_12;
  if ( !*(_QWORD *)(a3 + 888) )
  {
    v11 = Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    v14 = (_QWORD *)v11;
    if ( !v11 )
    {
LABEL_12:
      UserSetLastError(14);
      return 0LL;
    }
    *(_QWORD *)(v11 + 8) = a3;
    v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19320);
    *v14 = v15;
    *(_QWORD *)(W32GetUserSessionState(v15, v16) + 19320) = v14;
  }
  *(_QWORD *)(a3 + 888) = v9;
  v21[0] = v9 + 16;
  v21[1] = PseudoDigitizerDevice;
  HMAssignmentLock(v21, 0LL);
  v17 = v5;
  v18 = *(_OWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 456) + 160LL);
  *(_DWORD *)(v9 + 24) = a2;
  *(_DWORD *)(v9 + 28) = v5;
  *(_OWORD *)v9 = v18;
  v19 = Win32AllocPoolWithQuotaZInit(12 * v5, 1953067861LL);
  if ( !v19 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 80) = v19;
  if ( (_DWORD)v5 )
  {
    do
    {
      v4 += 12LL;
      *(_DWORD *)(*(_QWORD *)(v9 + 80) + v4 - 4) = 0x40000;
      --v17;
    }
    while ( v17 );
  }
  return 1LL;
}
