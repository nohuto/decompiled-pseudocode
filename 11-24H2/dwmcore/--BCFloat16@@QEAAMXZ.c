/*
 * XREFs of ??BCFloat16@@QEAAMXZ @ 0x1802DAE70
 * Callers:
 *     ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x18019686C (--$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z.c)
 *     ?Convert_64bppABGRFloat_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802DDF90 (-Convert_64bppABGRFloat_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?AlphaDivide_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802DE4B0 (-AlphaDivide_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802DEB20 (-AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 * Callees:
 *     <none>
 */

__m128i __fastcall CFloat16::operator float(unsigned __int16 *a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  unsigned int v6; // edx

  v1 = *a1;
  if ( (v1 & 0xFFFF7C00) != 0 )
  {
    v5 = ((v1 & 0x7C00) << 13) + 939524096;
    v4 = (v1 & 0x3FF | (8 * (v1 & 0xFFFF8000))) << 13;
LABEL_8:
    v6 = v5 | v4;
    return _mm_cvtsi32_si128(v6);
  }
  if ( (v1 & 0x3FF) != 0 )
  {
    v2 = -14;
    v3 = v1 & 0x3FF;
    do
    {
      --v2;
      v3 *= 2;
    }
    while ( (v3 & 0x400) == 0 );
    v4 = ((v3 | (8 * (v1 & 0xFFFF8080))) & 0xFFFFFBFF) << 13;
    v5 = (v2 + 127) << 23;
    goto LABEL_8;
  }
  v6 = (v1 & 0xFFFF8000) << 16;
  return _mm_cvtsi32_si128(v6);
}
