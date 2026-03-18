/*
 * XREFs of IopResurrectDriver @ 0x1404A75D8
 * Callers:
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IopResurrectDriver(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // al

  v1 = *(_QWORD *)(a1 + 8);
  v3 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (*(_DWORD *)(a1 + 16) & 1) == 0 && v1 && (*(_DWORD *)(*(_QWORD *)(v1 + 312) + 32LL) & 1) != 0 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)(v1 + 312) + 32LL) &= ~1u;
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 );
    KeReleaseQueuedSpinLock(0xAuLL, v3);
    return 0LL;
  }
  else
  {
    KeReleaseQueuedSpinLock(0xAuLL, v3);
    return 3221225742LL;
  }
}
