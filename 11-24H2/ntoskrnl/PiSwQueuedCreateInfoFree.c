/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x1409FB784
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x140730E8C (PiSwQueuedCreateInfoCreate.c)
 *     PiSwDeviceFree @ 0x1409F819C (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1409FB008 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140A93D94 (PiSwCloseDevice.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1408D3F3C (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x1409F8258 (PiSwPnPInfoFree.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwQueuedCreateInfoFree(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  PVOID *v4; // rdx

  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)P = 0LL;
  }
  PiSwPnPInfoFree((__int64)P + 8);
  v3 = (void *)*((_QWORD *)P + 7);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *((_QWORD *)P + 7) = 0LL;
  }
  v4 = (PVOID *)*((_QWORD *)P + 9);
  if ( v4 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 20), v4, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
