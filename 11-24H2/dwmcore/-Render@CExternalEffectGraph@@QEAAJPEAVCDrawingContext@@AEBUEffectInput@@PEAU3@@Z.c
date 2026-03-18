/*
 * XREFs of ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1801375DC
 * Callers:
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x1800484C4 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x18004A12C (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x1800FB0A0 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     std::_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180137950 (std--_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph--CG.c)
 *     std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180137970 (std--_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEf_ea_180137970.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x18013898C (--$emplace_back@UEffectInput@@@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00.c)
 *     std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180138CF0 (std--_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph--CG.c)
 *     ??1?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801394E8 (--1-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@de.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalEffectGraph::Render(
        CExternalEffectGraph *this,
        struct CDrawingContext *a2,
        const struct EffectInput *a3,
        struct EffectInput *a4)
{
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rax
  CMILRefCountImpl *v11; // rcx
  void (*v12)(void); // rax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  char v15; // cl
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, CDrawingContext ***); // rax
  int v23; // eax
  int v24; // eax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  int v27; // eax
  int v29; // eax
  __m128i v30; // xmm0
  __int64 v31; // rcx
  int v32; // eax
  CDrawingContext **v33; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v35[3]; // [rsp+50h] [rbp-B8h]
  int v36; // [rsp+68h] [rbp-A0h]
  char v37; // [rsp+6Ch] [rbp-9Ch]
  char v38; // [rsp+6Dh] [rbp-9Bh]
  _OWORD v39[4]; // [rsp+70h] [rbp-98h]
  CDrawingContext *v40; // [rsp+B0h] [rbp-58h] BYREF
  int v41; // [rsp+B8h] [rbp-50h]
  CExternalEffectGraph *v42; // [rsp+C0h] [rbp-48h]
  struct EffectInput *v43; // [rsp+C8h] [rbp-40h]
  int v44; // [rsp+D0h] [rbp-38h]
  int v45; // [rsp+D4h] [rbp-34h]
  _QWORD v46[3]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v47[448]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v48; // [rsp+2B8h] [rbp+1B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v8 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
    v11 = *(CMILRefCountImpl **)a3;
    v40 = a2;
    v34[0] = v11;
    v41 = *(_DWORD *)(v10 + 8);
    v46[0] = v47;
    v43 = a4;
    v46[1] = v47;
    v46[2] = &v48;
    v42 = this;
    v44 = -1;
    v45 = -1;
    if ( v11 )
    {
      v12 = *(void (**)(void))(*(_QWORD *)v11 + 8LL);
      if ( (char *)v12 == (char *)CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v11);
      else
        v12();
    }
    v13 = *((_QWORD *)a3 + 1);
    v34[1] = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *(_OWORD *)((char *)a3 + 24);
    v15 = *((_BYTE *)a3 + 44);
    LOBYTE(v35[0]) = *((_BYTE *)a3 + 16);
    v36 = *((_DWORD *)a3 + 10);
    v38 = *((_BYTE *)a3 + 45);
    v37 = v15;
    *(_OWORD *)&v35[1] = v14;
    if ( v15 )
    {
      v16 = *((_OWORD *)a3 + 4);
      v39[0] = *((_OWORD *)a3 + 3);
      v17 = *((_OWORD *)a3 + 5);
      v39[1] = v16;
      v18 = *((_OWORD *)a3 + 6);
      v39[2] = v17;
      v39[3] = v18;
    }
    else
    {
      v39[0] = *((_OWORD *)a3 + 3);
    }
    detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::emplace_back<EffectInput>(
      v46,
      v34);
    v19 = *((_QWORD *)this + 62);
    v44 = 0;
    v20 = *((_QWORD *)this + 63);
    while ( v19 != v20 )
    {
      v21 = *(_QWORD *)(v19 + 56);
      v33 = &v40;
      if ( !v21 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        JUMPOUT(0x18013793CLL);
      }
      v22 = *(__int64 (__fastcall **)(__int64, CDrawingContext ***))(*(_QWORD *)v21 + 16LL);
      if ( (char *)v22 == (char *)std::_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call )
      {
        v23 = std::_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
                v21,
                &v33);
      }
      else if ( (char *)v22 == (char *)std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call )
      {
        v23 = std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
                v21,
                &v33);
      }
      else if ( (char *)v22 == (char *)std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call )
      {
        v23 = std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
                v21,
                &v33);
      }
      else
      {
        v23 = v22(v21, &v33);
      }
      v9 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
          (const char *)(unsigned int)v23);
        if ( v45 != -1 )
          CDrawingContext::PopLayer(v40);
        detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::~vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>(v46);
        v29 = *((_DWORD *)a2 + 68);
        v30 = 0LL;
        if ( v29 )
        {
          v31 = (unsigned int)(v29 - 1);
          *((_DWORD *)a2 + 68) = v31;
          v30 = *(__m128i *)(*((_QWORD *)a2 + 33) + 16 * v31);
        }
        if ( _mm_srli_si128(v30, 8).m128i_u64[0] )
          CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)a2 + 336);
        v32 = *((_DWORD *)a2 + 74);
        if ( v32 )
          *((_DWORD *)a2 + 74) = v32 - 1;
        CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)a2 + 312);
        return v9;
      }
      v19 += 64LL;
    }
    if ( v45 != -1 )
      CDrawingContext::PopLayer(v40);
    detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::~vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>(v46);
    v24 = *((_DWORD *)a2 + 68);
    v25 = 0LL;
    if ( v24 )
    {
      v26 = (unsigned int)(v24 - 1);
      *((_DWORD *)a2 + 68) = v26;
      v25 = *(__m128i *)(*((_QWORD *)a2 + 33) + 16 * v26);
    }
    if ( _mm_srli_si128(v25, 8).m128i_u64[0] )
      CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)a2 + 336);
    v27 = *((_DWORD *)a2 + 74);
    if ( v27 )
      *((_DWORD *)a2 + 74) = v27 - 1;
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((__int64)a2 + 312);
    return 0LL;
  }
}
