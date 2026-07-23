/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x140969A8C
 * Callers:
 *     HvpAddDummyBinToHive @ 0x1407DFF8C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407E0050 (HvpMapHiveImage.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E3D2C (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140A586B8 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
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
