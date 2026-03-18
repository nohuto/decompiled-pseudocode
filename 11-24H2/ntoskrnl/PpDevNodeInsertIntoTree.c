/*
 * XREFs of PpDevNodeInsertIntoTree @ 0x1404BE9A4
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     PipProcessEnumeratedChildDevice @ 0x1409904C0 (PipProcessEnumeratedChildDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PpDevNodeInsertIntoTree(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  int v5; // r8d
  _QWORD *v6; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v5 = *(_DWORD *)(a1 + 152) + 1;
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 152) = v5;
  _InterlockedOr(v7, 0);
  v6 = *(_QWORD **)(a1 + 24);
  if ( v6 )
    *v6 = a2;
  else
    *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  KeReleaseSpinLock(&PnpSpinLock, v4);
}
