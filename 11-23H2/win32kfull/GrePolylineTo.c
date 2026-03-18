/*
 * XREFs of GrePolylineTo @ 0x1C02AC120
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0159E14 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0159EFA (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C015A002 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0283F94 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028530C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 */

_BOOL8 __fastcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  POINTL v6; // rdx
  int v7; // ebx
  BOOL v8; // ebx
  struct _POINTFIX Current; // rax
  POINTL *v11; // r9
  __int64 v12; // r8
  POINTL *v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v15[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  PATHOBJ ppo; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v5 = v13[0];
  if ( v13[0] && (v13[0][4].y & 0x10000) == 0 )
  {
    v6 = v13[0][122];
    v7 = *(_DWORD *)(*(_QWORD *)&v6 + 152LL);
    if ( (v7 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v13[0], *(_QWORD *)(*(_QWORD *)&v6 + 160LL));
      v5 = v13[0];
    }
    if ( (v7 & 0x2000) != 0 )
      GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
    if ( a3 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v15, (struct XDCOBJ *)v13, 516);
      v8 = 1;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v13, 1);
      if ( v18 )
      {
        if ( (unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v15, a2, a3) )
        {
          Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v16);
          v11 = v13[0];
          v12 = a3 - 1;
          *(_DWORD *)(*(_QWORD *)&v13[0][122] + 152LL) &= 0xFFFFFCFF;
          *(_DWORD *)(*(_QWORD *)&v11[122] + 216LL) = a2[v12].x;
          *(_DWORD *)(*(_QWORD *)&v11[122] + 220LL) = a2[v12].y;
          *(_DWORD *)(*(_QWORD *)&v11[122] + 8LL) = *(_DWORD *)Current.x;
          *(_DWORD *)(*(_QWORD *)&v11[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
          if ( (v13[0][31].x & 1) == 0 )
            v8 = EPATHOBJ::bStrokeAndOrFill(&ppo, v13, (LINEATTRS *)&v13[0][26], v15, 1u) != 0;
          XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
          if ( v13[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v13);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
          return v8;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
      v8 = 0;
    }
    else
    {
      v8 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v13);
    return v8;
  }
  EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return 0LL;
}
