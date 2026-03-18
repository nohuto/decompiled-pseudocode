/*
 * XREFs of ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02A7D44
 * Callers:
 *     NtGdiInvertRgn @ 0x1C02A94E0 (NtGdiInvertRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00BB318 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00BB868 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00C3A60 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00C3A9C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00FF350 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011C44C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265BE8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngPaint @ 0x1C028E0F0 (EngPaint.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C02A70C0 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 */

__int64 __fastcall NtGdiInvertRgnInternal(HDC a1, HRGN a2)
{
  DC *v3; // rcx
  REGION *v4; // rsi
  unsigned int v5; // ebx
  int v6; // edi
  DC *v7; // rcx
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // rbx
  struct REGION *v11; // rax
  struct ECLIPOBJ *v12; // rdx
  __int64 v13; // r9
  DC *v14; // r8
  DC *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-C0h] BYREF
  REGION *v18[7]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[2]; // [rsp+98h] [rbp-68h] BYREF
  __m128i rclBounds; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v21[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-38h]
  char v23; // [rsp+D8h] [rbp-28h]
  _QWORD v24[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v25[80]; // [rsp+F0h] [rbp-10h] BYREF
  int v26[4]; // [rsp+140h] [rbp+40h] BYREF
  CLIPOBJ pco; // [rsp+150h] [rbp+50h] BYREF
  __int64 v28; // [rsp+188h] [rbp+88h]
  __int64 v29; // [rsp+1A0h] [rbp+A0h]
  int v30; // [rsp+1A8h] [rbp+A8h]
  int v31; // [rsp+1D0h] [rbp+D0h]
  __int64 v32; // [rsp+1E0h] [rbp+E0h]

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v3 = v16[0];
  v4 = 0LL;
  v5 = 0;
  if ( !v16[0] )
    goto LABEL_35;
  if ( (*((_DWORD *)v16[0] + 9) & 0x10000) == 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v16, -2147483132);
    v6 = *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 340LL) & 0x802;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 1, 0);
    if ( !v18[0] )
    {
LABEL_32:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
      v3 = v16[0];
      goto LABEL_33;
    }
    if ( v6 == 2050 )
    {
LABEL_10:
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v18) == 1 )
        goto LABEL_29;
      v7 = v16[0];
      *(_OWORD *)v26 = *(_OWORD *)((char *)v18[0] + 56);
      if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v16, (struct ERECTL *)v26);
        v7 = v16[0];
      }
      if ( !*((_QWORD *)v7 + 62) )
      {
LABEL_29:
        v5 = 1;
      }
      else
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v24);
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v16, 0);
        v8 = v18[0];
        v9 = v16[0];
        if ( !v18[0] )
          *((_DWORD *)v16[0] + 9) |= 0x10u;
        *((_QWORD *)v9 + 141) = v8;
        v10 = *((_QWORD *)v16[0] + 62);
        if ( (v23 & 1) != 0 && (unsigned int)DC::bTightenRao(v16[0]) )
        {
          ERECTL::bOffsetAdd((ERECTL *)v26, (const struct _POINTL *)v16[0] + (*((_DWORD *)v16[0] + 10) & 1) + 127, 0);
          GreScaleValuesInternal(v16, v26, 4u);
          v11 = XDCOBJ::prgnEffRao(v16);
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0;
          v32 = 0LL;
          v31 = 1;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v11, (struct ERECTL *)v26, 0);
          if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v16, v12, &rclBounds);
            }
            ++*(_DWORD *)(v10 + 92);
            EngPaint((SURFOBJ *)(v10 + 24), &pco, 0LL, 0LL, 0x606u);
          }
          v14 = v16[0];
          v5 = 1;
        }
        else
        {
          v5 = XDCOBJ::bFullScreen((XDCOBJ *)v16);
        }
        *((_DWORD *)v14 + 9) |= 0x10u;
        *((_QWORD *)v14 + 141) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21, (__int64)v12, (__int64)v14, v13);
        if ( v24[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v24);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v25);
      }
      if ( v6 != 2050 )
      {
        REGION::vDeleteREGION(v18[0]);
        v18[0] = v4;
      }
      goto LABEL_32;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v21);
    if ( v22 )
    {
      if ( !v19[0] || !RGNOBJ::bCreate((RGNOBJ *)v18, (struct EPATHOBJ *)v21, (struct EXFORMOBJ *)v19) )
        goto LABEL_24;
      *(_QWORD *)v26 = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)v26, (struct EPATHOBJ *)v21, 1u, 0LL);
      if ( *(_QWORD *)v26 )
      {
        v4 = v18[0];
        v18[0] = *(REGION **)v26;
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v21);
        goto LABEL_10;
      }
    }
    EngSetLastError(8u);
LABEL_24:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v21);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return 0LL;
  }
LABEL_33:
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
LABEL_35:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v17);
  return v5;
}
