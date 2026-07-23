/*
 * XREFs of IopRemoveTimerFromTimerList @ 0x140593EBC
 * Callers:
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall IopRemoveTimerFromTimerList(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r9
  _QWORD *v4; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || (v4 = *(_QWORD **)(a1 + 16), *v4 != a1 + 8) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( *(_WORD *)(a1 + 2) )
    --IopTimerCount;
  KeReleaseSpinLock(&IopTimerLock, v2);
}
