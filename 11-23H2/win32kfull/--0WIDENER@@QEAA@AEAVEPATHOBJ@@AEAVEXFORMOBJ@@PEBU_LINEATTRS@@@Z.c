/*
 * XREFs of ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F071C
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C015D356 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C0078740 (bFToL.c)
 *     Feature_178219323__private_IsEnabledDeviceUsage @ 0x1C0140350 (Feature_178219323__private_IsEnabledDeviceUsage.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C015D314 (-bValid@WIDENER@@QEBAHXZ.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C015D470 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F0630 (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C02F1068 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 */

WIDENER *__fastcall WIDENER::WIDENER(WIDENER *this, __m128i **a2, struct MATRIX **a3, const struct _LINEATTRS *a4)
{
  ULONG iEndCap; // ecx
  ULONG iJoin; // eax
  int v10; // edx
  unsigned int v11; // ecx
  FLOAT_LONG v12; // xmm6_4
  int v13; // eax
  float v14; // xmm1_4
  __m128i *v15; // rcx
  __m128i v16; // xmm1
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-48h] BYREF
  __int32 v20; // [rsp+24h] [rbp-44h]
  int v21; // [rsp+28h] [rbp-40h]
  __int32 v22; // [rsp+2Ch] [rbp-3Ch]
  int v23; // [rsp+70h] [rbp+8h] BYREF

  STYLER::STYLER(this, (struct EPATHOBJ *)a2, a4);
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 824));
  *((_DWORD *)this + 236) = 0;
  *((_DWORD *)this + 244) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 984));
  *((_DWORD *)this + 276) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 1136));
  *((_DWORD *)this + 314) = 0;
  if ( !WIDENER::bValid(this) )
    return this;
  iEndCap = a4->iEndCap;
  *((_DWORD *)this + 323) = iEndCap;
  iJoin = a4->iJoin;
  *((_DWORD *)this + 322) = iJoin;
  if ( iJoin || (v10 = 1, iEndCap > 1) )
    v10 = 0;
  v11 = *((_DWORD *)this + 10) | 0x10;
  if ( !v10 )
    v11 = *((_DWORD *)this + 10) & 0xFFFFFFEF;
  *((_DWORD *)this + 10) = v11;
  LODWORD(v12.e) = a4->elWidth;
  Feature_178219323__private_IsEnabledDeviceUsage();
  v23 = 0;
  bFToL(v12.e, &v23, 6u);
  *((FLOAT_LONG *)this + 325) = v12;
  *((float *)this + 325) = *((float *)this + 325) * 0.5;
  v13 = *((_DWORD *)this + 322);
  if ( v13 == 2 )
  {
    v14 = *((float *)this + 325) * a4->eMiterLimit;
    *((float *)this + 324) = v14;
    *((float *)this + 324) = v14 * *((float *)this + 324);
  }
  if ( a4->pstyle || *((_DWORD *)this + 323) == 1 || v13 == 2 )
  {
    if ( !EXFORMOBJ::bInverse((WIDENER *)((char *)this + 808), *a3) )
    {
      EngSetLastError(0x216u);
LABEL_16:
      *((_DWORD *)this + 314) = 1;
      goto LABEL_17;
    }
    v15 = a2[1];
    v19 = _mm_cvtsi128_si32(_mm_srli_si128(v15[3], 8)) - v15[3].m128i_i32[0];
    v16 = v15[3];
    v17 = v15[3].m128i_i64[0];
    v21 = -v19;
    v20 = _mm_srli_si128(v16, 8).m128i_i32[1] - HIDWORD(v17);
    v22 = v20;
    if ( !EXFORMOBJ::bXform((WIDENER *)((char *)this + 808), (struct _VECTORFX *)&v19, (struct _VECTORL *)&v19, 2uLL) )
      goto LABEL_16;
  }
LABEL_17:
  if ( WIDENER::bValid(this)
    && (!(unsigned int)WIDEPENOBJ::bPolygonizePen((WIDENER *)((char *)this + 824), (struct EXFORMOBJ *)a3, v23)
     || !WIDENER::bWiden(this)) )
  {
    *((_DWORD *)this + 314) = 1;
  }
  return this;
}
