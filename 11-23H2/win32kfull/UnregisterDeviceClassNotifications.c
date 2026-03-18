/*
 * XREFs of UnregisterDeviceClassNotifications @ 0x1C00A0BAC
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0071B3C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteDisconnect @ 0x1C00A1044 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0131F08 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 UnregisterDeviceClassNotifications()
{
  PVOID v0; // rbx
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v2; // rax
  struct _FAST_MUTEX *v3; // rcx
  __int64 result; // rax

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  v0 = gCDROMClassRegistrationEntry;
  if ( gCDROMClassRegistrationEntry )
  {
    gCDROMClassRegistrationEntry = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
    IoUnregisterPlugPlayNotification(v0);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  }
  while ( 1 )
  {
    Flink = gCDROMNotifyList.Flink;
    if ( gCDROMNotifyList.Flink->Blink != &gCDROMNotifyList
      || (v2 = gCDROMNotifyList.Flink->Flink, gCDROMNotifyList.Flink->Flink->Blink != gCDROMNotifyList.Flink) )
    {
      __fastfail(3u);
    }
    v3 = gMediaChangeMutex;
    gCDROMNotifyList.Flink = gCDROMNotifyList.Flink->Flink;
    v2->Blink = &gCDROMNotifyList;
    result = ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v3);
    if ( Flink == &gCDROMNotifyList )
      break;
    IoUnregisterPlugPlayNotification(Flink[1].Blink);
    Win32FreePool(Flink);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  }
  return result;
}
