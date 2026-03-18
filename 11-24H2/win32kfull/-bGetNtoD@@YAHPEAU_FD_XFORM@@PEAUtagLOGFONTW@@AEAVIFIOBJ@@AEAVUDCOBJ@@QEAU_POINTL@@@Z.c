/*
 * XREFs of ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z @ 0x1400BCE0C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1400B1490 (--0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400BB830 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 * Callees:
 *     ?vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@@Z @ 0x1400BD124 (-vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct UDCOBJ *a4,
        struct _POINTL *const a5)
{
  unsigned int v5; // esi
  int v9; // ecx
  __int64 v10; // r8
  __m128 v11; // xmm0
  unsigned __int64 v12; // rax
  float v14; // xmm0_4
  __int16 v15; // r14
  bool v16; // r12
  bool v17; // cf
  bool v18; // zf
  float v19; // xmm0_4
  __int16 v20; // r12
  __int64 lfOrientation; // rcx
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  __int64 y; // rax
  __int64 x; // rax
  float *v29; // [rsp+20h] [rbp-61h] BYREF
  __m128 *v30; // [rsp+28h] [rbp-59h] BYREF
  __m128 v31; // [rsp+30h] [rbp-51h] BYREF
  int v32; // [rsp+50h] [rbp-31h]
  _OWORD v33[2]; // [rsp+58h] [rbp-29h] BYREF
  int v34; // [rsp+78h] [rbp-9h]

  v34 = 0;
  v32 = 0;
  v5 = 0;
  memset(v33, 0, sizeof(v33));
  memset(&v31, 0, 32);
  if ( a5->x )
  {
    v9 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v9 & 0x3000010) == 0 )
    {
      if ( (v9 & 0x200000) == 0 )
        goto LABEL_17;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x802) == 0x802 )
      {
        v24 = (int)lNormAngle((unsigned int)a2->lfOrientation) / 900;
      }
      else
      {
        DC::QuickInitXform(*(_QWORD *)a4, &v29, 516LL);
        v14 = v29[1];
        v15 = (*v29 > 0.0) - (*v29 < 0.0);
        v16 = v14 > 0.0;
        v17 = v14 > 0.0;
        v18 = v14 == 0.0;
        v19 = v29[2];
        v20 = v16 - (!v17 && !v18);
        lfOrientation = (unsigned int)a2->lfOrientation;
        LOBYTE(v5) = v19 > 0.0;
        v22 = (__PAIR64__(v5, LODWORD(v19)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
        {
          v22 = -v22;
          v23 = 3600 - lNormAngle(lfOrientation);
        }
        else
        {
          v23 = lNormAngle(lfOrientation);
        }
        v24 = (int)lNormAngle((v20 & 0x384) + (v22 & 0xA8C) + (v15 & 0x708u) + v23) / 900;
      }
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( !v25 )
        {
          x = a5->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          LODWORD(a1->eYX) = dword_1403624D8[x];
          LODWORD(a1->eXY) = dword_1403624D8[a5->y];
          return 1LL;
        }
        v26 = v25 - 1;
        if ( v26 )
        {
          if ( v26 == 1 )
          {
            y = a5->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            LODWORD(a1->eXY) = dword_140362500[y];
            LODWORD(a1->eYX) = dword_140362500[a5->x];
          }
          return 1LL;
        }
        v12 = a5->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_1403624D8[v12];
        LODWORD(v12) = dword_140362500[a5->y];
      }
      else
      {
LABEL_17:
        v12 = a5->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_140362500[v12];
        LODWORD(v12) = dword_1403624D8[a5->y];
      }
LABEL_6:
      LODWORD(a1->eYY) = v12;
      return 1LL;
    }
  }
  vGetNtoW((struct MATRIX *)v33, a2, a3, a4);
  v10 = *(_QWORD *)a4;
  v30 = &v31;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 976) + 340LL) & 0x802) == 0x802 )
  {
    v11 = (__m128)v33[0];
LABEL_5:
    v31 = v11;
    LODWORD(a1->eXX) = v11.m128_i32[0];
    *(_QWORD *)&a1->eXY = *(unsigned __int64 *)((char *)v31.m128_u64 + 4);
    v12 = HIDWORD(v31.m128_u64[1]);
    goto LABEL_6;
  }
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v30, (const struct MATRIX *)v33, (const struct MATRIX *)(v10 + 320), 0) )
  {
    v11 = _mm_mul_ps(v31, (__m128)_xmm);
    goto LABEL_5;
  }
  return 0LL;
}
