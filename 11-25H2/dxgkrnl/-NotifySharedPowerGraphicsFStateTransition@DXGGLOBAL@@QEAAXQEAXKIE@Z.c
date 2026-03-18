/*
 * XREFs of ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x140018FA8
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x140017388 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z @ 0x140017A70 (-DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x140055494 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(
        DXGGLOBAL *this,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  char v9; // bp
  __int64 **i; // rbx
  KIRQL CurrentIrql; // al
  __int64 v12; // r9
  __int64 v13; // r14
  KIRQL v14; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 215, &LockHandle);
    goto LABEL_8;
  }
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((struct _KTHREAD **)this + 217) == KeGetCurrentThread() )
      goto LABEL_8;
    goto LABEL_6;
  }
  if ( *((struct _KTHREAD **)this + 217) != KeGetCurrentThread() )
  {
LABEL_6:
    DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1728));
    v9 = 1;
  }
LABEL_8:
  for ( i = (__int64 **)*((_QWORD *)this + 220); i != (__int64 **)((char *)this + 1760) && i; i = (__int64 **)*i )
  {
    if ( i[4] == a2 && i[7] )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v12) = a5;
      v13 = CurrentIrql;
      ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64, __int64 *))i[7])(a2, a3, a4, v12, i[3]);
      if ( (_BYTE)v13 != KeGetCurrentIrql() )
      {
        v14 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, this, v13, v14);
        WdLogGlobalForLineNumber = 7117;
      }
    }
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else if ( v9 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 436);
    ExReleasePushLockSharedEx((char *)this + 1728, 0LL);
    KeLeaveCriticalRegion();
  }
}
