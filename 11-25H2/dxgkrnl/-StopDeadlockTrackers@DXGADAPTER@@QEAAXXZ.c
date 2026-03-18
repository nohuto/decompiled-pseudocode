/*
 * XREFs of ?StopDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1403B6D40
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1402BA7DC (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1403BC710 (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::StopDeadlockTrackers(DXGADAPTER *this)
{
  char *v2; // rbx
  _QWORD **v3; // rsi
  _QWORD *i; // rdi

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 1231, 0, 1) == 1 )
  {
    WdLogSingleEntry0(9LL);
    WdLogGlobalForLineNumber = 12592;
    v2 = (char *)this + 4928;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 4928, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v3 = (_QWORD **)((char *)this + 4952);
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
      DXGDEADLOCK_TRACKER::Cancel((DXGDEADLOCK_TRACKER *)(i - 28));
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
