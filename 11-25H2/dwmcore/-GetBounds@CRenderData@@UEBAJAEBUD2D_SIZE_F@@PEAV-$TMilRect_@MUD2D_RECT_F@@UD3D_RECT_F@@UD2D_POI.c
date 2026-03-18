/*
 * XREFs of ?GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180201FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcBounds@CRenderData@@AEAAJXZ @ 0x180202024 (-CalcBounds@CRenderData@@AEAAJXZ.c)
 */

__int64 __fastcall CRenderData::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // eax

  v3 = 0;
  if ( *(_BYTE *)(a1 + 296) && (v6 = CRenderData::CalcBounds((CRenderData *)a1), v3 = v6, v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x93u, 0LL);
  }
  else
  {
    *a3 = *(_OWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 298) = IsEmpty((const struct D2D_RECT_F *)(a1 + 200));
  }
  return v3;
}
