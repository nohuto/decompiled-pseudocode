/*
 * XREFs of ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1408EB4BC
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ExpLockHandleTableExclusive @ 0x140447858 (ExpLockHandleTableExclusive.c)
 *     ExpUnlockHandleTableExclusive @ 0x14044D754 (ExpUnlockHandleTableExclusive.c)
 */

__int64 __fastcall ExEnableRaiseUMExceptionOnInvalidHandleClose(__int64 a1, int a2)
{
  ExpLockHandleTableExclusive(a1, (__int64)KeGetCurrentThread());
  if ( a2 )
  {
    if ( a2 == 1 )
      *(_BYTE *)(a1 + 44) |= 0x10u;
  }
  else
  {
    *(_BYTE *)(a1 + 44) &= ~0x10u;
  }
  return ExpUnlockHandleTableExclusive(a1);
}
