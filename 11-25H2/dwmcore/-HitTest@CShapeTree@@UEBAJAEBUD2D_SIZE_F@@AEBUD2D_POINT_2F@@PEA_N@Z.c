/*
 * XREFs of ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18021AC60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007A280 (-GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShapeTree::HitTest(
        CShapeTree *this,
        struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int Bounds; // ebx
  bool v7; // al
  float y; // xmm1_4
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = 0LL;
  Bounds = CShapeTree::GetBounds((__int64)this, (float *)a2, (float *)&v10);
  v7 = 0;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bounds, 0x50u, 0LL);
  }
  else
  {
    if ( a3->x >= *(float *)&v10 && *((float *)&v10 + 2) > a3->x )
    {
      y = a3->y;
      if ( y >= *((float *)&v10 + 1) )
        v7 = *((float *)&v10 + 3) > y;
    }
    *a4 = v7;
  }
  return (unsigned int)Bounds;
}
