/*
 * XREFs of ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x1800DDB60
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180116CF0 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800DDD48 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE760 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBackdropVisualImage::GenerateEffectInput(__int64 a1, __int64 a2)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm8_4
  float v7; // xmm7_4
  __int64 v8; // rax
  CDrawListBitmap *v9; // rbx
  __int64 v10; // rax
  CResource *v11; // rcx
  void (*v12)(void); // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  float v16[6]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v17[56]; // [rsp+38h] [rbp-60h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 48) = 0LL;
  EffectInput::Reset((struct EffectInput *)a2);
  *(_BYTE *)(a2 + 44) = 1;
  v4 = *(float *)(a1 + 2152) / *(float *)(a1 + 120);
  v5 = *(float *)(a1 + 2156) / *(float *)(a1 + 124);
  LODWORD(v6) = *(_DWORD *)(a1 + 100) ^ _xmm;
  LODWORD(v7) = *(_DWORD *)(a1 + 96) ^ _xmm;
  v16[0] = v4 + 0.0;
  v16[3] = v5 + 0.0;
  v16[1] = (float)(v5 * 0.0) + 0.0;
  v16[2] = (float)(v4 * 0.0) + 0.0;
  v16[4] = (float)((float)(v4 * v7) + (float)(v6 * 0.0)) + (float)(0.0 - (float)(v4 * 0.0));
  v16[5] = (float)((float)(v6 * v5) + (float)(v7 * 0.0)) + (float)(0.0 - (float)(v5 * 0.0));
  v8 = Matrix3x3::operator*(a1 + 2172, v17, v16);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)v8;
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(v8 + 16);
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(v8 + 32);
  *(_OWORD *)(a2 + 84) = *(_OWORD *)(a1 + 2128);
  v9 = CDrawListBitmap::CDrawListBitmap(
         (CDrawListBitmap *)v16,
         (struct IBitmapResource *)((a1 + 72) & -(__int64)(a1 != 0)));
  v10 = *(_QWORD *)v9;
  *(_QWORD *)v9 = 0LL;
  v11 = *(CResource **)a2;
  *(_QWORD *)a2 = v10;
  if ( v11 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
    if ( (char *)v12 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v11);
    else
      v12();
  }
  v13 = *((_QWORD *)v9 + 1);
  *((_QWORD *)v9 + 1) = 0LL;
  v14 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v13;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  *(_BYTE *)(a2 + 16) = *((_BYTE *)v9 + 16);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v16);
  *(_DWORD *)(a2 + 40) |= 0x200u;
  result = a2;
  *(_WORD *)(a2 + 104) = 257;
  *(_BYTE *)(a2 + 106) = 1;
  return result;
}
