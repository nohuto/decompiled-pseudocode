/*
 * XREFs of ExpAllocateLowLevelTable @ 0x140971AD4
 * Callers:
 *     ExpAllocateHandleTable @ 0x1409719B0 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409723BC (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x140972674 (ExpAllocateMidLevelTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x140971B08 (ExpAllocateTablePagedPoolNoZero.c)
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
