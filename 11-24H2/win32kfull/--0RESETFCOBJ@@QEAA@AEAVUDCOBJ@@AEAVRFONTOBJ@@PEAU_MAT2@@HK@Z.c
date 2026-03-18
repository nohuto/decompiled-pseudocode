/*
 * XREFs of ??0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1400B1490
 * Callers:
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 * Callees:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400BC0A0 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z @ 0x1400BCE0C (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1400BD5E4 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1400C1D00 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z @ 0x1400C1D74 (-vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401F6558 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

RESETFCOBJ *__fastcall RESETFCOBJ::RESETFCOBJ(
        RESETFCOBJ *this,
        struct UDCOBJ *a2,
        struct RFONTOBJ *a3,
        struct _MAT2 *a4,
        int a5,
        unsigned int a6)
{
  int v6; // eax
  struct UDCOBJ *v9; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rbx
  bool v16; // zf
  struct LFONT *v17; // rdi
  int v19; // r14d
  _QWORD *HDEV; // rax
  __int64 v21; // rdx
  int v22; // r14d
  int v23; // r14d
  __int64 v24; // rcx
  float eM11; // xmm4_4
  float eM22; // xmm3_4
  float eM12; // xmm1_4
  float eM21; // xmm2_4
  __int64 v29; // rax
  __int64 v30; // rcx
  struct tagLOGFONTW *v31; // rdx
  int NtoD_Win31; // eax
  FLOATL eYX; // edx
  FLOATL eYY; // r8d
  const struct MATRIX *v35; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v36; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v37; // [rsp+50h] [rbp-B0h] BYREF
  struct LFONT *v38; // [rsp+58h] [rbp-A8h]
  const struct MATRIX *v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v40; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v41[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v42[8]; // [rsp+80h] [rbp-80h] BYREF
  struct _FD_XFORM v43; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v44[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-58h]
  int v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]

  v6 = 1;
  *((_QWORD *)this + 1) = a3;
  *(_DWORD *)this = 1;
  v9 = a2;
  if ( *(_DWORD *)&a4->eM11 != 0x10000
    || a4->eM22.value != 1
    || a4->eM22.fract
    || a4->eM12.value
    || a4->eM12.fract
    || a4->eM21.value
    || a4->eM21.fract )
  {
    v6 = 0;
  }
  *((_DWORD *)this + 1) = v6;
  v11 = *(_QWORD *)a2;
  LOBYTE(a2) = 10;
  v12 = HmgShareLock(*(_QWORD *)(*(_QWORD *)(v11 + 976) + 296LL), a2);
  v13 = v12 + 24;
  v14 = -v12;
  v15 = (_DWORD *)(v13 & -(__int64)(v14 != 0));
  v37 = v15;
  if ( !v15 )
  {
    v17 = 0LL;
    v38 = 0LL;
    goto LABEL_10;
  }
  v16 = (*(_BYTE *)((v13 & -(__int64)(v14 != 0)) + 4) & 1) == 0;
  v17 = (struct LFONT *)(v15 - 6);
  v38 = (struct LFONT *)(v15 - 6);
  if ( !v16 )
  {
    v19 = *v15;
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)(v15 - 6));
    v17 = 0LL;
    v38 = 0LL;
    HDEV = (_QWORD *)UserGetHDEV();
    if ( HDEV )
    {
      v22 = v19 - 4;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          if ( v23 != 1 )
          {
LABEL_26:
            v15 = (_DWORD *)(((unsigned __int64)v17 + 24) & -(__int64)(v17 != 0LL));
            v37 = v15;
            goto LABEL_10;
          }
          v24 = HDEV[181];
        }
        else
        {
          v24 = HDEV[180];
        }
      }
      else
      {
        v24 = HDEV[179];
      }
      if ( v24 )
      {
        LOBYTE(v21) = 10;
        v17 = (struct LFONT *)HmgShareLock(v24, v21);
        v38 = v17;
      }
      goto LABEL_26;
    }
  }
LABEL_10:
  if ( !v15 )
  {
    *(_DWORD *)this = 0;
    goto LABEL_14;
  }
  if ( (v15[65] || v15[66]) && a5 )
    *((_DWORD *)this + 1) = 0;
  if ( *((_DWORD *)this + 1) )
    goto LABEL_14;
  eM11 = (float)(int)a4->eM11;
  v39 = (const struct MATRIX *)v44;
  v46 = 32;
  *(float *)&v35 = eM11;
  v45 = 0LL;
  if ( eM11 != 0.0 )
  {
    LODWORD(v35) = LODWORD(eM11) & 0x807FFFFF | (LODWORD(eM11) - 0x8000000) & 0x7F800000;
    eM11 = *(float *)&v35;
  }
  eM22 = (float)(int)a4->eM22;
  *(float *)&v35 = eM22;
  if ( eM22 != 0.0 )
  {
    LODWORD(v35) = LODWORD(eM22) & 0x807FFFFF | (LODWORD(eM22) - 0x8000000) & 0x7F800000;
    eM22 = *(float *)&v35;
  }
  eM12 = (float)(int)a4->eM12;
  *(float *)&v35 = eM12;
  if ( eM12 != 0.0 )
  {
    LODWORD(v35) = LODWORD(eM12) & 0x807FFFFF | (LODWORD(eM12) - 0x8000000) & 0x7F800000;
    eM12 = *(float *)&v35;
  }
  eM21 = (float)(int)a4->eM21;
  *(float *)&v35 = eM21;
  if ( eM21 != 0.0 )
    LODWORD(eM21) = LODWORD(eM21) & 0x807FFFFF | (LODWORD(eM21) - 0x8000000) & 0x7F800000;
  v44[1] = LODWORD(eM12) ^ _xmm;
  v44[2] = LODWORD(eM21) ^ _xmm;
  *(float *)v44 = eM11;
  *(float *)&v44[3] = eM22;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v39);
  v47 = 0LL;
  v49 = 0LL;
  v35 = (const struct MATRIX *)&v47;
  v50 = 8;
  v40 = &v51;
  v51 = 0LL;
  v53 = 0LL;
  v54 = 8;
  v48 = 0LL;
  v52 = 0LL;
  v43 = 0LL;
  if ( a5 )
  {
    v29 = *(_QWORD *)a3;
    v36 = 0LL;
    v30 = *(_QWORD *)v9;
    v41[0] = *(_QWORD *)(*(_QWORD *)(v29 + 120) + 32LL);
    DC::QuickInitXform(v30, v42, 516LL);
    v31 = (struct tagLOGFONTW *)(v15 + 63);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 976LL) + 208LL) == 1 )
      NtoD_Win31 = bGetNtoD_Win31(&v43, v31, (struct IFIOBJ *)v41, v9, 1u, &v36, 0);
    else
      NtoD_Win31 = bGetNtoD(&v43, v31, (struct IFIOBJ *)v41, v9, &v36);
    if ( !NtoD_Win31 )
      goto LABEL_55;
    eYX = v43.eYX;
    if ( LODWORD(v43.eYX) )
    {
      LODWORD(eYX) = LODWORD(v43.eYX) ^ 0x80000000;
      LODWORD(v43.eYX) ^= 0x80000000;
    }
    eYY = v43.eYY;
    if ( LODWORD(v43.eYY) )
    {
      LODWORD(eYY) = LODWORD(v43.eYY) ^ 0x80000000;
      LODWORD(v43.eYY) ^= 0x80000000;
    }
    if ( (*(_DWORD *)(v41[0] + 48LL) & 0x1000000) != 0 )
    {
      v43.eXX = eYY;
      v43.eXY = eYX;
      if ( eYX != 0.0 )
        LODWORD(v43.eXY) = LODWORD(eYX) ^ 0x80000000;
    }
    EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v35);
    EXFORMOBJ::vSetElementsLToFx((EXFORMOBJ *)&v35, v43.eXX, v43.eXY, v43.eYX, v43.eYY);
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v35, 8u);
  }
  else
  {
    RFONTOBJ::vSetNotionalToDevice(a3, (struct EXFORMOBJ *)&v35);
  }
  if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v40, v35, v39, 8u) )
  {
LABEL_55:
    *(_DWORD *)this = 0;
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v37);
    return this;
  }
  EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v40, &v43);
  *(_DWORD *)this = RFONTOBJ::bSetNewFDX(a3, v9, &v43, a6);
LABEL_14:
  if ( v17 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v17);
  return this;
}
