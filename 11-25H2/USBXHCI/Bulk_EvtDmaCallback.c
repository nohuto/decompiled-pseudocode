/*
 * XREFs of Bulk_EvtDmaCallback @ 0x140004630
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_Stage_MapIntoRing @ 0x1400058A0 (Bulk_Stage_MapIntoRing.c)
 *     TR_AttemptStateChange @ 0x140012460 (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x14001AB60 (Bulk_MapTransfers.c)
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
    result = TR_AttemptStateChange(v4, 3LL, 3LL);
    if ( (_DWORD)result == 3 )
      return Bulk_MapTransfers(v4);
  }
  return result;
}
