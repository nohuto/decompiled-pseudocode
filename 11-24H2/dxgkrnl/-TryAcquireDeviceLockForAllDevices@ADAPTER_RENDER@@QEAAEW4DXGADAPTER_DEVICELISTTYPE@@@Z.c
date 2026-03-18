/*
 * XREFs of ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x140388AFC
 * Callers:
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1402CA9B0 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 **v5; // rdi
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax
  __int64 **i; // rbx

  v3 = 160LL;
  if ( a2 != 1 )
    v3 = 144LL;
  v5 = (__int64 **)(a1 + v3);
  KeEnterCriticalRegion();
  v6 = 48LL;
  if ( a2 != 1 )
    v6 = 24LL;
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + v6, 0LL) )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 56LL;
    if ( a2 != 1 )
      v8 = 32LL;
    *(_QWORD *)(v8 + a1) = CurrentThread;
    for ( i = (__int64 **)*v5; i != v5 && i; i = (__int64 **)*i )
    {
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)i[17], 0)
        || !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(i + 18, 0LL) )
      {
        return 0;
      }
      i[19] = (__int64 *)KeGetCurrentThread();
    }
    return 1;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 0;
  }
}
