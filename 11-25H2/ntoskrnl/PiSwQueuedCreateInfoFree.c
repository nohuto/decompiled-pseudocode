/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x1409A4BA4
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x140724C70 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwProcessRemove @ 0x1409A35FC (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1409A38F4 (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x140A8F2A4 (PiSwCloseDevice.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1408392C0 (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x1409A39B0 (PiSwPnPInfoFree.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
