/*
 * XREFs of ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x18007E40C
 * Callers:
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x180072534 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x18007E780 (std--_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph--CG.c)
 *     std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x18007E7A0 (std--_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEf_ea_18007E7A0.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x18007F7BC (--$emplace_back@UEffectInput@@@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00.c)
 *     ??1?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800802C8 (--1-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@de.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18010ACD0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1801269A0 (std--_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph--CG.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  __m128i v27; // xmm0
  __int64 v28; // rcx
  int v29; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // eax
  __m128i v34; // xmm0
  __int64 v35; // rcx
  int v36; // eax
  int v37; // [rsp+28h] [rbp-E0h]
  CDrawingContext **v38; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v39[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v40[3]; // [rsp+50h] [rbp-B8h]
  int v41; // [rsp+68h] [rbp-A0h]
  char v42; // [rsp+6Ch] [rbp-9Ch]
  char v43; // [rsp+6Dh] [rbp-9Bh]
  _OWORD v44[4]; // [rsp+70h] [rbp-98h]
  CDrawingContext *v45; // [rsp+B0h] [rbp-58h] BYREF
  int v46; // [rsp+B8h] [rbp-50h]
  CExternalEffectGraph *v47; // [rsp+C0h] [rbp-48h]
  struct EffectInput *v48; // [rsp+C8h] [rbp-40h]
  int v49; // [rsp+D0h] [rbp-38h]
  int v50; // [rsp+D4h] [rbp-34h]
  _QWORD v51[3]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v52[448]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v53; // [rsp+2B8h] [rbp+1B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v8 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v8,
      v37);
    return v9;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
    v11 = *(CMILRefCountImpl **)a3;
    v45 = a2;
    v39[0] = v11;
    v46 = *(_DWORD *)(v10 + 8);
    v51[0] = v52;
    v48 = a4;
    v51[1] = v52;
    v51[2] = &v53;
    v47 = this;
    v49 = -1;
    v50 = -1;
    if ( v11 )
    {
      v12 = *(void (**)(void))(*(_QWORD *)v11 + 8LL);
      if ( (char *)v12 == (char *)CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v11);
      else
        v12();
    }
    v13 = *((_QWORD *)a3 + 1);
    v39[1] = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *(_OWORD *)((char *)a3 + 24);
    v15 = *((_BYTE *)a3 + 44);
    LOBYTE(v40[0]) = *((_BYTE *)a3 + 16);
    v41 = *((_DWORD *)a3 + 10);
    v43 = *((_BYTE *)a3 + 45);
    v42 = v15;
    *(_OWORD *)&v40[1] = v14;
    if ( v15 )
    {
      v16 = *((_OWORD *)a3 + 4);
      v44[0] = *((_OWORD *)a3 + 3);
      v17 = *((_OWORD *)a3 + 5);
      v44[1] = v16;
      v18 = *((_OWORD *)a3 + 6);
      v44[2] = v17;
      v44[3] = v18;
    }
    else
    {
      v44[0] = *((_OWORD *)a3 + 3);
    }
    detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::emplace_back<EffectInput>(
      v51,
      v39);
    v19 = *((_QWORD *)this + 62);
    v49 = 0;
    v20 = *((_QWORD *)this + 63);
    while ( v19 != v20 )
    {
      v21 = *(_QWORD *)(v19 + 56);
      v38 = &v45;
      if ( !v21 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        JUMPOUT(0x18007E76CLL);
      }
      v22 = *(__int64 (__fastcall **)(__int64, CDrawingContext ***))(*(_QWORD *)v21 + 16LL);
      if ( (char *)v22 == (char *)std::_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call )
      {
        v23 = std::_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
                v21,
                &v38);
      }
      else if ( (char *)v22 == (char *)std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call )
      {
        v23 = std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
                v21,
                &v38);
      }
      else if ( (char *)v22 == (char *)std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call )
      {
        v23 = std::_Func_impl_no_alloc__lambda_58a5580cd9801359333db2cf07d3cd96__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
                v21,
                &v38);
      }
      else
      {
        v23 = v22(v21, &v38);
      }
      v9 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
          (const char *)(unsigned int)v23,
          v37);
        if ( v50 != -1 )
          CDrawingContext::PopLayer(v45);
        detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::~vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>(v51);
        v33 = *((_DWORD *)a2 + 68);
        v34 = 0LL;
        if ( v33 )
        {
          v35 = (unsigned int)(v33 - 1);
          *((_DWORD *)a2 + 68) = v35;
          v34 = *(__m128i *)(*((_QWORD *)a2 + 33) + 16 * v35);
        }
        if ( _mm_srli_si128(v34, 8).m128i_u64[0] )
          CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)a2 + 336, v31, v32);
        v36 = *((_DWORD *)a2 + 74);
        if ( v36 )
          *((_DWORD *)a2 + 74) = v36 - 1;
        CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)a2 + 312, v31, v32);
        return v9;
      }
      v19 += 64LL;
    }
    if ( v50 != -1 )
      CDrawingContext::PopLayer(v45);
    detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::~vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>(v51);
    v26 = *((_DWORD *)a2 + 68);
    v27 = 0LL;
    if ( v26 )
    {
      v28 = (unsigned int)(v26 - 1);
      *((_DWORD *)a2 + 68) = v28;
      v27 = *(__m128i *)(*((_QWORD *)a2 + 33) + 16 * v28);
    }
    if ( _mm_srli_si128(v27, 8).m128i_u64[0] )
      CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)a2 + 336, v24, v25);
    v29 = *((_DWORD *)a2 + 74);
    if ( v29 )
      *((_DWORD *)a2 + 74) = v29 - 1;
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)a2 + 312, v24, v25);
    return 0LL;
  }
}
