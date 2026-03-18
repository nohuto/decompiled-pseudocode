/*
 * XREFs of PpDevNodeInsertIntoTree @ 0x1404C0064
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PipProcessEnumeratedChildDevice @ 0x1408330E8 (PipProcessEnumeratedChildDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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
