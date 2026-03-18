/*
 * XREFs of CcDeductDirtyPages @ 0x1403A417C
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x1403A3FF8 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1403A5A90 (CcDeleteBcbs.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DCD80 (CcAcquireByteRangeForWrite.c)
 * Callees:
 *     CcDeductDirtyPagesInternal @ 0x1403A41C0 (CcDeductDirtyPagesInternal.c)
 */

__int64 __fastcall CcDeductDirtyPages(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = 0LL;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 536);
    if ( CcEnablePerVolumeLazyWriter )
      v2 = *(_QWORD *)(a1 + 600);
  }
  else
  {
    v3 = *((_QWORD *)PspSystemPartition + 1);
  }
  return CcDeductDirtyPagesInternal(a1, a2, v3, v2);
}
