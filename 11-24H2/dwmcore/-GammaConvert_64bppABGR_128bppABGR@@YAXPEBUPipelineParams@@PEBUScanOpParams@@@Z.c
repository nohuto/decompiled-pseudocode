/*
 * XREFs of ?GammaConvert_64bppABGR_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802DE310
 * Callers:
 *     <none>
 * Callees:
 *     ?Convert_sRGB_UINT16_To_scRGB_float@@YAMG@Z @ 0x1802B4E90 (-Convert_sRGB_UINT16_To_scRGB_float@@YAMG@Z.c)
 */

void __fastcall GammaConvert_64bppABGR_128bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int16 *v2; // rbx
  __int64 v3; // rdi
  float v4; // xmm3_4
  int v5; // xmm4_4
  int v6; // r10d
  float v7; // xmm5_4
  int v8; // r11d

  v2 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v3 = *(_QWORD *)a2;
  if ( *((_DWORD *)a1 + 2) )
  {
    do
    {
      Convert_sRGB_UINT16_To_scRGB_float(v2[1]);
      v4 = Convert_sRGB_UINT16_To_scRGB_float(v2[2]);
      *(float *)v3 = Convert_sRGB_UINT16_To_scRGB_float(*v2);
      v2 += 4;
      *(_DWORD *)(v3 + 4) = v5;
      *(float *)(v3 + 8) = v4;
      v3 += 16LL;
      *(float *)(v3 - 4) = (float)v6 / v7;
    }
    while ( v8 != 1 );
  }
}
