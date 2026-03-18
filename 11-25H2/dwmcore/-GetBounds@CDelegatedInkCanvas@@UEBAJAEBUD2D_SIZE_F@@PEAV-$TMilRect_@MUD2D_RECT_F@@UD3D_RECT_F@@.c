/*
 * XREFs of ?GetBounds@CDelegatedInkCanvas@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A37A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CDelegatedInkCanvas::GetBounds(__int64 a1, int *a2, __int64 a3)
{
  int v3; // xmm1_4
  _OWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // xmm0_4

  *(_OWORD *)a3 = DirectX::g_XMZero;
  if ( *(_QWORD *)(a1 + 192) )
  {
    v3 = *a2;
    if ( COERCE_FLOAT(*a2 & _xmm) >= 0.0000011920929 || COERCE_FLOAT(a2[1] & _xmm) >= 0.0000011920929 )
    {
      v7 = a2[1];
      *(_QWORD *)a3 = 0LL;
      *(_DWORD *)(a3 + 8) = v3;
      *(_DWORD *)(a3 + 12) = v7;
    }
    else if ( IsEmpty((const struct D2D_RECT_F *)(a1 + 72)) )
    {
      *(_QWORD *)v5 = v6;
      *(_DWORD *)(v5 + 8) = 1065353216;
      *(_DWORD *)(v5 + 12) = 1065353216;
    }
    else
    {
      *(_OWORD *)v5 = *v4;
    }
  }
  return 0LL;
}
