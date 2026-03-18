/*
 * XREFs of _lambda_1081fb77a3a3c81cdcc31a57fa3e9375_::operator() @ 0x1801372F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1081fb77a3a3c81cdcc31a57fa3e9375__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1802061C0 (std--_Func_impl_no_alloc__lambda_1081fb77a3a3c81cdcc31a57fa3e9375__long_CExternalEf_ea_1802061C0.c)
 * Callees:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x180018AE4 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x1801382B0 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x180138E78 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_1081fb77a3a3c81cdcc31a57fa3e9375_::operator()(__int64 a1, __int64 a2)
{
  float *v2; // rax
  float v5; // xmm4_4
  float v6; // xmm2_4
  __int64 v7; // rbx
  unsigned int TargetFromSource; // eax
  int v9; // ebx
  int v10; // eax
  CDrawingContext *v11; // rcx
  __int64 v13; // rdx
  int v14[6]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(float **)a1;
  v5 = **(float **)a1;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v2[1] - 1.0) & _xmm) < 0.0000011920929 )
  {
    return 0LL;
  }
  v6 = v2[1];
  v7 = *(unsigned int *)(a2 + 32);
  v14[1] = 0;
  v14[2] = 0;
  *(float *)&v14[3] = v6;
  *(float *)v14 = v5;
  *(float *)&v14[4] = 0.0 - (float)(v5 * 0.0);
  *(float *)&v14[5] = 0.0 - (float)(v6 * 0.0);
  TargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
                       (CExternalEffectGraph::CGraphRenderingContext *)a2,
                       v7,
                       (const struct D2D1::Matrix3x2F *)v14);
  *(_BYTE *)(112 * v7 + *(_QWORD *)(a2 + 48) + 104) = *(_BYTE *)(a1 + 8);
  v9 = CExternalEffectGraph::CGraphRenderingContext::PushTargetInternal(a2, TargetFromSource, 3LL, a2 + 40);
  if ( v9 < 0 )
  {
    v13 = 280LL;
  }
  else
  {
    v9 = CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(
           (CExternalEffectGraph::CGraphRenderingContext *)a2,
           *(_DWORD *)(a1 + 12),
           1u);
    if ( v9 >= 0 )
    {
      v10 = *(_DWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 36) = -1;
      v11 = *(CDrawingContext **)a2;
      *(_DWORD *)(a2 + 32) = v10;
      CDrawingContext::PopLayer(v11);
      return 0LL;
    }
    v13 = 281LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
