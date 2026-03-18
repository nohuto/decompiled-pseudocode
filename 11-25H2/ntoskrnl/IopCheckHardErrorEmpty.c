/*
 * XREFs of IopCheckHardErrorEmpty @ 0x140592920
 * Callers:
 *     IopHardErrorThread @ 0x140706270 (IopHardErrorThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

char IopCheckHardErrorEmpty()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C210);
  v1 = 0;
  IopCurrentHardError = 0LL;
  if ( (__int64 *)qword_140F8C200 == &qword_140F8C200 )
    byte_140F8C238 = 0;
  else
    v1 = 1;
  KeReleaseSpinLock(&qword_140F8C210, v0);
  return v1;
}
