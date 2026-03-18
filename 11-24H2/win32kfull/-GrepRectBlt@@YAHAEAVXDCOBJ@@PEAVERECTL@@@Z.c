/*
 * XREFs of ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400D0464
 * Callers:
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E69C0 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x140015998 (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001D0CC (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1400D2238 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DF75C (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14016E720 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepRectBlt(struct XDCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  __int128 v14; // xmm0
  struct SURFACE *v15; // rbx
  unsigned int v16; // ebx
  DC *v18[16]; // [rsp+48h] [rbp-C0h] BYREF
  struct SURFACE *v19[16]; // [rsp+C8h] [rbp-40h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v20[16]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v21[352]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v22[16]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v23; // [rsp+338h] [rbp+230h]
  __int64 v24; // [rsp+340h] [rbp+238h]
  __int64 v25; // [rsp+358h] [rbp+250h]
  __int64 v26; // [rsp+368h] [rbp+260h]
  __int64 v27; // [rsp+378h] [rbp+270h]
  __int128 v28; // [rsp+3A8h] [rbp+2A0h]
  __int64 v29; // [rsp+3E0h] [rbp+2D8h]
  int v30; // [rsp+3E8h] [rbp+2E0h]
  int v31; // [rsp+3ECh] [rbp+2E4h]

  v2 = *(_QWORD *)a1;
  v26 = 0LL;
  v31 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 976) + 212LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v21);
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v21, a1);
  if ( (unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    v16 = 1;
    goto LABEL_16;
  }
  if ( !v7 )
    goto LABEL_19;
  v8 = *(_QWORD *)a1;
  v25 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
  v23 = *(_QWORD *)(v25 + 128);
  v24 = *(_QWORD *)(v8 + 88);
  if ( (v6 & 0xE8) == 0 )
  {
    v27 = 0LL;
    goto LABEL_12;
  }
  v27 = v8 + 1200;
  v9 = *(_QWORD *)(v8 + 976);
  if ( (*(_DWORD *)(v9 + 152) & 0x1000) != 0 )
    GreDCSelectBrush(v8, *(_QWORD *)(v9 + 160));
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v11 = *(_DWORD *)(v10 + 152);
  if ( (v11 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)a1 + 316LL) & 1) != 0 )
  {
    *(_DWORD *)(v10 + 152) = v11 & 0xFFFFFFFE;
    *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~1u;
    EBRUSHOBJ::vInitBrush(v27, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v24, v23, v25, 1);
  }
  if ( (*(_DWORD *)(v27 + 120) & 0x100) != 0 )
  {
LABEL_19:
    v16 = 0;
    goto LABEL_16;
  }
  v8 = *(_QWORD *)a1;
  v29 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
  if ( (*(_DWORD *)(v27 + 120) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v8 + 976) + 213LL) == 1 )
  {
    v12 = 43520;
    goto LABEL_13;
  }
LABEL_12:
  v12 = (_DWORD)v5 << 8;
LABEL_13:
  v13 = v12 | v5;
  if ( (*(_DWORD *)(v8 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulateTight(a1, a2);
  v14 = *(_OWORD *)a2;
  v30 = v13;
  v28 = v14;
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v20, a1);
  v15 = XDCOBJ::pSurfaceEff(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v19, v20);
  v19[14] = v15;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, (struct Gre::Base::SESSION_GLOBALS **)a1);
  v18[14] = 0LL;
  v16 = BLTRECORD::bBitBlt((BLTRECORD *)v22, v18, v19, v6);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v19);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v20);
LABEL_16:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v21);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v22);
  return v16;
}
