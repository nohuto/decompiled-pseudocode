/*
 * XREFs of ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180134410
 * Callers:
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z @ 0x1801340C0 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z.c)
 * Callees:
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18002668C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180034550 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x180081EA0 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800B2700 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x1800B2D80 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18010B7DC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x1801B3370 (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1801D7B50 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspChildVisual(
        CBspPreComputeHelper *this,
        CVisual **a2,
        const struct CVisual **a3)
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
  v5 = a3 + 12;
  v6 = a3 + 12;
  if ( ((_DWORD)a3[12] & 0x20000000) != 0 )
  {
    v18 = *((int *)a3 + 53);
    v11 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((int)this + 96);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x9Du, 0LL);
      return v9;
    }
    v6 = a3 + 12;
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
    OpacityInternal = CVisual::GetOpacityInternal((CVisual *)a3);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(OpacityInternal - 1.0) & _xmm) < 0.0000011920929
      || (*(float *)&v18 = fminf(1.0, fmaxf(OpacityInternal, 0.0))
                         * *(float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 192),
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
