/*
 * XREFs of MiLockColorHeadHugeAtDpc @ 0x1404F84F4
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x140671548 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140671A64 (MiHugePurgeZeroList.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140671F94 (MiLockHugeRangeColorHeadAtDpc.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockColorHeadHugeAtDpc(volatile signed __int32 *a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

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
