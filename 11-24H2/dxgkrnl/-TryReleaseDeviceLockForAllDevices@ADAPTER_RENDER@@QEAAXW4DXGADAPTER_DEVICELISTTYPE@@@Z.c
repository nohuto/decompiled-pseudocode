/*
 * XREFs of ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1403884DC
 * Callers:
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14038849C (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(ADAPTER_RENDER *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  char *v4; // rdi
  __int64 **v5; // rsi
  __int64 *i; // rbx

  v2 = 48LL;
  v3 = 160LL;
  if ( a2 != 1 )
    v2 = 24LL;
  v4 = (char *)a1 + v2;
  if ( a2 != 1 )
    v3 = 144LL;
  v5 = (__int64 **)((char *)a1 + v3);
  if ( *((struct _KTHREAD **)v4 + 1) == KeGetCurrentThread() || ADAPTER_RENDER::IsCoreResourceExclusiveOwner(a1) )
  {
    for ( i = *v5;
          i != (__int64 *)v5 && i && (*((_BYTE *)i + 72) || ExIsResourceAcquiredExclusiveLite((PERESOURCE)i[17]));
          i = (__int64 *)*i )
    {
      ExReleaseResourceLite((PERESOURCE)i[17]);
      if ( (struct _KTHREAD *)i[19] != KeGetCurrentThread() )
        break;
      i[19] = 0LL;
      ExReleasePushLockExclusiveEx(i + 18, 0LL);
    }
    if ( *((struct _KTHREAD **)v4 + 1) == KeGetCurrentThread() )
    {
      *((_QWORD *)v4 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
