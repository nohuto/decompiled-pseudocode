/*
 * XREFs of MiLockColorHeadHugeAtDpc @ 0x1404F8774
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406648D0 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140664DEC (MiHugePurgeZeroList.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x14066531C (MiLockHugeRangeColorHeadAtDpc.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockColorHeadHugeAtDpc(volatile signed __int32 *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64(a1, 3uLL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)a1;
    }
    while ( (*(_QWORD *)a1 & 8) != 0 );
  }
  return result;
}
