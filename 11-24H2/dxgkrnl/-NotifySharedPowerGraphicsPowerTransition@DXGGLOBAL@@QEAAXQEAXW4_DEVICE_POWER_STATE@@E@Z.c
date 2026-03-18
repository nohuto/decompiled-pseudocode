/*
 * XREFs of ?NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z @ 0x1402CB2F8
 * Callers:
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1402CB2B4 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsPowerTransition(
        DXGGLOBAL *this,
        __int64 *a2,
        unsigned int a3,
        char a4)
{
  volatile signed __int32 *v4; // rdi
  __int64 **i; // rbx
  KIRQL CurrentIrql; // al
  __int64 v11; // r8
  __int64 v12; // r15
  KIRQL v13; // al

  v4 = (volatile signed __int32 *)((char *)this + 1760);
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1760));
  for ( i = (__int64 **)*((_QWORD *)this + 224); i != (__int64 **)((char *)this + 1792) && i; i = (__int64 **)*i )
  {
    if ( i[4] == a2 )
    {
      if ( i[5] )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(v11) = a4;
        v12 = CurrentIrql;
        ((void (__fastcall *)(__int64 *, _QWORD, __int64, __int64 *))i[5])(a2, a3, v11, i[3]);
        if ( (_BYTE)v12 != KeGetCurrentIrql() )
        {
          v13 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, this, v12, v13);
          WdLogGlobalForLineNumber = 7165;
        }
      }
    }
  }
  _InterlockedDecrement(v4 + 4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
