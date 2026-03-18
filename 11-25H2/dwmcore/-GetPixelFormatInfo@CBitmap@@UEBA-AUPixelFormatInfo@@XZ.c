/*
 * XREFs of ?GetPixelFormatInfo@CBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18020C0D0
 * Callers:
 *     ?GetPixelFormatInfo@CSystemMemoryBitmap@@WHI@EBA?AUPixelFormatInfo@@XZ @ 0x1802613A0 (-GetPixelFormatInfo@CSystemMemoryBitmap@@WHI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 112);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
