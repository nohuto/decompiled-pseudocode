/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1404F39F0
 * Callers:
 *     IopHardErrorThread @ 0x140706270 (IopHardErrorThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C210);
  v1 = qword_140F8C200;
  v2 = *(_QWORD *)qword_140F8C200;
  if ( *(__int64 **)(qword_140F8C200 + 8) != &qword_140F8C200 || *(_QWORD *)(v2 + 8) != qword_140F8C200 )
    __fastfail(3u);
  qword_140F8C200 = *(_QWORD *)qword_140F8C200;
  *(_QWORD *)(v2 + 8) = &qword_140F8C200;
  IopCurrentHardError = v1;
  KeReleaseSpinLock(&qword_140F8C210, v0);
  return v1;
}
