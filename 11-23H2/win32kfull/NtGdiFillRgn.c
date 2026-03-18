/*
 * XREFs of NtGdiFillRgn @ 0x1C02A8780
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0220534 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00BB318 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00BB868 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00C3A60 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00C3A9C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00D5DB4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00D5E54 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00FF350 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011C44C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C0159EC6 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265BE8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngPaint @ 0x1C028E0F0 (EngPaint.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0299D74 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C02A70C0 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C02A81DC (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C02AAFF8 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v5; // esi
  DC *v6; // rcx
  REGION *v7; // r13
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v11; // r12d
  REGION *v12; // rcx
  DC *v13; // rax
  __int64 v14; // r15
  struct REGION *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdi
  struct ECLIPOBJ *v21; // rdx
  struct BRUSH *v22; // r14
  MIX mix; // eax
  DC *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  BOOL v29; // [rsp+40h] [rbp-C0h]
  DC *v30[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v31[32]; // [rsp+58h] [rbp-A8h] BYREF
  REGION *v32[7]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v33[2]; // [rsp+B0h] [rbp-50h] BYREF
  __m128i rclBounds; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v35[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char v37; // [rsp+E8h] [rbp-18h]
  _QWORD v38[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v39[80]; // [rsp+100h] [rbp+0h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v41; // [rsp+16Ch] [rbp+6Ch]
  __int64 v42; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h]
  char *v44; // [rsp+188h] [rbp+88h]
  __int64 v45; // [rsp+1A8h] [rbp+A8h]
  __int128 v46; // [rsp+1B0h] [rbp+B0h]
  int v47; // [rsp+1C8h] [rbp+C8h]
  struct BRUSH *v48[10]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v49; // [rsp+230h] [rbp+130h] BYREF
  CLIPOBJ pco; // [rsp+240h] [rbp+140h] BYREF
  __int64 v51; // [rsp+278h] [rbp+178h]
  __int64 v52; // [rsp+290h] [rbp+190h]
  int v53; // [rsp+298h] [rbp+198h]
  int v54; // [rsp+2C0h] [rbp+1C0h]
  __int64 v55; // [rsp+2D0h] [rbp+1D0h]

  v29 = 0;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v30, a1);
  v6 = v30[0];
  v7 = 0LL;
  if ( v30[0] )
  {
    if ( *((_WORD *)v30[0] + 6) != 1 )
    {
      v8 = *((_QWORD *)v30[0] + 6);
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 40);
      else
        v9 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(21, v9, *((unsigned __int16 *)v30[0] + 6), 1LL, 0LL);
      EngSetLastError(0x57u);
      goto LABEL_7;
    }
    if ( (*((_DWORD *)v30[0] + 9) & 0x10000) != 0 )
      goto LABEL_50;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v33, (struct XDCOBJ *)v30, -2147483132);
    v11 = *(_DWORD *)(*((_QWORD *)v30[0] + 122) + 340LL) & 0x802;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v32, a2, 0, 0);
    if ( !v32[0] )
    {
LABEL_47:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v32);
      if ( v29 )
      {
        v28 = UserReferenceDwmApiPort(v26, v25, v27);
        DwmSyncFlushAndWaitForBatch(v28);
      }
      v6 = v30[0];
LABEL_50:
      if ( v6 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v30);
      goto LABEL_52;
    }
    if ( v11 == 2050 )
    {
LABEL_16:
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v32) == 1 )
        goto LABEL_44;
      v49 = 0LL;
      v49 = *(struct _RECTL *)((char *)v32[0] + 56);
      if ( (*((_DWORD *)v30[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v30, (struct ERECTL *)&v49);
      v48[3] = (struct BRUSH *)v30;
      if ( !ERECTL::bEmpty((ERECTL *)&v49) )
        v29 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v48, &v49);
      if ( !*((_QWORD *)v30[0] + 62) )
      {
LABEL_44:
        v5 = 1;
      }
      else
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v38);
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v35, (struct XDCOBJ *)v30, 0);
        v12 = v32[0];
        v13 = v30[0];
        if ( !v32[0] )
          *((_DWORD *)v30[0] + 9) |= 0x10u;
        *((_QWORD *)v13 + 141) = v12;
        v14 = *((_QWORD *)v30[0] + 62);
        if ( (v37 & 1) != 0 && (unsigned int)DC::bTightenRao(v30[0]) )
        {
          ERECTL::bOffsetAdd((ERECTL *)&v49, (const struct _POINTL *)v30[0] + (*((_DWORD *)v30[0] + 10) & 1) + 127, 0);
          GreScaleValuesInternal(v30, &v49.left, 4u);
          v15 = XDCOBJ::prgnEffRao(v30);
          v51 = 0LL;
          v52 = 0LL;
          v53 = 0;
          v54 = 1;
          v55 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v15, (struct ERECTL *)&v49, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            v5 = 1;
          }
          else
          {
            v19 = *(_QWORD *)(v14 + 128);
            v20 = *((_QWORD *)v30[0] + 11);
            v41 = -1;
            v45 = 0LL;
            v46 = 0LL;
            pbo.pvRbrush = 0LL;
            pbo.flColorType = 0;
            v42 = 0LL;
            v43 = 0LL;
            v47 = 0;
            BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v48, a3);
            v22 = 0LL;
            if ( v48[0] )
              v22 = v48[0];
            if ( v22 )
            {
              if ( (*((_DWORD *)v30[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v22 + 10) & 0x100) == 0 )
              {
                rclBounds = (__m128i)pco.rclBounds;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v30, v21, &rclBounds);
              }
              bSyncBrushObj(v22);
              EBRUSHOBJ::vInitBrush(&pbo, v30[0], v22, v20, v19, v14, 1);
              v44 = (char *)v30[0] + 176;
              if ( (*((_DWORD *)v22 + 10) & 0x100) == 0 )
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v30[0] + 122) + 212LL),
                        *(_BYTE *)(*((_QWORD *)v30[0] + 122) + 213LL));
                ++*(_DWORD *)(v14 + 92);
                EngPaint((SURFOBJ *)(v14 + 24), &pco, &pbo, (POINTL *)v30[0] + 149, mix);
                v5 = 1;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v48);
            }
            BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v48);
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          }
        }
        else
        {
          v5 = XDCOBJ::bFullScreen((XDCOBJ *)v30);
        }
        v24 = v30[0];
        *((_DWORD *)v30[0] + 9) |= 0x10u;
        *((_QWORD *)v24 + 141) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v35, v16, v17, v18);
        if ( v38[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v38);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v39);
      }
      if ( v11 != 2050 )
      {
        REGION::vDeleteREGION(v32[0]);
        v32[0] = v7;
      }
      goto LABEL_47;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v35);
    if ( v36 )
    {
      if ( !v33[0] || !RGNOBJ::bCreate((RGNOBJ *)v32, (struct EPATHOBJ *)v35, (struct EXFORMOBJ *)v33) )
        goto LABEL_29;
      *(_QWORD *)&v49.left = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v49, (struct EPATHOBJ *)v35, 1u, 0LL);
      if ( *(_QWORD *)&v49.left )
      {
        v7 = v32[0];
        v32[0] = *(REGION **)&v49.left;
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v35);
        goto LABEL_16;
      }
    }
    EngSetLastError(8u);
LABEL_29:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v35);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v32);
LABEL_7:
    DCOBJ::~DCOBJ((DCOBJ *)v30);
    return 0LL;
  }
LABEL_52:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v31);
  return v5;
}
