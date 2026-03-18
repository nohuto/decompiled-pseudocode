/*
 * XREFs of ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008F850
 * Callers:
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z @ 0x18008F500 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18000E7D0 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18001D640 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18001DCC0 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800F6F20 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18016A418 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x180195BD0 (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801A98A0 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1801C8E50 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspChildVisual(
        CBspPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  _DWORD *v5; // r14
  _DWORD *v6; // r15
  float OpacityInternal; // xmm0_4
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+60h] [rbp+30h] BYREF

  CBspPreComputeHelper::PushTransformForChildVisual(this, a2, a3);
  v5 = (_DWORD *)((char *)a3 + 96);
  v6 = (_DWORD *)((char *)a3 + 96);
  if ( (*((_DWORD *)a3 + 24) & 0x20000000) != 0 )
  {
    v18 = *((int *)a3 + 53);
    v11 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((int)this + 96);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x9Du, 0LL);
      return v9;
    }
    v6 = (_DWORD *)((char *)a3 + 96);
  }
  if ( (*v5 & 0x2000000) != 0
    && (v18 = (int)(*v5 << 8) >> 28,
        v12 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 120, &v18),
        v9 = v12,
        v12 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xA3u, 0LL);
  }
  else if ( (*v5 & 0x4000000) != 0
         && (v18 = *((int *)a3 + 50),
             v13 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((__int64)this + 144, &v18),
             v9 = v13,
             v13 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xA9u, 0LL);
  }
  else if ( (*v6 & 0x8000000) != 0
         && (v18 = *((int *)a3 + 51),
             v14 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((__int64)this + 168, &v18),
             v9 = v14,
             v14 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xAFu, 0LL);
  }
  else
  {
    OpacityInternal = CVisual::GetOpacityInternal(a3);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(OpacityInternal - 1.0) & _xmm) < 0.0000011920929
      || (*(float *)&v18 = fminf(1.0, fmaxf(OpacityInternal, 0.0))
                         * *(float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 192),
          v16 = CWatermarkStack<float,64,2,10>::Push(v15, &v18),
          v9 = v16,
          v16 >= 0) )
    {
      if ( (*((_BYTE *)a3 + 105) & 0x10) != 0
        && (LOBYTE(v18) = 1, v17 = CWatermarkStack<bool,64,2,10>::Push((__int64)this + 216, &v18), v9 = v17, v17 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xBEu, 0LL);
      }
      else
      {
        v8 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((__int64)this + 240, (_DWORD *)this + 66);
        v9 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xC2u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xB8u, 0LL);
    }
  }
  return v9;
}
