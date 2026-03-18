/*
 * XREFs of ?GetPixelFormatInfo@CVisualBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18029DFE0
 * Callers:
 *     ?IsOpaque@CVisualBitmap@@UEBA_NXZ @ 0x180282670 (-IsOpaque@CVisualBitmap@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CVisualBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 72) + 24LL))(v2 + 72);
  }
  else
  {
    *a2 = 87;
    a2[1] = 1;
    a2[2] = 0;
  }
  return a2;
}
