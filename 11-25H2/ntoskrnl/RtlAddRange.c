/*
 * XREFs of RtlAddRange @ 0x140A749C0
 * Callers:
 *     ArbAddAllocation @ 0x1406F8880 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1406F88D0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1406F8AE8 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeRangeList @ 0x1406F9A90 (ArbInitializeRangeList.c)
 *     IopMemInitialize @ 0x140719C98 (IopMemInitialize.c)
 *     IopPortAddAllocation @ 0x140719EA0 (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x140A748C0 (RtlInvertRangeListEx.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403F2CC0 (ExAllocateFromPagedLookasideList.c)
 *     RtlpAddRange @ 0x1406F0340 (RtlpAddRange.c)
 *     RtlpFreeRangeListEntry @ 0x140A4ECB8 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlAddRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v11; // rax
  void *v12; // rbx
  int v14; // esi

  if ( a3 < a2 )
    return 3221225485LL;
  v11 = ExAllocateFromPagedLookasideList(&RtlpRangeListEntryLookasideList);
  v12 = v11;
  if ( !v11 )
    return 3221225473LL;
  v11[3] = a7;
  v11[2] = a6;
  *((_BYTE *)v11 + 33) = 0;
  *((_WORD *)v11 + 17) = 0;
  *v11 = a2;
  v11[1] = a3;
  *((_BYTE *)v11 + 32) = a4;
  if ( (a5 & 2) != 0 )
    *((_BYTE *)v11 + 33) |= 1u;
  if ( (a5 & 0x10) != 0 )
    *((_BYTE *)v11 + 33) |= 0x10u;
  v14 = RtlpAddRange((unsigned __int64 *)a1, v11, a5);
  if ( v14 < 0 )
  {
    RtlpFreeRangeListEntry(v12);
  }
  else
  {
    ++*(_DWORD *)(a1 + 20);
    ++*(_DWORD *)(a1 + 24);
  }
  return (unsigned int)v14;
}
