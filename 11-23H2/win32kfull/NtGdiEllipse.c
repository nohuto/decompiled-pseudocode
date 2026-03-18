/*
 * XREFs of NtGdiEllipse @ 0x1C02ACBD0
 * Callers:
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01BBD00 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0159E14 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0283F94 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028530C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02C4938 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C02C5030 (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 */

__int64 __fastcall NtGdiEllipse(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  POINTL *v8; // rcx
  POINTL v9; // rdx
  LINEATTRS *v10; // rsi
  int v11; // ebx
  unsigned int v12; // edi
  unsigned int v14; // esi
  POINTL v15; // rbx
  POINTL *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v19; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v20[20]; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ ppo; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-28h]

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !v16[0] || (v16[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return 0LL;
  }
  else
  {
    v19.bottom = a5;
    v19.left = a2;
    v19.top = a3;
    v19.right = a4;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v16, 516);
    v8 = v16[0];
    v9 = v16[0][122];
    v10 = (LINEATTRS *)&v16[0][26];
    v11 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
    if ( (v11 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v16[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
      v8 = v16[0];
    }
    if ( (v11 & 0x2000) != 0 )
      GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[122] + 168LL));
    v12 = 1;
    EBOX::EBOX((EBOX *)v20, (struct DCOBJ *)v16, &v19, v10, 1);
    if ( v20[0] )
      goto LABEL_17;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v16, 1);
    if ( !v22 )
    {
      EngSetLastError(8u);
LABEL_10:
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
      v12 = 0;
LABEL_17:
      DCOBJ::~DCOBJ((DCOBJ *)v16);
      return v12;
    }
    if ( !(unsigned int)bEllipse((struct EPATHOBJ *)&ppo, (struct EBOX *)v20) )
      goto LABEL_10;
    if ( (*(_DWORD *)(v18[0] + 32LL) & 1) != 0 && ppo.cCurves == 5 )
      ppo.fl |= 2u;
    if ( (v16[0][31].x & 1) != 0 )
    {
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
      goto LABEL_17;
    }
    if ( v20[1] )
    {
      v15 = v16[0][17];
      v16[0][17] = v16[0][18];
      v16[0][39].y |= 1u;
      v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v16, 0LL, 0LL, 2u);
      v16[0][17] = v15;
      v16[0][39].y |= 1u;
    }
    else
    {
      v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v16, v10, (struct _XFORMOBJ *)v18, 3u);
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    if ( v16[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v16);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v17);
    return v14;
  }
}
