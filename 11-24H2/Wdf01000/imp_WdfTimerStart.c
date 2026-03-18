/*
 * XREFs of imp_WdfTimerStart @ 0x1400578F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall imp_WdfTimerStart(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Timer, LARGE_INTEGER DueTime)
{
  __int64 v5; // rcx
  unsigned __int64 flags; // rbx
  char v7; // al
  BOOLEAN v8; // r14
  char v9; // si
  unsigned __int8 v10; // di
  unsigned __int8 v11; // r8
  unsigned int v12; // edx
  FxTagTracker *v13; // rcx
  __int64 v14; // r9
  BOOLEAN v15; // al
  unsigned __int8 v16; // r8
  FxVerifierLock **v17; // rdi
  unsigned __int64 *v18; // rsi
  KIRQL v19; // al
  unsigned __int8 v20; // r8
  __int64 v22; // rax
  unsigned __int8 v23; // dl
  unsigned __int16 v24; // r9
  FxVerifierLock *v25; // rcx
  FxVerifierLock *v26; // rcx
  const void *v27; // rcx
  const void *v28; // rax
  const _GUID *Dpc; // [rsp+20h] [rbp-60h]
  unsigned __int8 PreviousIrql[8]; // [rsp+50h] [rbp-30h] BYREF
  FxTimer *pFxTimer; // [rsp+58h] [rbp-28h] BYREF
  FxTimer **p_pFxTimer; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h]

  if ( !Timer )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1028uLL);
  LOWORD(v5) = 0;
  flags = ~Timer & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Timer & 1) != 0 )
  {
    v5 = *(unsigned __int16 *)flags;
    flags -= v5;
  }
  if ( *(_WORD *)(flags + 8) == 4136 )
  {
    pFxTimer = (FxTimer *)flags;
  }
  else
  {
    pFxTimer = 0LL;
    p_pFxTimer = &pFxTimer;
    WORD1(v33) = v5;
    HIDWORD(v33) = 0;
    v22 = *(_QWORD *)flags;
    LOWORD(v33) = 4136;
    if ( (*(int (__fastcall **)(unsigned __int64, FxTimer ***))(v22 + 40))(flags, &p_pFxTimer) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        v23,
        DueTime.LowPart,
        v24,
        Dpc,
        (const void *)Timer,
        0x1028u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, Timer, 0x1028uLL);
    }
    flags = (unsigned __int64)pFxTimer;
  }
  v7 = *(_BYTE *)(flags + 24);
  v8 = 0;
  PreviousIrql[0] = 0;
  v9 = 0;
  if ( v7 < 0 && (v25 = *(FxVerifierLock **)(flags - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v25, PreviousIrql, DueTime.LowPart);
    v10 = PreviousIrql[0];
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(flags + 112));
    PreviousIrql[0] = v10;
  }
  if ( *(_BYTE *)(flags + 346) )
  {
    if ( *(_WORD *)(flags + 10) )
      v27 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v27 = 0LL;
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(flags + 16), 2u, 0x12u, 0xFu, WPP_FxTimer_cpp_Traceguids, v27);
    FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(flags + 16));
  }
  else if ( *(_QWORD *)(flags + 336) )
  {
    if ( *(_WORD *)(flags + 10) )
      v28 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v28 = 0LL;
    WPP_IFR_SF_qq(
      *(_FX_DRIVER_GLOBALS **)(flags + 16),
      2u,
      0x12u,
      0x10u,
      WPP_FxTimer_cpp_Traceguids,
      v28,
      *(const void **)(flags + 336));
    *(_BYTE *)(flags + 345) = 1;
  }
  else
  {
    v9 = 1;
  }
  if ( *(char *)(flags + 24) < 0 && (v26 = *(FxVerifierLock **)(flags - 40)) != 0LL )
    FxVerifierLock::Unlock(v26, v10, v11);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)(flags + 112), v10);
  if ( v9 )
  {
    v12 = _InterlockedIncrement((volatile signed __int32 *)(flags + 12));
    if ( *(char *)(flags + 24) < 0 )
    {
      v13 = *(FxTagTracker **)(flags - 48);
      if ( v13 )
        FxTagTracker::UpdateTagHistory(
          v13,
          (void *)flags,
          629,
          "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
          TagAddRef,
          v12);
    }
    v14 = *(unsigned int *)(flags + 284);
    if ( *(_BYTE *)(flags + 124) )
    {
      p_pFxTimer = 0LL;
      if ( (_DWORD)v14 == -1 )
        v33 = -1LL;
      else
        v33 = 10000 * v14;
      v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
              *(_QWORD *)(flags + 136),
              (LARGE_INTEGER)DueTime.QuadPart,
              10000LL * *(int *)(flags + 120),
              &p_pFxTimer);
    }
    else
    {
      v15 = KeSetCoalescableTimer((PKTIMER)(flags + 136), DueTime, *(_DWORD *)(flags + 120), v14, (PKDPC)(flags + 200));
    }
    v8 = v15;
    v17 = (FxVerifierLock **)(flags - 40);
    if ( *(char *)(flags + 24) < 0 && *v17 )
    {
      FxVerifierLock::Lock(*v17, PreviousIrql, v16);
      v19 = PreviousIrql[0];
      v18 = (unsigned __int64 *)(flags + 112);
    }
    else
    {
      v18 = (unsigned __int64 *)(flags + 112);
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(flags + 112));
    }
    if ( *(_QWORD *)(flags + 336) )
      *(_BYTE *)(flags + 344) = 1;
    if ( *(char *)(flags + 24) < 0 && *v17 )
      FxVerifierLock::Unlock(*v17, v19, v20);
    else
      KeReleaseSpinLock(v18, v19);
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64, const char *))(*(_QWORD *)flags + 16LL))(
      flags,
      flags,
      646LL,
      "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  return v8;
}
