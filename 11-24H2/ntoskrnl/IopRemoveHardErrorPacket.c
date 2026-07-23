/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1404F3B44
 * Callers:
 *     IopHardErrorThread @ 0x14070FF00 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C970);
  v1 = qword_140F8C960;
  v2 = *(_QWORD *)qword_140F8C960;
  if ( *(__int64 **)(qword_140F8C960 + 8) != &qword_140F8C960 || *(_QWORD *)(v2 + 8) != qword_140F8C960 )
    __fastfail(3u);
  qword_140F8C960 = *(_QWORD *)qword_140F8C960;
  *(_QWORD *)(v2 + 8) = &qword_140F8C960;
  IopCurrentHardError = v1;
  KeReleaseSpinLock(&qword_140F8C970, v0);
  return v1;
}
