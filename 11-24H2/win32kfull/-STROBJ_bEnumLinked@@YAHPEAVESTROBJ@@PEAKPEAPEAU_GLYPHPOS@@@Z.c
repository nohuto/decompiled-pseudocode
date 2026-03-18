/*
 * XREFs of ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400ABAFC
 * Callers:
 *     EngTextOut @ 0x140058790 (EngTextOut.c)
 *     STROBJ_bEnum @ 0x1400ABA30 (STROBJ_bEnum.c)
 * Callees:
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400ABC68 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1400D7038 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall STROBJ_bEnumLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  int v3; // eax
  unsigned int v4; // edi
  __m128i si128; // xmm2
  __m128i v9; // xmm1
  int v10; // ecx
  RFONTOBJ *v11; // rcx
  _DWORD *v14; // r9
  __int64 v15; // rax
  int v16; // ecx
  __m128i v17; // xmm1
  __m128i v18; // xmm0

  v3 = *((_DWORD *)a1 + 12);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 == *(_DWORD *)a1 )
      goto LABEL_14;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v9 = _mm_add_epi64(si128, _mm_loadu_si128((const __m128i *)((char *)a1 + 216)));
    *(__m128i *)((char *)a1 + 216) = v9;
    v10 = *((_DWORD *)a1 + 59);
    while ( **((_DWORD **)a1 + 27) != v10 )
    {
      v9 = _mm_add_epi64(si128, v9);
      *(__m128i *)((char *)a1 + 216) = v9;
    }
  }
  else
  {
    v14 = (_DWORD *)*((_QWORD *)a1 + 26);
    v15 = *((_QWORD *)a1 + 8);
    *((_QWORD *)a1 + 27) = v14;
    *((_QWORD *)a1 + 28) = v15;
    v16 = *((_DWORD *)a1 + 59);
    if ( *v14 != v16 )
    {
      v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + 216));
      do
      {
        v18 = _mm_add_epi64(_mm_load_si128((const __m128i *)&_xmm), v17);
        *(__m128i *)((char *)a1 + 216) = v18;
        v17 = v18;
      }
      while ( **((_DWORD **)a1 + 27) != v16 );
    }
  }
  v11 = (RFONTOBJ *)*((_QWORD *)a1 + 7);
  if ( v11 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 84LL) & 1) != 0
       ? (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(
                         v11,
                         *((struct _GLYPHPOS **)a1 + 28),
                         *(_DWORD *)(*(_QWORD *)v11 + 88LL)) != 0
       : RFONTOBJ::cGetGlyphDataCache(v11, 1u, *((struct _GLYPHPOS **)a1 + 28)) )
    {
      ++*((_DWORD *)a1 + 12);
      *a2 = 1;
      *a3 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 28);
      LOBYTE(v4) = *((_DWORD *)a1 + 12) < *(_DWORD *)a1;
      return v4;
    }
  }
LABEL_14:
  *a2 = 0;
  return 0LL;
}
