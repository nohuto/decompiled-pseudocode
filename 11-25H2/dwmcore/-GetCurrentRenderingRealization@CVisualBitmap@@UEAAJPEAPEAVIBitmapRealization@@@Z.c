/*
 * XREFs of ?GetCurrentRenderingRealization@CVisualBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1802813F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualBitmap::GetCurrentRenderingRealization(CVisualBitmap *this, struct IBitmapRealization **a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  struct IBitmapRealization *v4; // rcx

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  if ( v2 )
  {
    v4 = (struct IBitmapRealization *)(v2 + 80);
    *a2 = v4;
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else
  {
    *a2 = 0LL;
    v3 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292404, 0x7Du, 0LL);
  }
  return v3;
}
