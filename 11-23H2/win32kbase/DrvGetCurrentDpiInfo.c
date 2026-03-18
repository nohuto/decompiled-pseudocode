/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x1C005DDB8
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x1C005DD20 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C005E15C (DrvGetCurrentDpiInfoFromHDev.c)
 *     ValidateHmonitor @ 0x1C0096E80 (ValidateHmonitor.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int CurrentDpiInfoFromHDev; // ebx

  if ( IsEtwUserCritEnabled() )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = SGDGetUserSessionState(v5, v4, v6, v7);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v9 + 8));
  EtwTraceAcquiredSharedUserCrit(v11, v10, v12, v13);
  v14 = ValidateHmonitor(a1);
  if ( v14 && (v16 = *(_QWORD *)(v14 + 80)) != 0 )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v16, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return CurrentDpiInfoFromHDev;
}
