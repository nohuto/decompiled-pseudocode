/*
 * XREFs of PopDirectedDripsDiagGetDeviceActiveStamp @ 0x1404CB700
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x140A7B76C (PopDirectedDripsDiagBroadcastTreeBegin.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 __fastcall PopDirectedDripsDiagGetDeviceActiveStamp(__int64 a1)
{
  __int64 v1; // rbx
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al

  v1 = 0LL;
  if ( a1 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 640);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 640));
    if ( *(_BYTE *)(a1 + 648) )
      v1 = *(_QWORD *)(a1 + 664);
    KeReleaseSpinLock(v3, v4);
  }
  return v1;
}
