/*
 * XREFs of ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1408BA0E4
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x1403D7690 (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x140454230 (ExpLockHandleTableExclusive.c)
 */

__int64 __fastcall ExEnableRaiseUMExceptionOnInvalidHandleClose(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread);
  if ( a2 )
  {
    if ( a2 == 1 )
      *(_BYTE *)(a1 + 44) |= 0x10u;
  }
  else
  {
    *(_BYTE *)(a1 + 44) &= ~0x10u;
  }
  return ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
}
