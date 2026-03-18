/*
 * XREFs of _lambda_16f9bd5df3b75e2e55d1e6198dc09b2c_::operator() @ 0x1800803F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x18007E780 (std--_Func_impl_no_alloc__lambda_16f9bd5df3b75e2e55d1e6198dc09b2c__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18007F0E0 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x18007FC58 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_16f9bd5df3b75e2e55d1e6198dc09b2c_::operator()(_BYTE *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int128 v5; // xmm0
  unsigned int TargetFromSource; // eax
  bool v7; // zf
  unsigned int *v8; // r9
  int v9; // r8d
  int v10; // ebx
  __int64 v12; // rdx
  int v13[4]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+34h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(unsigned int *)(a2 + 32);
  if ( !a1[1] )
  {
    v5 = _xmm;
    v14 = 0;
    goto LABEL_4;
  }
  if ( *a1 != 1 )
  {
    v5 = *(_OWORD *)&_xmm;
    v14 = 1048576000;
LABEL_4:
    v15 = 0;
    goto LABEL_5;
  }
  v5 = _xmm;
  v14 = 0;
  v15 = 1048576000;
LABEL_5:
  *(_OWORD *)v13 = v5;
  TargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
                       (CExternalEffectGraph::CGraphRenderingContext *)a2,
                       v3,
                       (const struct D2D1::Matrix3x2F *)v13);
  v7 = *a1 == 1;
  *(_BYTE *)(112 * v3 + *(_QWORD *)(a2 + 48) + 104) = 1;
  if ( v7 )
  {
    v8 = (unsigned int *)(*(_QWORD *)(a2 + 16) + 1560LL);
    if ( *(float *)v8 == 0.0 )
    {
      v9 = 3;
      v8 = (unsigned int *)(a2 + 40);
    }
    else
    {
      v9 = 4;
    }
    v10 = CExternalEffectGraph::CGraphRenderingContext::PushTargetInternal((__int64 *)a2, TargetFromSource, v9, v8);
    if ( v10 >= 0 )
      return 0LL;
    v12 = 326LL;
  }
  else
  {
    v10 = CExternalEffectGraph::CGraphRenderingContext::PushTargetInternal(
            (__int64 *)a2,
            TargetFromSource,
            3,
            (unsigned int *)(a2 + 40));
    if ( v10 >= 0 )
      return 0LL;
    v12 = 330LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
    (const char *)(unsigned int)v10,
    v13[0]);
  return (unsigned int)v10;
}
