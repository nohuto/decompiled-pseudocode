/*
 * XREFs of NtGdiRoundRect @ 0x1400E62B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1400D2E5C (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiRectangle @ 0x1400E6870 (NtGdiRectangle.c)
 *     ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1400E73A8 (--0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1400E8608 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiRoundRect(HDC a1, LONG a2, LONG a3, LONG a4, int a5, int a6, int a7)
{
  struct _POINTL *v10; // rcx
  unsigned int v11; // edi
  struct _POINTL v13; // rdx
  int v14; // ebx
  unsigned int v15; // esi
  struct _POINTL v16; // rbx
  struct _RECTFX v17; // [rsp+30h] [rbp-D0h] BYREF
  struct _POINTL *v18[14]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RECTL v19; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v20[20]; // [rsp+C0h] [rbp-40h] BYREF
  int *v21[10]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v22[64]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v23[560]; // [rsp+1A0h] [rbp+A0h] BYREF

  if ( !a6 || !a7 )
    return NtGdiRectangle(a1, a5);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, a1);
  v10 = v18[0];
  if ( !v18[0] || (v18[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_5:
    v11 = 0;
LABEL_6:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
    return v11;
  }
  v13 = v18[0][122];
  v14 = *(_DWORD *)(*(_QWORD *)&v13 + 152LL);
  if ( (v14 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v18[0], *(_QWORD *)(*(_QWORD *)&v13 + 160LL));
    v10 = v18[0];
  }
  if ( (v14 & 0x2000) != 0 )
  {
    GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[122] + 168LL));
    v10 = v18[0];
  }
  v19.bottom = a5;
  v19.left = a2;
  v19.top = a3;
  v19.right = a4;
  DC::QuickInitXform(v10, &v17, 516LL);
  v11 = 1;
  EBOX::EBOX((EBOX *)v20, (struct XDCOBJ *)v18, &v19, (struct _LINEATTRS *)&v18[0][26], 1);
  if ( v20[0] )
    goto LABEL_6;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v21, (DC **)v18, 1);
  if ( !v21[1] )
  {
    EngSetLastError(8u);
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v21);
    goto LABEL_5;
  }
  if ( !(unsigned int)bRoundRect((struct EPATHOBJ *)v21, (struct EBOX *)v20, a6, a7) )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)v21);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v23);
    CAutoTGO::vUnguard((CAutoTGO *)v22);
    goto LABEL_5;
  }
  if ( (v18[0][31].x & 1) != 0 )
  {
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v21);
    goto LABEL_6;
  }
  if ( v20[1] )
  {
    v16 = v18[0][17];
    v18[0][17] = v18[0][18];
    v18[0][39].y |= 1u;
    v15 = EPATHOBJ_bStrokeAndOrFill(v21, v18, 0LL, 0LL, 2u);
    v18[0][17] = v16;
    v18[0][39].y |= 1u;
  }
  else
  {
    v15 = EPATHOBJ_bStrokeAndOrFill(v21, v18, (LINEATTRS *)&v18[0][26], (XFORMOBJ *)&v17, 3u);
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)v21);
  PATH_CORE::~PATH_CORE((PATH_CORE *)v23);
  CAutoTGO::vUnguard((CAutoTGO *)v22);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
  return v15;
}
