/*
 * XREFs of ?GetPixelFormatInfo@CSecondarySysmemBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802DB230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 132);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 124);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
