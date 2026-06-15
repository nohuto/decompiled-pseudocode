/*
 * XREFs of __std_find_trivial_2 @ 0x1800A7470
 * Callers:
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1801308D8 (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x1801403F4 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall _std_find_trivial_2(const __m128i *a1, const __m128i *a2, __int16 a3)
{
  signed __int64 v4; // r9
  const __m128i *v6; // r10
  unsigned __int64 v13; // r9
  const __m128i *v14; // r10
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __int64 v17; // rax

  v4 = (char *)a2 - (char *)a1;
  if ( (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL) != 0 && (_isa_enabled & 0x20) != 0 )
  {
    _EAX = a3;
    v6 = (const __m128i *)((char *)a1 + (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL));
    __asm
    {
      vmovd   xmm2, eax
      vpunpcklwd xmm2, xmm2, xmm2
      vpshufd xmm2, xmm2, 0
      vinsertf128 ymm2, ymm2, xmm2, 1
    }
    while ( 1 )
    {
      __asm
      {
        vpcmpeqw ymm1, ymm2, ymmword ptr [rcx]
        vpmovmskb eax, ymm1
      }
      if ( _EAX )
        break;
      a1 += 2;
      if ( a1 == v6 )
      {
        v4 &= 0x1Fu;
        __asm { vzeroupper }
        goto LABEL_7;
      }
    }
    __asm
    {
      vzeroupper
      tzcnt   eax, eax
    }
    return (const __m128i *)((char *)a1 + _EAX);
  }
  else
  {
LABEL_7:
    v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v13 )
    {
      v14 = (const __m128i *)((char *)a1 + v13);
      v15 = _mm_cvtsi32_si128(a3);
      v16 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v15, v15), 0);
      while ( 1 )
      {
        LODWORD(v17) = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(a1), v16));
        if ( (_DWORD)v17 )
          break;
        if ( ++a1 == v14 )
          goto LABEL_11;
      }
      _BitScanForward((unsigned int *)&v17, v17);
      return (const __m128i *)((char *)a1 + v17);
    }
    else
    {
LABEL_11:
      while ( a1 != a2 )
      {
        if ( a1->m128i_i16[0] == a3 )
          break;
        a1 = (const __m128i *)((char *)a1 + 2);
      }
      return a1;
    }
  }
}
