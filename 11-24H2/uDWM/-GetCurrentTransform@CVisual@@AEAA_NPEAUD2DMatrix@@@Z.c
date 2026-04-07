/*
 * XREFs of ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180019180
 * Callers:
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x18001908C (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180021040 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1800784DC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180017D20 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x180019394 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 *     ?D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x1800193CC (-D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180019410 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x180019848 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetCurrentTransform(CVisual *this, struct D2DMatrix *a2, __int64 a3)
{
  char v3; // si
  char v4; // r14
  char v7; // r8
  unsigned __int8 v8; // bl
  float v9; // xmm0_4
  bool v10; // r9
  float *v12; // r15
  __int64 v13; // r10
  float *v14; // r12
  _BYTE v15[64]; // [rsp+20h] [rbp-68h] BYREF

  LOBYTE(a3) = 0;
  v3 = 0;
  v4 = 0;
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    (*(void (__fastcall **)(CVisual *, struct D2DMatrix *, __int64))(*(_QWORD *)this + 152LL))(this, a2, a3);
    v7 = 1;
  }
  else
  {
    D2DMatrixIdentity(a2);
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 28) - 1.0) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 29) - 1.0) & _xmm) > 0.0000011920929 )
  {
    v3 = 1;
    v7 = 1;
  }
  v8 = v7;
  LODWORD(v9) = COERCE_UNSIGNED_INT((float)*((double *)this + 13) - 0.0) & _xmm;
  if ( v9 > 0.0000011920929 )
    v8 = 1;
  v10 = v9 > 0.0000011920929;
  if ( v3 || v9 > 0.0000011920929 )
  {
    v12 = (float *)((char *)this + 100);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 24) - 0.0) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*v12 - 0.0) & _xmm) > 0.0000011920929 )
    {
      D2DMatrixTranslation(
        (struct D2DMatrix *)v15,
        COERCE_FLOAT(*((_DWORD *)this + 24) ^ _xmm),
        COERCE_FLOAT(*(_DWORD *)v12 ^ _xmm),
        1.0);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v15);
      v4 = 1;
      v14 = (float *)((char *)this + v13);
    }
    else
    {
      v14 = (float *)((char *)this + 96);
    }
    if ( v3 )
    {
      D2DMatrixScaling((struct D2DMatrix *)v15, *((float *)this + 28), *((float *)this + 29), 1.0);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v15);
    }
    if ( v10 )
    {
      D2DMatrixRotationZ((struct D2DMatrix *)v15, *((double *)this + 13) * 0.01745329238474369);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v15);
    }
    if ( v4 )
    {
      D2DMatrixTranslation((struct D2DMatrix *)v15, *v14, *v12, 1.0);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v15);
    }
  }
  return v8;
}
