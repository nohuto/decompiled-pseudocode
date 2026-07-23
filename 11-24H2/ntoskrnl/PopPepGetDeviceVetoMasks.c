/*
 * XREFs of PopPepGetDeviceVetoMasks @ 0x1404BD07C
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x140A505AC (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetDeviceVetoMasks(__int64 a1, __int64 a2)
{
  char v4; // di
  KIRQL v5; // dl

  v4 = 0;
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v4 = 1;
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 152);
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v5);
  return v4;
}
