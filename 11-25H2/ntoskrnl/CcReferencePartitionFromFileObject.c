/*
 * XREFs of CcReferencePartitionFromFileObject @ 0x1403A6E4C
 * Callers:
 *     CcZeroData @ 0x1403A6B60 (CcZeroData.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcReferencePartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 8)) != 0 )
    result = *(_QWORD *)(v2 + 536);
  else
    result = *((_QWORD *)PspSystemPartition + 1);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(result + 1296)) <= 1 )
    __fastfail(0xEu);
  return result;
}
