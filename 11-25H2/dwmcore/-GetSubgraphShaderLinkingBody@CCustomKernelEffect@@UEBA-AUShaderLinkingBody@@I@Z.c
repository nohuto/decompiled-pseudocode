/*
 * XREFs of ?GetSubgraphShaderLinkingBody@CCustomKernelEffect@@UEBA?AUShaderLinkingBody@@I@Z @ 0x18021CA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CCustomKernelEffect::GetSubgraphShaderLinkingBody(_OWORD *a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0

  result = a2;
  v3 = a1[11];
  *a2 = a1[10];
  v4 = a1[12];
  a2[1] = v3;
  a2[2] = v4;
  return result;
}
