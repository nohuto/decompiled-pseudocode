/*
 * XREFs of HvpReadLogEntryHeader @ 0x140A84D70
 * Callers:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x140A84C48 (HvpIncrementalLogFileEnumeratorAdvance.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvpReadLogEntryHeader(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a3, a1);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)a4 = MEMORY[0];
    *(_OWORD *)(a4 + 16) = MEMORY[0x10];
    *(_QWORD *)(a4 + 32) = MEMORY[0x20];
  }
  return result;
}
