/*
 * XREFs of ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801F0DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D1DF0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::HitTest(
        CCompositionSurfaceBitmap *this,
        struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v5; // rax
  __int64 (__fastcall *v7)(CCompositionSurfaceBitmap *, float *, __int64); // rax
  int Bounds; // eax
  unsigned int v9; // ebx
  float y; // xmm2_4
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  *a4 = 0;
  v5 = *(_QWORD *)this;
  v12 = 0LL;
  v7 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, float *, __int64))(v5 + 184);
  if ( v7 == CCompositionSurfaceBitmap::GetBounds )
    Bounds = CCompositionSurfaceBitmap::GetBounds(this, (float *)a2, (__int64)&v12);
  else
    Bounds = v7(this, (float *)a2, (__int64)&v12);
  v9 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bounds, 0x120u, 0LL);
  }
  else if ( *((float *)&v12 + 2) > *(float *)&v12 && *((float *)&v12 + 3) > *((float *)&v12 + 1) )
  {
    y = a3->y;
    if ( y >= *((float *)&v12 + 1)
      && *((float *)&v12 + 3) > y
      && a3->x >= *(float *)&v12
      && *((float *)&v12 + 2) > a3->x )
    {
      *a4 = 1;
    }
  }
  return v9;
}
