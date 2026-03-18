/*
 * XREFs of imp_WdfTimerStop @ 0x140013A50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1400167FC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x14001FB34 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqq @ 0x14004D358 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall imp_WdfTimerStop(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Timer, unsigned int Wait)
{
  char v3; // di
  char v4; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  _KTIMER *v8; // rcx
  unsigned __int8 v9; // si
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  unsigned __int16 v15; // r9
  unsigned int v16; // edx
  FxVerifierDownlevelOption v17; // r9d
  _FX_DRIVER_GLOBALS *v18; // rcx
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // al
  unsigned __int8 v21; // r8
  __int64 v22; // rcx
  KIRQL CurrentIrql; // al
  const void *v24; // rax
  FxVerifierLock *v25; // rcx
  FxVerifierLock *v26; // rcx
  const void *v27; // r10
  const void *v28; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-40h]
  struct _KTHREAD *flags; // [rsp+38h] [rbp-28h]
  FxTimer **p_pFxTimer; // [rsp+50h] [rbp-10h] BYREF
  __int16 v32; // [rsp+58h] [rbp-8h]
  __int16 v33; // [rsp+5Ah] [rbp-6h]
  int v34; // [rsp+5Ch] [rbp-4h]
  unsigned __int8 PreviousIrql; // [rsp+98h] [rbp+38h] BYREF
  FxTimer *pFxTimer; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  v4 = Wait;
  if ( !Timer )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1028uLL);
  LOWORD(v6) = 0;
  v7 = ~Timer & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Timer & 1) != 0 )
  {
    v6 = *(unsigned __int16 *)v7;
    v7 -= v6;
  }
  if ( *(_WORD *)(v7 + 8) == 4136 )
  {
    pFxTimer = (FxTimer *)v7;
  }
  else
  {
    pFxTimer = 0LL;
    p_pFxTimer = &pFxTimer;
    v33 = v6;
    v34 = 0;
    v13 = *(_QWORD *)v7;
    v32 = 4136;
    if ( (*(int (__fastcall **)(unsigned __int64, FxTimer ***))(v13 + 40))(v7, &p_pFxTimer) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v7 + 16),
        v14,
        Wait,
        v15,
        traceGuid,
        (const void *)Timer,
        0x1028u,
        (const void *)v7,
        *(unsigned __int16 *)(v7 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v7 + 16), WDF_INVALID_HANDLE, Timer, 0x1028uLL);
    }
    v7 = (unsigned __int64)pFxTimer;
  }
  if ( !v4 )
  {
LABEL_7:
    PreviousIrql = 0;
    if ( v4 )
    {
      if ( pFxTimer->m_CallbackThread == KeGetCurrentThread() )
      {
        if ( pFxTimer->m_ObjectSize )
          v24 = (const void *)((unsigned __int64)pFxTimer ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v24 = 0LL;
        WPP_IFR_SF_qq(
          pFxTimer->m_Globals,
          2u,
          0x12u,
          0x11u,
          WPP_FxTimer_cpp_Traceguids,
          v24,
          pFxTimer->m_CallbackThread);
      }
      else
      {
        if ( !pFxTimer->m_Globals->FxVerifierOn || !KeGetCurrentIrql() )
        {
          if ( *(char *)(v7 + 24) < 0 && (v26 = *(FxVerifierLock **)(v7 - 40)) != 0LL )
            FxVerifierLock::Lock(v26, &PreviousIrql, Wait);
          else
            PreviousIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 112));
          if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(*(_FX_DRIVER_GLOBALS **)(v7 + 16), v16, 9u, v17) )
          {
            v27 = *(const void **)(v7 + 336);
            if ( v27 )
            {
              flags = KeGetCurrentThread();
              v28 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v7 + 10) )
                v28 = 0LL;
              WPP_IFR_SF_qqq(v18, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v28, v27, flags);
              FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v7 + 16));
            }
          }
          *(_BYTE *)(v7 + 345) = 0;
          *(_QWORD *)(v7 + 336) = KeGetCurrentThread();
          v20 = PreviousIrql;
          do
          {
            *(_BYTE *)(v7 + 344) = 0;
            FxNonPagedObject::Unlock((FxNonPagedObject *)v7, v20, v19);
            v9 = MxTimer::Stop((MxTimer *)(v7 + 120));
            KeFlushQueuedDpcs();
            v22 = *(_QWORD *)(v7 + 320);
            if ( v22 )
              FxCREvent::EnterCRAndWaitAndLeave((FxCREvent *)(v22 + 152));
            if ( *(char *)(v7 + 24) < 0 && (v25 = *(FxVerifierLock **)(v7 - 40)) != 0LL )
            {
              FxVerifierLock::Lock(v25, &PreviousIrql, v21);
              v20 = PreviousIrql;
            }
            else
            {
              v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 112));
              PreviousIrql = v20;
            }
          }
          while ( !v9 && *(_BYTE *)(v7 + 344) );
          *(_QWORD *)(v7 + 336) = 0LL;
          *(_BYTE *)(v7 + 344) = 0;
          if ( *(_BYTE *)(v7 + 345) )
          {
            v9 = 1;
            *(_BYTE *)(v7 + 345) = 0;
          }
          FxNonPagedObject::Unlock((FxNonPagedObject *)v7, v20, v19);
          return v9;
        }
        CurrentIrql = KeGetCurrentIrql();
        WPP_IFR_SF_D(*(_FX_DRIVER_GLOBALS **)(v7 + 16), 2u, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
      }
      FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v7 + 16));
      return v3;
    }
    v8 = (_KTIMER *)(v7 + 136);
    v9 = 1;
    if ( !*(_BYTE *)(v7 + 124) )
      return KeCancelTimer(v8);
    v12 = *(_QWORD *)&v8->Header.Lock;
    if ( !v12 )
      return v9;
    return ExCancelTimer(v12, 0LL);
  }
  if ( (int)FxVerifierCheckIrqlLevel(*(_FX_DRIVER_GLOBALS **)(v7 + 16), 0) >= 0 )
  {
    v7 = (unsigned __int64)pFxTimer;
    goto LABEL_7;
  }
  return 0;
}
