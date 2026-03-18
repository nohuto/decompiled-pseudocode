/*
 * XREFs of ?GetPixelFormatInfo@CWICBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801D7AF0
 * Callers:
 *     ?GetPixelFormatInfo@CBitmapResource@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801D79F0 (-GetPixelFormatInfo@CBitmapResource@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsOpaque@CBitmapResource@@UEBA_NXZ @ 0x1801D7A40 (-IsOpaque@CBitmapResource@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapRealization::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 - 56);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
