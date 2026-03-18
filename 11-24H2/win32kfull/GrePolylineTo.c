/*
 * XREFs of GrePolylineTo @ 0x1401D62E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolylineTo(HDC a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  struct _POINTL *v5; // rcx
  unsigned int v6; // edi
  struct _POINTL v7; // rdx
  int v8; // ebx
  int v9; // ebx
  unsigned int v10; // ebx
  __int64 *v12; // rax
  struct _POINTL *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTFX v17; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v19; // [rsp+60h] [rbp-A0h]
  struct _POINTL *v20[14]; // [rsp+70h] [rbp-90h] BYREF
  int *v21; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-18h]
  _BYTE v23[64]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v24[560]; // [rsp+170h] [rbp+70h] BYREF

  v4 = a3;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, a1);
  v5 = v20[0];
  v6 = 0;
  if ( !v20[0] || (v20[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
    return 0LL;
  }
  else
  {
    v7 = v20[0][122];
    v8 = *(_DWORD *)(*(_QWORD *)&v7 + 152LL);
    if ( (v8 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v20[0], *(_QWORD *)(*(_QWORD *)&v7 + 160LL));
      v5 = v20[0];
    }
    if ( (v8 & 0x2000) != 0 )
    {
      GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
      v5 = v20[0];
    }
    if ( !(_DWORD)v4 )
    {
      v10 = 1;
      goto LABEL_11;
    }
    v9 = *(_DWORD *)(*(_QWORD *)&v5[122] + 208LL);
    DC::QuickInitXform(v5, &v16, 516LL);
    *(_QWORD *)&v17.xLeft = v16;
    LOBYTE(v17.xRight) = v9 != 2;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v21, (DC **)v20, 1);
    if ( !v22 )
    {
      EngSetLastError(8u);
LABEL_10:
      EPATHOBJ::vUnlock((EPATHOBJ *)&v21);
      PATH_CORE::~PATH_CORE((PATH_CORE *)v24);
      CAutoTGO::vUnguard((CAutoTGO *)v23);
      v10 = 0;
LABEL_11:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
      return v10;
    }
    v18[0] = a2;
    v19 = 0;
    v18[1] = v4;
    v18[2] = 0LL;
    if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(&v21, &v17, v18, (unsigned int)v4) )
      goto LABEL_10;
    if ( (*(_DWORD *)(v22 + 72) & 1) != 0 )
      v12 = (__int64 *)(v22 + 64);
    else
      v12 = (__int64 *)(*(_QWORD *)(v22 + 40) + 8
                                              * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v22 + 40) + 20LL) - 1) + 3LL));
    v13 = v20[0];
    v14 = (unsigned int)(v4 - 1);
    v15 = *v12;
    *(_DWORD *)(*(_QWORD *)&v20[0][122] + 152LL) &= 0xFFFFFCFF;
    *(_DWORD *)(*(_QWORD *)&v13[122] + 216LL) = *(_DWORD *)(a2 + 8 * v14);
    *(_DWORD *)(*(_QWORD *)&v13[122] + 220LL) = *(_DWORD *)(a2 + 8 * v14 + 4);
    *(_QWORD *)(*(_QWORD *)&v13[122] + 8LL) = v15;
    if ( (v20[0][31].x & 1) != 0
      || (unsigned int)EPATHOBJ_bStrokeAndOrFill(&v21, v20, (LINEATTRS *)&v20[0][26], (XFORMOBJ *)&v17, 1u) )
    {
      v6 = 1;
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)&v21);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v24);
    CAutoTGO::vUnguard((CAutoTGO *)v23);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
    return v6;
  }
}
