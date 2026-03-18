/*
 * XREFs of PnpDisableAndFreeEventWatchdog @ 0x1409EFF6C
 * Callers:
 *     PnpProcessCompletedEject @ 0x140723BF0 (PnpProcessCompletedEject.c)
 *     PnpDeviceEventWorker @ 0x1409EFB60 (PnpDeviceEventWorker.c)
 * Callees:
 *     PnpDisableWatchdog @ 0x1409EFFB0 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDisableAndFreeEventWatchdog(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rbx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    v3 = *(void **)(v2 + 24);
    PnpDisableWatchdog(v2);
    *(_QWORD *)(a1 + 104) = 0LL;
    ExFreePoolWithTag(v3, 0);
  }
}
