/*
 * XREFs of TcglibpRevertLockingSp @ 0x14013F9C0
 * Callers:
 *     TcglibRevertLockingSpEx @ 0x14013C434 (TcglibRevertLockingSpEx.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008578C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x14013EF38 (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpRevertLockingSp(int **a1, __int64 a2)
{
  TcglibEalLogCommand(*a1, "RevertLockingSp", 1, 2, 0LL, 0LL);
  return TcglibpCallMethod((__int64)a1, a2, 0x20500000001LL, 0x600000202LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
}
