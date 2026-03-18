/*
 * XREFs of ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1402BB92C
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BA244 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1403C0E04 (-Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::StartDeadlockTrackers(DXGADAPTER *this)
{
  char *v2; // rbx
  char *v3; // rsi
  char *i; // rdi

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 1231, 1, 0) )
  {
    WdLogSingleEntry0(9LL);
    WdLogGlobalForLineNumber = 12569;
    v2 = (char *)this + 4928;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 4928, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v3 = (char *)this + 4952;
    *((_QWORD *)this + 617) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 619); i != v3; i = *(char **)i )
      DXGDEADLOCK_TRACKER::Activate((DXGDEADLOCK_TRACKER *)(i - 224));
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
