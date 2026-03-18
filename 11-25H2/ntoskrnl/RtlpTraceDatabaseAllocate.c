/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1405E4258
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1405E3EC0 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405E4280 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpTraceDatabaseAllocate(__int64 a1, char a2)
{
  ULONG_PTR v2; // rcx

  v2 = 64LL;
  if ( (a2 & 4) == 0 )
    v2 = 256LL;
  return ExAllocatePool2(v2);
}
