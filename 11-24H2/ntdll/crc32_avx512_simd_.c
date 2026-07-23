/*
 * XREFs of crc32_avx512_simd_ @ 0x18011A378
 * Callers:
 *     crc32_z @ 0x180119E3C (crc32_z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall crc32_avx512_simd_(__int64 _RCX, __int64 a2, int _R8D)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v43; // rdx
  __int64 result; // rax

  __asm
  {
    vmovdqu32 zmm1, zmmword ptr [rcx]
    vmovdqu32 zmm3, zmmword ptr cs:byte_18017F600
  }
  __asm { vmovdqu32 zmm6, zmmword ptr [rcx+40h] }
  v7 = a2 - 256;
  __asm { vmovdqu32 zmm7, zmmword ptr [rcx+80h] }
  __asm { vmovdqu32 zmm8, zmmword ptr [rcx+0C0h] }
  _RCX = _RCX + 256;
  __asm
  {
    vmovd   xmm0, r8d
    vpxord  zmm4, zmm1, zmm0
  }
  if ( v7 >= 0x100 )
  {
    v13 = v7 >> 8;
    v7 += -256LL * (v7 >> 8);
    do
    {
      __asm
      {
        vmovdqu32 zmm2, zmmword ptr [rcx]
        vpclmulqdq zmm0, zmm4, zmm3, 11h
        vpclmulqdq zmm1, zmm4, zmm3, 0
        vpxord  zmm1, zmm0, zmm1
        vpxord  zmm4, zmm1, zmm2
        vmovdqu32 zmm2, zmmword ptr [rcx+40h]
        vpclmulqdq zmm0, zmm6, zmm3, 11h
        vpclmulqdq zmm1, zmm6, zmm3, 0
        vpxord  zmm1, zmm0, zmm1
        vpxord  zmm6, zmm1, zmm2
        vmovdqu32 zmm2, zmmword ptr [rcx+80h]
        vpclmulqdq zmm0, zmm7, zmm3, 11h
        vpclmulqdq zmm1, zmm7, zmm3, 0
        vpxord  zmm1, zmm0, zmm1
        vpxord  zmm7, zmm1, zmm2
        vmovdqu32 zmm2, zmmword ptr [rcx+0C0h]
        vpclmulqdq zmm1, zmm8, zmm3, 0
        vpclmulqdq zmm0, zmm8, zmm3, 11h
      }
      _RCX += 256LL;
      __asm
      {
        vpxord  zmm1, zmm0, zmm1
        vpxord  zmm8, zmm1, zmm2
      }
      --v13;
    }
    while ( v13 );
  }
  __asm
  {
    vmovdqu32 zmm5, zmmword ptr cs:byte_18017F580
    vpclmulqdq zmm0, zmm4, zmm5, 11h
    vpxord  zmm1, zmm0, zmm6
    vpclmulqdq zmm2, zmm4, zmm5, 0
    vpxord  zmm3, zmm1, zmm2
    vpclmulqdq zmm0, zmm3, zmm5, 11h
    vpxord  zmm1, zmm0, zmm7
    vpclmulqdq zmm4, zmm3, zmm5, 0
    vpxord  zmm2, zmm1, zmm4
    vpclmulqdq zmm0, zmm2, zmm5, 11h
    vpxord  zmm1, zmm0, zmm8
    vpclmulqdq zmm3, zmm2, zmm5, 0
    vpxord  zmm6, zmm1, zmm3
  }
  if ( v7 >= 0x40 )
  {
    v43 = v7 >> 6;
    do
    {
      __asm { vmovdqu32 zmm1, zmmword ptr [rcx] }
      _RCX += 64LL;
      __asm
      {
        vpclmulqdq zmm0, zmm6, zmm5, 11h
        vpxord  zmm1, zmm0, zmm1
        vpclmulqdq zmm2, zmm6, zmm5, 0
        vpxord  zmm6, zmm1, zmm2
      }
      --v43;
    }
    while ( v43 );
  }
  __asm
  {
    vmovdqa xmm4, cs:xmmword_18017F5D0
    vmovdqa xmm2, xmm6
    vmovdqa xmm3, cs:__xmm@00000000ffffffff00000000ffffffff
    vmovdqa xmm0, xmm6
    vpclmulqdq xmm2, xmm2, xmm4, 11h
    vpclmulqdq xmm0, xmm0, xmm4, 0
    vxorps  xmm2, xmm2, xmm0
    vextracti32x4 xmm0, zmm6, 1
    vxorps  xmm2, xmm2, xmm0
    vmovdqa xmm1, xmm2
    vpclmulqdq xmm1, xmm1, xmm4, 11h
    vpclmulqdq xmm2, xmm2, xmm4, 0
    vxorps  xmm1, xmm1, xmm2
    vextracti32x4 xmm0, zmm6, 2
    vxorps  xmm1, xmm1, xmm0
    vmovdqa xmm2, xmm1
    vpclmulqdq xmm1, xmm1, xmm4, 0
    vpclmulqdq xmm2, xmm2, xmm4, 11h
    vxorps  xmm2, xmm2, xmm1
    vextracti32x4 xmm0, zmm6, 3
    vxorps  xmm2, xmm2, xmm0
    vmovq   xmm0, cs:qword_18017F560
    vmovdqa xmm1, xmm2
    vpsrldq xmm2, xmm2, 8
    vpclmulqdq xmm1, xmm1, xmm4, 10h
    vxorps  xmm1, xmm1, xmm2
    vmovdqa xmm2, xmm1
    vpsrldq xmm1, xmm1, 4
    vandps  xmm2, xmm2, xmm3
    vpclmulqdq xmm2, xmm2, xmm0, 0
    vxorps  xmm2, xmm2, xmm1
    vmovdqa xmm1, xmm2
    vandps  xmm1, xmm1, xmm3
    vpclmulqdq xmm1, xmm1, cs:xmmword_18017F5C0, 10h
    vandps  xmm1, xmm1, xmm3
    vpclmulqdq xmm1, xmm1, cs:xmmword_18017F5C0, 0
    vxorps  xmm1, xmm1, xmm2
    vpextrd rax, xmm1, 1
    vzeroupper
  }
  return result;
}
