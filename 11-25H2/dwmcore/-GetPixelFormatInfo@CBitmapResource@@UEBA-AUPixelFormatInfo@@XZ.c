/*
 * XREFs of ?GetPixelFormatInfo@CBitmapResource@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801D79F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CWICBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801D7AF0 (-GetPixelFormatInfo@CWICBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapResource::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  void (*v4)(void); // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v2 + 24LL);
    if ( (char *)v4 == (char *)CWICBitmapRealization::GetPixelFormatInfo )
      CWICBitmapRealization::GetPixelFormatInfo();
    else
      v4();
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
