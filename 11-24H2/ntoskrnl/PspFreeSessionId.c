/*
 * XREFs of PspFreeSessionId @ 0x14077BA8C
 * Callers:
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 *     PspReleaseReferenceToSession @ 0x140A81850 (PspReleaseReferenceToSession.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 */

_QWORD *__fastcall PspFreeSessionId(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  *((_BYTE *)PspSessionIdBitmap.Buffer + ((unsigned __int64)a1 >> 3)) &= ~(1 << (a1 & 7));
  return PspUnlockProcessListExclusive((__int64)CurrentThread);
}
