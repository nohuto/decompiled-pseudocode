/*
 * XREFs of ?HimetricToPixels@EdgyLegacyProcessor@@QEAAXPEAUD2D_VECTOR_2F@@@Z @ 0x1801A8880
 * Callers:
 *     ?EnsureEdgeMetricsForDisplay@EdgyLegacyProcessor@@IEAAXPEBUHitTestInfo@@@Z @ 0x1801A8768 (-EnsureEdgeMetricsForDisplay@EdgyLegacyProcessor@@IEAAXPEBUHitTestInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall EdgyLegacyProcessor::HimetricToPixels(
        EdgyLegacyProcessor *this,
        struct D2D_VECTOR_2F *a2,
        __int64 a3,
        const char *a4)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  FLOAT v6; // xmm0_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((float *)this + 14);
  if ( v4 == 0.0 || (v5 = *((float *)this + 15), v5 == 0.0) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgylegacyprocessor.cpp",
      a4);
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgylegacyprocessor.cpp",
      a4);
  v6 = v5 * a2->y;
  a2->x = v4 * a2->x;
  a2->y = v6;
}
