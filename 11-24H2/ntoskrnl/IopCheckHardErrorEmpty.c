/*
 * XREFs of IopCheckHardErrorEmpty @ 0x140592FB0
 * Callers:
 *     IopHardErrorThread @ 0x14070FF00 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

char IopCheckHardErrorEmpty()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C970);
  v1 = 0;
  IopCurrentHardError = 0LL;
  if ( (__int64 *)qword_140F8C960 == &qword_140F8C960 )
    byte_140F8C998 = 0;
  else
    v1 = 1;
  KeReleaseSpinLock(&qword_140F8C970, v0);
  return v1;
}
