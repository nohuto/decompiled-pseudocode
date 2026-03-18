/*
 * XREFs of Bulk_EvtDmaCallback @ 0x140017B70
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x140005E00 (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x14000D910 (Bulk_MapTransfers.c)
 *     Bulk_Stage_MapIntoRing @ 0x140017BC0 (Bulk_Stage_MapIntoRing.c)
 */

__int64 __fastcall Bulk_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(*a4 + 56LL);
  a4[7] = a3;
  result = Bulk_Stage_MapIntoRing(a4);
  if ( !_InterlockedXor((volatile signed __int32 *)(v4 + 344), 1u) )
  {
    result = TR_AttemptStateChange(v4, 3, 3);
    if ( (_DWORD)result == 3 )
      return Bulk_MapTransfers(v4);
  }
  return result;
}
