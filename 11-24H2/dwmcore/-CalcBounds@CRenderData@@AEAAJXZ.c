/*
 * XREFs of ?CalcBounds@CRenderData@@AEAAJXZ @ 0x1801F5DE4
 * Callers:
 *     ?GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F5D60 (-GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 */

__int64 __fastcall CRenderData::CalcBounds(CRenderData *this)
{
  int v2; // eax
  unsigned int v3; // edi

  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_BYTE *)this + 288) = 0;
  v2 = CRenderData::Draw((unsigned __int64 *)this, (CRenderData *)((char *)this + 192), 1);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x166u, 0LL);
  *((_BYTE *)this + 296) = 0;
  return v3;
}
