/*
 * XREFs of MiFreeZeroPagesNeeded @ 0x1403D2B30
 * Callers:
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiRebalanceZeroFreeLists @ 0x1403D2A70 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1403D3160 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1403D329C (MiGetNodeStandbyPageCount.c)
 */

__int64 __fastcall MiFreeZeroPagesNeeded(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 NodeStandbyPageCount; // rax
  __int64 v10; // r11
  __int64 v11; // rcx

  v3 = a2;
  v6 = 57216LL * (unsigned int)a2;
  LOBYTE(a2) = a3;
  if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(a1 + 16) + v6, a2, 0x80000LL) >= 0x200 )
    return 0LL;
  LOBYTE(v7) = a3;
  NodeStandbyPageCount = MiGetNodeStandbyPageCount(a1, v3, v7, v8);
  v11 = 1024 - v10;
  if ( NodeStandbyPageCount < 0x1000 )
    return 0LL;
  return v11;
}
