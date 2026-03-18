/*
 * XREFs of PspFreeSessionId @ 0x14076C03C
 * Callers:
 *     PsSessionCreate @ 0x1406EBB94 (PsSessionCreate.c)
 *     PspReleaseReferenceToSession @ 0x140A898D0 (PspReleaseReferenceToSession.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
 */

_QWORD *__fastcall PspFreeSessionId(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  *((_BYTE *)PspSessionIdBitmap.Buffer + ((unsigned __int64)a1 >> 3)) &= ~(1 << (a1 & 7));
  return PspUnlockProcessListExclusive((__int64)CurrentThread);
}
