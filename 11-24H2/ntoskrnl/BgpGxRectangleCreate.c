/*
 * XREFs of BgpGxRectangleCreate @ 0x140BB3E78
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x1404604FC (BgpGxConvertRectangleEx.c)
 *     BgpGxParseBitmap @ 0x140BB00B8 (BgpGxParseBitmap.c)
 *     BgpGxBlendRectangle @ 0x140BB2400 (BgpGxBlendRectangle.c)
 *     BgpTxtCreateRegion @ 0x140BB2908 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140BB2BB0 (BgpTxtDisplayString.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140BB3D18 (BgpGxReadRectangle.c)
 *     BgpGxFindSubRectangle @ 0x140BB4168 (BgpGxFindSubRectangle.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140467320 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x1404BC490 (GxpBitsToBytes.c)
 */

__int64 __fastcall BgpGxRectangleCreate(_DWORD *a1, int a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int v7; // ebp
  __int64 Memory; // rax

  v4 = 0;
  v7 = GxpBitsToBytes(a1[1] * *a1 * a2);
  Memory = BgpFwAllocateMemory((unsigned int)(v7 + 72));
  if ( Memory )
  {
    *(_DWORD *)Memory = a1[1];
    *(_DWORD *)(Memory + 4) = *a1;
    *(_QWORD *)(Memory + 24) = Memory + 72;
    *(_DWORD *)(Memory + 8) = a2;
    *(_DWORD *)(Memory + 16) = 0;
    *(_DWORD *)(Memory + 12) = v7;
    *a3 = Memory;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
