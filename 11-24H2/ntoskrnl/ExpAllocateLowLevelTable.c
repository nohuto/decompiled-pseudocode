/*
 * XREFs of ExpAllocateLowLevelTable @ 0x14093C120
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x14093BC7C (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x14093BFFC (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14093CBE8 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x14093C154 (ExpAllocateTablePagedPoolNoZero.c)
 */

_QWORD *__fastcall ExpAllocateLowLevelTable(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExpAllocateTablePagedPoolNoZero(*(_QWORD *)(a1 + 16), 4096LL);
  if ( result )
  {
    *result = 0LL;
    result[1] = a2;
  }
  return result;
}
