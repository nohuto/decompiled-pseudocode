/*
 * XREFs of ?GetSubgraphShaderLinkingBody@CProjectedShadowApproxBlurEffect@@UEBA?AUShaderLinkingBody@@I@Z @ 0x1802DC1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CProjectedShadowApproxBlurEffect::GetSubgraphShaderLinkingBody(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0

  result = a2;
  v3 = *(_OWORD *)(a1 + 56);
  *a2 = *(_OWORD *)(a1 + 40);
  v4 = *(_OWORD *)(a1 + 72);
  a2[1] = v3;
  a2[2] = v4;
  return result;
}
