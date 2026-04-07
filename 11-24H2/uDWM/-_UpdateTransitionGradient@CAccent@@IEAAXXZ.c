/*
 * XREFs of ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800A1868
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180065BA0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18006602C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINT.c)
 */

void __fastcall CAccent::_UpdateTransitionGradient(CAccent *this)
{
  CRenderDataVisual *v1; // r10
  int v2; // r9d
  int v3; // eax
  int v4; // r8d
  int v5; // edx
  int v6; // r8d
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v1 = (CRenderDataVisual *)*((_QWORD *)this + 36);
  v2 = 0;
  if ( v1 )
  {
    v3 = 0;
    v4 = *((_DWORD *)this + 137) - *((_DWORD *)this + 135);
    v5 = *((_DWORD *)this + 136) - *((_DWORD *)this + 134);
    *(_QWORD *)&v7 = 0LL;
    if ( v5 >= 0 )
      v3 = v5;
    if ( v4 >= 0 )
      v2 = v4;
    v6 = *((_DWORD *)this + 66);
    *((float *)&v7 + 2) = (float)v3 + 0.0;
    *((float *)&v7 + 3) = (float)v2 + 0.0;
    CAccent::_UpdateSolidFill(this, v1, v6, &v7, *((D3DVALUE *)this + 82));
  }
}
