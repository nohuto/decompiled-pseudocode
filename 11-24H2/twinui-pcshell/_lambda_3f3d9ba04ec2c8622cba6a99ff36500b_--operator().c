/*
 * XREFs of _lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator() @ 0x1804C1744
 * Callers:
 *     LambdaCustomPaintProc__lambda_3f3d9ba04ec2c8622cba6a99ff36500b__ID2D1DeviceContext___ @ 0x1804C10A0 (LambdaCustomPaintProc__lambda_3f3d9ba04ec2c8622cba6a99ff36500b__ID2D1DeviceContext___.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804C2C64 (-_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804C2DDC (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 */

__int64 __fastcall lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator()(
        __int64 *a1,
        struct ID2D1DeviceContext *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __m128i v5; // xmm1
  float v6; // xmm6_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  int v9; // eax
  struct D2D_RECT_F v11; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_RECT_F v12; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v3 = *a1;
  v11.left = 0.0;
  v11.top = 0.0;
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(v3 + 336));
  v12.top = 0.0;
  v11.right = _mm_cvtepi32_ps(v5).m128_f32[0];
  v11.bottom = (float)SHIDWORD(a3);
  v12.bottom = (float)SHIDWORD(a3);
  v6 = (float)(int)a3;
  v12.left = (float)*(int *)(v3 + 352) + v11.right;
  v12.right = (float)(int)a3 - (float)*(int *)(v3 + 356);
  if ( (unsigned int)Mirror_IsThreadRTL() )
  {
    v7 = v11.right - v11.left;
    v8 = v12.right - v12.left;
    v11.right = v6 - (float)(v11.left - 0.0);
    v11.left = v11.right - v7;
    v12.right = v6 - (float)(v12.left - 0.0);
    v12.left = v12.right - v8;
  }
  CSwitchItemElement::_RenderIcon((CSwitchItemElement *)v3, &v11, a2);
  v9 = CSwitchItemElement::_RenderText((CSwitchItemElement *)v3, &v12, a2);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v9);
  return 0LL;
}
