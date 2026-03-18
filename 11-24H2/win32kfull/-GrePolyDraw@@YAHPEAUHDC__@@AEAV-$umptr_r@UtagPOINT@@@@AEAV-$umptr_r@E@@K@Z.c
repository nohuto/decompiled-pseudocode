/*
 * XREFs of ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140176F30
 * Callers:
 *     NtGdiPolyDraw @ 0x140176E00 (NtGdiPolyDraw.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1400D2E5C (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1401775DC (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ??$read@U_POINTL@@@?$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z @ 0x1401776EC (--$read@U_POINTL@@@-$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyDraw(HDC a1, __int64 a2, __int64 a3, int a4)
{
  struct _POINTL *v7; // rcx
  unsigned int v8; // edi
  struct _POINTL v9; // rdx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  char v16; // al
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rax
  struct _POINTL *v29; // r8
  __int64 v30; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  ULONG v34; // ecx
  unsigned int v35; // ebx
  char v36; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v37[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  struct _RECTFX v39; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL *v40[14]; // [rsp+50h] [rbp-B0h] BYREF
  int *v41; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-38h]
  _BYTE v43[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v44[560]; // [rsp+150h] [rbp+50h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v40, a1);
  v7 = v40[0];
  v8 = 0;
  if ( !v40[0] || (v40[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v40);
    return 0LL;
  }
  v9 = v40[0][122];
  v10 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v40[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
    v7 = v40[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*(_QWORD *)&v7[122] + 168LL));
    v7 = v40[0];
  }
  if ( !a4 )
  {
    v35 = 1;
LABEL_89:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v40);
    return v35;
  }
  v11 = *(_DWORD *)(*(_QWORD *)&v7[122] + 208LL);
  DC::QuickInitXform(v7, &v38, 516LL);
  *(_QWORD *)&v39.xLeft = v38;
  LOBYTE(v39.xRight) = v11 != 2;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v41, (DC **)v40, 1);
  if ( !v42 )
  {
    v34 = 8;
LABEL_86:
    EngSetLastError(v34);
LABEL_87:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&v41);
LABEL_88:
    v35 = 0;
    goto LABEL_89;
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)(a3 + 16);
    if ( *(_QWORD *)(a3 + 8) == v12 )
      break;
    v37[0] = 0;
    v36 = 0;
    if ( !(unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, v37, 1LL, 0LL) )
      goto LABEL_87;
    v13 = *(_QWORD *)(a3 + 16);
    if ( v13 <= 0x7FFFFFFFFFFFFFFFLL
      && (v14 = v13 + 1, v13 >> 63 == v13 + 1 > 0x7FFFFFFFFFFFFFFFLL)
      && v14 >= 0
      && (unsigned __int64)v14 <= *(_QWORD *)(a3 + 8) )
    {
      *(_QWORD *)(a3 + 16) = v14;
    }
    else
    {
      *(_BYTE *)(a3 + 24) = 1;
    }
    switch ( v37[0] )
    {
      case 2:
        while ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16)
             && (unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v36, 1LL, 0LL)
             && v36 == 2 )
        {
          v22 = *(_QWORD *)(a3 + 16);
          if ( v22 <= 0x7FFFFFFFFFFFFFFFLL
            && (v23 = v22 + 1, v22 >> 63 == v22 + 1 > 0x7FFFFFFFFFFFFFFFLL)
            && v23 >= 0
            && (unsigned __int64)v23 <= *(_QWORD *)(a3 + 8) )
          {
            *(_QWORD *)(a3 + 16) = v23;
          }
          else
          {
            *(_BYTE *)(a3 + 24) = 1;
          }
        }
        if ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16)
          && (unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v36, 1LL, 0LL)
          && (v36 & 0xFE) == 2 )
        {
          v32 = *(_QWORD *)(a3 + 16);
          if ( v32 <= 0x7FFFFFFFFFFFFFFFLL
            && (v33 = v32 + 1, v32 >> 63 == v32 + 1 > 0x7FFFFFFFFFFFFFFFLL)
            && v33 >= 0
            && (unsigned __int64)v33 <= *(_QWORD *)(a3 + 8) )
          {
            *(_QWORD *)(a3 + 16) = v33;
          }
          else
          {
            *(_BYTE *)(a3 + 24) = 1;
          }
        }
        if ( *(_BYTE *)(a3 + 25) || *(_BYTE *)(a3 + 24) )
          goto LABEL_87;
LABEL_41:
        v15 = *(_QWORD *)(a3 + 16) - v12;
        v16 = EPATHOBJ::bPolyLineTo(&v41, &v39, a2, (unsigned int)v15);
        goto LABEL_42;
      case 3:
        goto LABEL_41;
      case 4:
        while ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16)
             && (unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v36, 1LL, 0LL)
             && v36 == 4 )
        {
          v17 = *(_QWORD *)(a3 + 16);
          if ( v17 <= 0x7FFFFFFFFFFFFFFFLL
            && (v18 = v17 + 1, v17 >> 63 == v17 + 1 > 0x7FFFFFFFFFFFFFFFLL)
            && v18 >= 0
            && (unsigned __int64)v18 <= *(_QWORD *)(a3 + 8) )
          {
            *(_QWORD *)(a3 + 16) = v18;
          }
          else
          {
            *(_BYTE *)(a3 + 24) = 1;
          }
        }
        if ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16)
          && (unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v36, 1LL, 0LL)
          && (v36 & 0xFE) == 4 )
        {
          v26 = *(_QWORD *)(a3 + 16);
          if ( v26 <= 0x7FFFFFFFFFFFFFFFLL
            && (v27 = v26 + 1, v26 >> 63 == v26 + 1 > 0x7FFFFFFFFFFFFFFFLL)
            && v27 >= 0
            && (unsigned __int64)v27 <= *(_QWORD *)(a3 + 8) )
          {
            *(_QWORD *)(a3 + 16) = v27;
          }
          else
          {
            *(_BYTE *)(a3 + 24) = 1;
          }
        }
        if ( *(_BYTE *)(a3 + 25) || *(_BYTE *)(a3 + 24) )
          goto LABEL_87;
        v15 = *(_QWORD *)(a3 + 16) - v12;
        if ( v15 != 3 * (v15 / 3) )
        {
LABEL_97:
          v34 = 87;
          goto LABEL_86;
        }
        v16 = EPATHOBJ::bPolyBezierTo(&v41, &v39, a2, (unsigned int)v15);
LABEL_42:
        if ( !v16 )
          goto LABEL_87;
        if ( (v19 = *(_QWORD *)(a2 + 16), v19 > 0x7FFFFFFFFFFFFFFFLL)
          || (v20 = v19 + v15, v21 = v19 >> 63, (_DWORD)v21 == v15 >> 63)
          && (_DWORD)v21 != (unsigned __int64)v20 > 0x7FFFFFFFFFFFFFFFLL
          || v20 < 0
          || (unsigned __int64)v20 > *(_QWORD *)(a2 + 8) )
        {
          *(_BYTE *)(a2 + 24) = 1;
        }
        else
        {
          *(_QWORD *)(a2 + 16) = v20;
        }
        if ( !(unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v36, 1LL, -1LL) )
          goto LABEL_87;
        if ( (v36 & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&v41);
        break;
      case 6:
        if ( !(unsigned __int8)EPATHOBJ::bMoveTo(&v41, &v39, a2) )
          goto LABEL_87;
        v24 = *(_QWORD *)(a2 + 16);
        if ( v24 <= 0x7FFFFFFFFFFFFFFFLL
          && (v25 = v24 + 1, v24 >> 63 == v24 + 1 > 0x7FFFFFFFFFFFFFFFLL)
          && v25 >= 0
          && (unsigned __int64)v25 <= *(_QWORD *)(a2 + 8) )
        {
          *(_QWORD *)(a2 + 16) = v25;
        }
        else
        {
          *(_BYTE *)(a2 + 24) = 1;
        }
        break;
      default:
        goto LABEL_97;
    }
  }
  v38 = 0LL;
  if ( !(unsigned __int8)umptr_r<tagPOINT>::read<_POINTL>(a2, &v38) )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)&v41);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v44);
    CAutoTGO::vUnguard((CAutoTGO *)v43);
    goto LABEL_88;
  }
  if ( (*(_DWORD *)(v42 + 72) & 1) != 0 )
    v28 = (__int64 *)(v42 + 64);
  else
    v28 = (__int64 *)(*(_QWORD *)(v42 + 40) + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v42 + 40) + 20LL) - 1) + 3LL));
  v29 = v40[0];
  v30 = *v28;
  *(_DWORD *)(*(_QWORD *)&v40[0][122] + 152LL) &= 0xFFFFFCFF;
  *(_QWORD *)(*(_QWORD *)&v29[122] + 216LL) = v38;
  *(_QWORD *)(*(_QWORD *)&v29[122] + 8LL) = v30;
  if ( (v40[0][31].x & 1) != 0
    || (unsigned int)EPATHOBJ_bStrokeAndOrFill(&v41, v40, (LINEATTRS *)&v40[0][26], (XFORMOBJ *)&v39, 1u) )
  {
    v8 = 1;
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)&v41);
  PATH_CORE::~PATH_CORE((PATH_CORE *)v44);
  CAutoTGO::vUnguard((CAutoTGO *)v43);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v40);
  return v8;
}
