/*
 * XREFs of ?GetSubgraphShaderLinkingBody@CRadialGradientEffect@@UEBA?AUShaderLinkingBody@@I@Z @ 0x1802DBEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRadialGradientEffect::GetSubgraphShaderLinkingBody(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // cf
  __int64 result; // rax

  *(_QWORD *)a2 = 1LL;
  *(_QWORD *)(a2 + 8) = &CRadialGradientEffect::k_shaderLinkingArguments;
  *(_QWORD *)(a2 + 16) = 3999LL;
  *(_QWORD *)(a2 + 24) = &unk_1803C7570;
  v2 = "RadialGradientCentered_UV";
  *(_BYTE *)(a2 + 46) = 1;
  if ( !*(_BYTE *)(a1 + 44) )
    v2 = "RadialGradientNonCentered_UV";
  *(_QWORD *)(a2 + 32) = v2;
  v3 = *(_BYTE *)(a1 + 44) != 0;
  *(_WORD *)(a2 + 44) = 256;
  result = a2;
  *(_DWORD *)(a2 + 40) = v3 ? 8 : 32;
  return result;
}
