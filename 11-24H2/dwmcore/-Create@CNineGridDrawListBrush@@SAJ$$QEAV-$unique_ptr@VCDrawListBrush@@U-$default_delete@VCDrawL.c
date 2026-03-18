/*
 * XREFs of ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18014FE40
 * Callers:
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18006BD80 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18006C274 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18014EFB0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18014F5E8 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18014F9E0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x18014FFF0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180150034 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Create(
        struct CNineGridDrawListBrush *a1,
        _DWORD *a2,
        _DWORD *a3,
        char a4,
        _QWORD *a5)
{
  struct CObjectCache *ObjectCache; // rax
  _DWORD *v10; // rbx
  int v11; // ecx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  __int64 v16; // rcx

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (_DWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = MIDL_user_allocate(0x240uLL)) != 0LL )
  {
    v10[2] = 1065353216;
    v10[3] = 0;
    v10[4] = 0;
    v10[5] = 1065353216;
    v10[6] = 0;
    v10[7] = 0;
    *(_QWORD *)v10 = &CNineGridDrawListBrush::`vftable';
    *((_BYTE *)v10 + 52) = 0;
    *((_BYTE *)v10 + 64) = 0;
    v12 = *(_QWORD *)a1;
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)v10 + 9) = v12;
    v10[20] = *a2;
    v10[21] = a2[1];
    v10[22] = a2[2];
    v10[23] = a2[3];
    v10[24] = *a3;
    v10[25] = a3[1];
    LODWORD(v12) = a3[2];
    *((_QWORD *)v10 + 16) = v10 + 74;
    v10[26] = v12;
    v10[27] = a3[3];
    *((_QWORD *)v10 + 14) = v10 + 34;
    *((_QWORD *)v10 + 15) = v10 + 34;
    *((_QWORD *)v10 + 37) = v10 + 80;
    *((_QWORD *)v10 + 38) = v10 + 80;
    *((_QWORD *)v10 + 39) = v10 + 120;
    *((_QWORD *)v10 + 60) = v10 + 126;
    *((_QWORD *)v10 + 61) = v10 + 126;
    *((_QWORD *)v10 + 62) = v10 + 138;
    *((_BYTE *)v10 + 568) = a4;
    *((_BYTE *)v10 + 569) = 0;
    v13 = CNineGridDrawListBrush::Initialize((CNineGridDrawListBrush *)v10);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x29u, 0LL);
      std::default_delete<CNineGridDrawListBrush>::operator()(v16, (CNineGridDrawListBrush *)v10);
    }
    else
    {
      *a5 = v10;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x27u, 0LL);
  }
  return v14;
}
