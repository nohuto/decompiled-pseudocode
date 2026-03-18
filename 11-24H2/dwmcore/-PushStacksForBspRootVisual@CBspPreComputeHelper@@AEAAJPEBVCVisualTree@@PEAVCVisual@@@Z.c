/*
 * XREFs of ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008FA94
 * Callers:
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z @ 0x18008F500 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18001D640 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18001DCC0 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180034E40 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800F6F20 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18016A8E4 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x180195B48 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x180195BD0 (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1801A9AE0 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1801C8E50 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspRootVisual(
        CBspPreComputeHelper *this,
        CVisual **a2,
        struct CVisual *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-60h]
  _BYTE v9[64]; // [rsp+30h] [rbp-50h] BYREF
  int v10; // [rsp+70h] [rbp-10h]
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF
  struct CVisual *v12; // [rsp+B0h] [rbp+30h]

  v12 = a3;
  v10 = 0;
  LOBYTE(v11) = 0;
  CVisual::CalcTransform(a3, a2, 0LL, (bool *)&v11, (struct CMILMatrix *)v9, 0LL);
  v4 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 48), (const struct CMILMatrix *)v9, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 106;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v8, 0LL);
    return v5;
  }
  v11 = 0LL;
  v4 = CWatermarkStack<CBspNode *,64,2,10>::Push((int)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 111;
    goto LABEL_14;
  }
  v6 = CWatermarkStack<CVisual *,64,2,10>::Push((int)this + 24);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x72u, 0LL);
    return v5;
  }
  v4 = CMatrixStack::Push(
         (CBspPreComputeHelper *)((char *)this + 72),
         (const struct CMILMatrix *)&CMILMatrix::Identity,
         0);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 117;
    goto LABEL_14;
  }
  LODWORD(v11) = -1;
  v4 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((int)this + 96);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 120;
    goto LABEL_14;
  }
  LODWORD(v11) = -1;
  v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 120, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 123;
    goto LABEL_14;
  }
  LODWORD(v11) = -1;
  v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((__int64)this + 144, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 126;
    goto LABEL_14;
  }
  LODWORD(v11) = 5;
  v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((__int64)this + 168, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 129;
    goto LABEL_14;
  }
  LODWORD(v11) = 1065353216;
  v4 = CWatermarkStack<float,64,2,10>::Push((char *)this + 192, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 132;
    goto LABEL_14;
  }
  LOBYTE(v11) = 0;
  v4 = CWatermarkStack<bool,64,2,10>::Push((__int64)this + 216, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 135;
    goto LABEL_14;
  }
  v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((__int64)this + 240, (_DWORD *)this + 66);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 138;
    goto LABEL_14;
  }
  return v5;
}
