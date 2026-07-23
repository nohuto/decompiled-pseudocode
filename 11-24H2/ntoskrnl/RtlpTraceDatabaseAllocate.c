/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1405EDB48
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1405ED7B0 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405EDB70 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpTraceDatabaseAllocate(ULONG_PTR a1, char a2, ULONG a3)
{
  bool v3; // zf
  ULONG_PTR v5; // rcx

  v3 = (a2 & 4) == 0;
  v5 = 64LL;
  if ( v3 )
    v5 = 256LL;
  return ExAllocatePool2(v5, a1, a3);
}
