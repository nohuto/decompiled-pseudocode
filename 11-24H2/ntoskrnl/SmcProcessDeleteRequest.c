/*
 * XREFs of SmcProcessDeleteRequest @ 0x140799130
 * Callers:
 *     SmSetStoreInformation @ 0x140A5F8F0 (SmSetStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x140498A6C (SmpGetProcessPartition.c)
 *     SmcCacheDelete @ 0x14079D07C (SmcCacheDelete.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessDeleteRequest(__int64 *a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 ProcessPartition; // rax
  __int64 v5; // [rsp+48h] [rbp+20h]

  if ( a2 != 8 )
    return 3221225990LL;
  if ( a3 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *a1;
  if ( (unsigned __int8)*a1 != 1 || (*a1 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  result = SmcCacheDelete(ProcessPartition + 2288, HIDWORD(v5));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
