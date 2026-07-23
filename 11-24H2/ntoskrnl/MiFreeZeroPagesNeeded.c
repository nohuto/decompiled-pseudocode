/*
 * XREFs of MiFreeZeroPagesNeeded @ 0x1403F7650
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1403F7590 (MiRebalanceZeroFreeLists.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x14033FC00 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1403F76CC (MiGetNodeStandbyPageCount.c)
 */

__int64 __fastcall MiFreeZeroPagesNeeded(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v6; // r8
  unsigned __int64 NodeStandbyPageCount; // rax
  __int64 v8; // r11
  __int64 v9; // rcx

  if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(a1 + 16) + 57216LL * a2, a3, 0x80000) >= 0x200 )
    return 0LL;
  LOBYTE(v6) = a3;
  NodeStandbyPageCount = MiGetNodeStandbyPageCount(a1, a2, v6);
  v9 = 1024 - v8;
  if ( NodeStandbyPageCount < 0x1000 )
    return 0LL;
  return v9;
}
