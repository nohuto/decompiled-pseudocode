/*
 * XREFs of ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14020EE28
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1402080A0 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@Z @ 0x14020DF40 (-InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@.c)
 * Callees:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400D9E50 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1400DA524 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

char __fastcall CInertiaManager::EndInertiaAtPoint(__int64 a1, __int64 a2, struct tagPOINT a3, int a4)
{
  CInertiaManager *v7; // rcx
  __int64 *Inertia; // rsi

  Inertia = (__int64 *)CInertiaManager::QueryInertia(a1, a2, a4);
  if ( Inertia
    && CInertiaManager::PostInertiaMessage(
         v7,
         0x23Cu,
         (const struct INERTIA_INFO_INTERNAL *)(a1 + 8),
         (struct tagPOINT)a2,
         a3) )
  {
    return CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)a1, *Inertia, Inertia[1]);
  }
  else
  {
    return 0;
  }
}
