/*
 * XREFs of IopCheckHardErrorEmpty @ 0x140595F80
 * Callers:
 *     IopHardErrorThread @ 0x140712370 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

char IopCheckHardErrorEmpty()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C9B0);
  v1 = 0;
  IopCurrentHardError = 0LL;
  if ( (__int64 *)qword_140F8C9A0 == &qword_140F8C9A0 )
    byte_140F8C9D8 = 0;
  else
    v1 = 1;
  KeReleaseSpinLock(&qword_140F8C9B0, v0);
  return v1;
}
