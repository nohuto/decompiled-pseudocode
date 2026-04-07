/*
 * XREFs of ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x18010582C
 * Callers:
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x18006ED10 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x1800E5DAC (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180003A34 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000C51C (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18010E280 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

char __fastcall CVisual::TransformFromParent(CVisual *this, const struct tagPOINT *a2, struct tagPOINT *a3)
{
  char v4; // di
  float *v5; // rdx
  float y; // xmm1_4
  LONG v7; // ecx
  float x; // [rsp+20h] [rbp-68h] BYREF
  float v10; // [rsp+24h] [rbp-64h]
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF

  *a3 = *a2;
  v4 = 1;
  a3->x -= *((_DWORD *)this + 30);
  a3->y -= *((_DWORD *)this + 31);
  if ( (*((_BYTE *)this + 92) & 2) != 0 )
  {
    CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v11);
    if ( D2DMatrixInverse((struct D2DMatrix *)v11, v5, (const struct D2DMatrix *)v11) )
    {
      y = (float)a3->y;
      x = (float)a3->x;
      v10 = y;
      D3DXVec2TransformCoord((struct D2DVector2 *)&x, (const struct D2DVector2 *)&x, (const struct D2DMatrix *)v11);
      v7 = (int)x;
      a3->y = (int)v10;
      a3->x = v7;
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
