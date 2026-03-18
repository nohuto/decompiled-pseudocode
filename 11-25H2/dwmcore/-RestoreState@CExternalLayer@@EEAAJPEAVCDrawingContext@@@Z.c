/*
 * XREFs of ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180160F10
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180080580 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180086190 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x18009FE10 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D8BD0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18010ACD0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PreRestoreState@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180161230 (-PreRestoreState@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PostRestoreState@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180161250 (-PostRestoreState@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?RenderLayer@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801619A0 (-RenderLayer@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(CExternalLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  __int64 (__fastcall *v5)(COffScreenRenderingLayer *__hidden, struct CDrawingContext *); // rax
  int v6; // eax
  struct Windows::Foundation::Numerics::float4x4 *v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  bool v16; // al
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 (__fastcall *v20)(CTreeEffectLayer *__hidden, struct CDrawingContext *); // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(COffScreenRenderingLayer *__hidden, struct CDrawingContext *); // rax
  int v24; // eax
  __int64 v25; // r8
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-89h]
  _OWORD v29[4]; // [rsp+30h] [rbp-79h] BYREF
  int v30; // [rsp+70h] [rbp-39h]
  _BYTE v31[64]; // [rsp+80h] [rbp-29h] BYREF
  int v32; // [rsp+C0h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+D0h] [rbp+27h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start,
      a3,
      1u,
      &v33);
  v5 = *(__int64 (__fastcall **)(COffScreenRenderingLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)this + 40LL);
  if ( v5 == COffScreenRenderingLayer::PreRestoreState )
    v6 = COffScreenRenderingLayer::PreRestoreState(this, a2);
  else
    v6 = v5(this, a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    v28 = 215;
  }
  else
  {
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
      *((_QWORD *)a2 + 995) = v9;
    if ( *((_BYTE *)this + 34) )
    {
      v10 = *((_DWORD *)a2 + 780);
      if ( v10 )
        *((_DWORD *)a2 + 780) = v10 - 1;
      --*(_QWORD *)(*((_QWORD *)a2 + 94) - 184LL);
      *((_BYTE *)a2 + 8065) = 1;
      *((_BYTE *)this + 34) = 0;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v11 = CDrawingContext::PopRenderTargetInternal(a2, 0LL, (__int64)v7);
      v8 = v11;
      if ( v11 < 0 )
      {
        v28 = 232;
        goto LABEL_38;
      }
    }
    if ( *((_BYTE *)this + 32) )
    {
      v12 = *((_OWORD *)this + 3);
      v13 = *((_OWORD *)this + 4);
      v30 = *((_DWORD *)this + 28);
      v29[0] = v12;
      v14 = *((_OWORD *)this + 5);
      v29[1] = v13;
      v15 = *((_OWORD *)this + 6);
      v29[2] = v14;
      v29[3] = v15;
      v16 = Windows::Foundation::Numerics::invert(
              (Windows::Foundation::Numerics *)v29,
              (const struct Windows::Foundation::Numerics::float4x4 *)v29,
              v7);
      LOWORD(v30) = v30 & 0xC003;
      v30 = v16 ? v30 : 0;
      CMILMatrix::Multiply((struct CDrawingContext *)((char *)a2 + 96), (const struct CMILMatrix *)v29);
      *((_BYTE *)a2 + 8064) = CMILMatrix::IsIdentity<0>((__int64)a2 + 96);
      if ( *((_BYTE *)a2 + 7936) )
      {
        v17 = *((_QWORD *)a2 + 995);
        if ( v17 )
        {
          v32 = 0;
          CMILMatrix::Multiply((__m128 *)(v17 + 1572), (const struct CMILMatrix *)v29, (struct CMILMatrix *)v31);
          v18 = COcclusionContext::SetDeviceTransform((COcclusionContext *)v17, (const struct CMILMatrix *)v31);
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x38u, 0LL);
        }
      }
      v19 = *((_DWORD *)a2 + 74);
      if ( v19 )
        *((_DWORD *)a2 + 74) = v19 - 1;
      CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)a2 + 312);
      *((_BYTE *)this + 32) = 0;
    }
    v20 = *(__int64 (__fastcall **)(CTreeEffectLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)this + 48LL);
    if ( v20 == CTreeEffectLayer::PostRestoreState )
      v21 = CTreeEffectLayer::PostRestoreState(this, a2);
    else
      v21 = v20(this, a2);
    v8 = v21;
    if ( v21 >= 0 )
    {
      v22 = *(_QWORD *)this;
      if ( !*((_BYTE *)a2 + 193) )
      {
        v23 = *(__int64 (__fastcall **)(COffScreenRenderingLayer *__hidden, struct CDrawingContext *))(v22 + 56);
        if ( v23 == COffScreenRenderingLayer::RenderLayer )
          v24 = COffScreenRenderingLayer::RenderLayer(this, a2);
        else
          v24 = v23(this, a2);
        v8 = v24;
        if ( v24 >= 0 )
          goto LABEL_29;
        v28 = 254;
        goto LABEL_35;
      }
      v11 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(v22 + 64))(this, a2);
      v8 = v11;
      if ( v11 >= 0 )
        goto LABEL_29;
      v28 = 250;
LABEL_38:
      v27 = v11;
      goto LABEL_36;
    }
    v28 = 241;
  }
LABEL_35:
  v27 = v8;
LABEL_36:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, v28, 0LL);
LABEL_29:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop,
      v25,
      1u,
      &v33);
  return v8;
}
