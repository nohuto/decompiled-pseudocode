/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x14098127C
 * Callers:
 *     HvpAddDummyBinToHive @ 0x1407DFA3C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407DFB00 (HvpMapHiveImage.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E37DC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140A60168 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 */

void __fastcall HvpPointMapEntriesToBuffer(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6)
{
  unsigned int i; // r10d
  __int64 CellMap; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rdx

  for ( i = 0; i < a3; i = v12 + 4096 )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, i + a4);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v11, 0x428uLL);
    *(_QWORD *)(CellMap + 8) = v13;
    v14 = v13;
    if ( v12 )
    {
      v15 = 0;
    }
    else
    {
      v14 = v13 | 1;
      v15 = a3;
      *(_QWORD *)(CellMap + 8) = v13 | 1;
    }
    *(_DWORD *)(CellMap + 16) = v15;
    if ( a6 )
    {
      v16 = a6;
      v14 |= 2uLL;
      *(_QWORD *)(CellMap + 8) = v14;
    }
    else
    {
      v16 = v12;
    }
    *(_QWORD *)CellMap = v16;
    if ( a5 )
      *(_QWORD *)(CellMap + 8) = v14 | 8;
  }
}
