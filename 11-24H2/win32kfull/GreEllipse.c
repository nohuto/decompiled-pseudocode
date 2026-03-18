/*
 * XREFs of GreEllipse @ 0x1400E65B0
 * Callers:
 *     NtGdiEllipse @ 0x1400E6590 (NtGdiEllipse.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x14023A12C (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1400D2E5C (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1400E73A8 (--0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1400E7A6C (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GreEllipse(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  LINEATTRS *v10; // rsi
  int v11; // ebx
  unsigned int v12; // edi
  unsigned int v14; // esi
  __int64 v15; // rbx
  struct _RECTFX v16; // [rsp+38h] [rbp-C8h] BYREF
  struct _RECTL v17; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v18[20]; // [rsp+C0h] [rbp-40h] BYREF
  int *v19[10]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v20[64]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v21[560]; // [rsp+1A0h] [rbp+A0h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)&v16.xRight, a1);
  if ( !*(_QWORD *)&v16.xRight || (*(_DWORD *)(*(_QWORD *)&v16.xRight + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v16.xRight);
    return 0LL;
  }
  v17.bottom = a5;
  v17.left = a2;
  v17.top = a3;
  v17.right = a4;
  DC::QuickInitXform(*(_QWORD *)&v16.xRight, &v16, 516LL);
  v8 = *(_QWORD *)&v16.xRight;
  v9 = *(_QWORD *)(*(_QWORD *)&v16.xRight + 976LL);
  v10 = (LINEATTRS *)(*(_QWORD *)&v16.xRight + 208LL);
  v11 = *(_DWORD *)(v9 + 152);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(*(_QWORD *)&v16.xRight, *(_QWORD *)(v9 + 160));
    v8 = *(_QWORD *)&v16.xRight;
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)(v8 + 976) + 168LL));
  v12 = 1;
  EBOX::EBOX((EBOX *)v18, (struct XDCOBJ *)&v16.xRight, &v17, v10, 1);
  if ( v18[0] )
    goto LABEL_8;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v19, (DC **)&v16.xRight, 1);
  if ( !v19[1] )
  {
    EngSetLastError(8u);
    goto LABEL_20;
  }
  if ( !(unsigned int)bEllipse((struct EPATHOBJ *)v19, (struct EBOX *)v18) )
  {
LABEL_20:
    EPATHOBJ::vUnlock((EPATHOBJ *)v19);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v21);
    CAutoTGO::vUnguard((CAutoTGO *)v20);
    v12 = 0;
LABEL_8:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v16.xRight);
    return v12;
  }
  if ( (*(_BYTE *)(*(_QWORD *)&v16.xLeft + 32LL) & 1) != 0 && HIDWORD(v19[0]) == 5 )
    LODWORD(v19[0]) |= 2u;
  if ( (*(_DWORD *)(*(_QWORD *)&v16.xRight + 248LL) & 1) != 0 )
  {
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v19);
    goto LABEL_8;
  }
  if ( v18[1] )
  {
    v15 = *(_QWORD *)(*(_QWORD *)&v16.xRight + 136LL);
    *(_QWORD *)(*(_QWORD *)&v16.xRight + 136LL) = *(_QWORD *)(*(_QWORD *)&v16.xRight + 144LL);
    *(_DWORD *)(*(_QWORD *)&v16.xRight + 316LL) |= 1u;
    v14 = EPATHOBJ_bStrokeAndOrFill(v19, (struct _POINTL **)&v16.xRight, 0LL, 0LL, 2u);
    *(_QWORD *)(*(_QWORD *)&v16.xRight + 136LL) = v15;
    *(_DWORD *)(*(_QWORD *)&v16.xRight + 316LL) |= 1u;
  }
  else
  {
    v14 = EPATHOBJ_bStrokeAndOrFill(v19, (struct _POINTL **)&v16.xRight, v10, (XFORMOBJ *)&v16, 3u);
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)v19);
  PATH_CORE::~PATH_CORE((PATH_CORE *)v21);
  CAutoTGO::vUnguard((CAutoTGO *)v20);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v16.xRight);
  return v14;
}
