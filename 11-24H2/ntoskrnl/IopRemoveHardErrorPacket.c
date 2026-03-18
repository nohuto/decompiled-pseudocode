/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1404F6244
 * Callers:
 *     IopHardErrorThread @ 0x140712370 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C9B0);
  v1 = qword_140F8C9A0;
  v2 = *(_QWORD *)qword_140F8C9A0;
  if ( *(__int64 **)(qword_140F8C9A0 + 8) != &qword_140F8C9A0 || *(_QWORD *)(v2 + 8) != qword_140F8C9A0 )
    __fastfail(3u);
  qword_140F8C9A0 = *(_QWORD *)qword_140F8C9A0;
  *(_QWORD *)(v2 + 8) = &qword_140F8C9A0;
  IopCurrentHardError = v1;
  KeReleaseSpinLock(&qword_140F8C9B0, v0);
  return v1;
}
