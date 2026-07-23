/*
 * XREFs of MiUpdateHugePageCounts @ 0x140672EC4
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     MiAddPartitionHugeRange @ 0x140670948 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140672764 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiSetHugeRangePartitionId @ 0x140672D78 (MiSetHugeRangePartitionId.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 */

__int64 __fastcall MiUpdateHugePageCounts(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  __int64 v7; // rcx
  __int64 result; // rax

  v7 = (unsigned int)MiPageToNode((unsigned __int64)(a2 & 0x3FFFFF) << 18);
  result = *(_QWORD *)(a1 + 16);
  if ( !a4 )
    a3 = -(__int64)a3;
  _InterlockedAdd64((volatile signed __int64 *)(57216 * v7 + result + 14992), a3);
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 424), a3);
  return result;
}
