/*
 * XREFs of ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C750
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014BF30 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C4A0 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C600 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014D110 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::HitTest(
        CMaskBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rcx
  int v10; // eax
  CNineGridBrush *v11; // rcx
  int (*v12)(CNineGridBrush *__hidden, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *); // rax
  int v13; // eax

  v4 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)this + 15);
  if ( v7 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 208LL))(v7);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD6u, 0LL);
    }
    else if ( *((_QWORD *)this + 14) && *a4 )
    {
      *a4 = 0;
      v11 = (CNineGridBrush *)*((_QWORD *)this + 14);
      v12 = *(int (**)(CNineGridBrush *__hidden, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v11 + 208LL);
      if ( v12 == CNineGridBrush::HitTest )
      {
        v13 = CNineGridBrush::HitTest(v11, a2, a3, a4);
      }
      else if ( (char *)v12 == (char *)CSurfaceBrush::HitTest )
      {
        v13 = CSurfaceBrush::HitTest(v11, a2, a3, a4);
      }
      else
      {
        v13 = ((__int64 (__fastcall *)(CNineGridBrush *, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))v12)(
                v11,
                a2,
                a3,
                a4);
      }
      v4 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xDCu, 0LL);
    }
  }
  return v4;
}
