/*
 * XREFs of ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140A52E88
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     ExpLockHandleTableExclusive @ 0x1404527A8 (ExpLockHandleTableExclusive.c)
 *     ExpUnlockHandleTableExclusive @ 0x140458444 (ExpUnlockHandleTableExclusive.c)
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
