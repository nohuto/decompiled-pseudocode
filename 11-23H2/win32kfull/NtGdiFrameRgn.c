/*
 * XREFs of NtGdiFrameRgn @ 0x1C02A8D40
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0220534 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B7130 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
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
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C015D356 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265BE8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngPaint @ 0x1C028E0F0 (EngPaint.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0299D74 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C02A70C0 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C02A81DC (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C02AAFF8 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F0AB0 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C02F2BB4 (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v8; // esi
  BOOL v9; // r12d
  int v10; // ebx
  int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // eax
  EPATHOBJ *v15; // rcx
  struct _RECTL v16; // xmm1
  __int64 v17; // r8
  __int64 v18; // rcx
  DC *v19; // rax
  DC *v20; // rax
  __int64 v21; // r15
  struct REGION *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  DC *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdi
  struct ECLIPOBJ *v29; // rdx
  struct BRUSH *v30; // r14
  DC *v31; // rax
  DC *v32; // rcx
  MIX mix; // eax
  DC *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  DC *v41[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v42[32]; // [rsp+60h] [rbp-A0h] BYREF
  _XFORMOBJ v43[2]; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+8Ch] [rbp-74h]
  struct _LINEATTRS v45; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[16]; // [rsp+E0h] [rbp-20h] BYREF
  __m128i rclBounds; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v48[8]; // [rsp+100h] [rbp+0h] BYREF
  BRUSHOBJ pbo; // [rsp+140h] [rbp+40h] BYREF
  int v50; // [rsp+15Ch] [rbp+5Ch]
  __int64 v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  char *v53; // [rsp+178h] [rbp+78h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  __int128 v55; // [rsp+1A0h] [rbp+A0h]
  int v56; // [rsp+1B8h] [rbp+B8h]
  _BYTE v57[32]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v58[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v59[64]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v60[8]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v61; // [rsp+248h] [rbp+148h]
  _BYTE v62[8]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v63; // [rsp+2C8h] [rbp+1C8h]
  struct _RECTL v64; // [rsp+340h] [rbp+240h] BYREF
  _OWORD v65[2]; // [rsp+350h] [rbp+250h] BYREF
  int v66; // [rsp+370h] [rbp+270h]
  CLIPOBJ pco; // [rsp+380h] [rbp+280h] BYREF
  __int64 v68; // [rsp+3B8h] [rbp+2B8h]
  __int64 v69; // [rsp+3D0h] [rbp+2D0h]
  int v70; // [rsp+3D8h] [rbp+2D8h]
  int v71; // [rsp+400h] [rbp+300h]
  __int64 v72; // [rsp+410h] [rbp+310h]

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v41, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v48, a2, 1, 0);
  v10 = abs32(a4);
  v11 = abs32(a5);
  if ( v41[0] )
  {
    if ( *((_WORD *)v41[0] + 6) != 1 )
    {
      v12 = *((_QWORD *)v41[0] + 6);
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 40);
      else
        v13 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(21, v13, *((unsigned __int16 *)v41[0] + 6), 2LL, 0LL);
      EngSetLastError(0x57u);
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v48);
      DCOBJ::~DCOBJ((DCOBJ *)v41);
      return 0LL;
    }
    if ( (*((_DWORD *)v41[0] + 9) & 0x10000) == 0 && v48[0] && v10 > 0 && v11 > 0 )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v48) == 1 )
      {
        v8 = 1;
        goto LABEL_57;
      }
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v60);
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v62);
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v41, -2147483132);
      if ( !v61
        || !v63
        || !RGNOBJ::bCreate((RGNOBJ *)v48, (struct EPATHOBJ *)v60, (struct EXFORMOBJ *)v46)
        || (v44 = 0,
            v66 = 0,
            *(_QWORD *)&v43[0].ulReserved = v65,
            memset(&v45, 0, sizeof(v45)),
            memset(v65, 0, sizeof(v65)),
            EPATHOBJ::vWidenSetupForFrameRgn(v15, (struct XDCOBJ *)v41, v10, v11, (struct EXFORMOBJ *)v43, &v45),
            !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v62, (struct EPATHOBJ *)v60, v43, &v45))
        || !EPATHOBJ::bWiden((EPATHOBJ *)v62, (struct EPATHOBJ *)v60, v43, &v45) )
      {
LABEL_55:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v62);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v60);
        if ( v9 )
        {
          v38 = UserReferenceDwmApiPort(v36, v35, v37);
          DwmSyncFlushAndWaitForBatch(v38);
        }
        goto LABEL_57;
      }
      v40 = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v40, (struct EPATHOBJ *)v62, 2u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v39);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v39);
      if ( !v40 || !v39 )
        goto LABEL_54;
      if ( (*(_DWORD *)(*((_QWORD *)v41[0] + 122) + 340LL) & 0x802) == 0x802 )
      {
        v8 = RGNOBJ::bMerge((RGNOBJ *)&v39, (struct RGNOBJ *)&v40, (struct RGNOBJ *)v48, 8u);
      }
      else
      {
        *(_QWORD *)&v64.left = 0LL;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v64, (struct EPATHOBJ *)v60, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v64);
        if ( *(_QWORD *)&v64.left )
          v8 = RGNOBJ::bMerge((RGNOBJ *)&v39, (struct RGNOBJ *)&v40, (struct RGNOBJ *)&v64, 8u) != 0;
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v64);
      }
      if ( !v8 )
        goto LABEL_54;
      v64 = 0LL;
      v16 = *(struct _RECTL *)(v39 + 56);
      v45.pstyle = (PFLOAT_LONG)v41;
      v64 = v16;
      if ( !ERECTL::bEmpty((ERECTL *)&v64) )
        v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v45, &v64);
      if ( (*((_DWORD *)v41[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v41, (struct ERECTL *)&v64);
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v41) || !*(_QWORD *)(v17 + 496) )
      {
LABEL_54:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v39);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
        goto LABEL_55;
      }
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v58);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v57, (struct XDCOBJ *)v41, 0);
      v18 = v39;
      v19 = v41[0];
      if ( !v39 )
        *((_DWORD *)v41[0] + 9) |= 0x10u;
      *((_QWORD *)v19 + 141) = v18;
      v20 = v41[0];
      v21 = *((_QWORD *)v41[0] + 62);
      if ( (v57[24] & 1) != 0 )
      {
        if ( (unsigned int)DC::bTightenRao(v41[0]) )
        {
          ERECTL::bOffsetAdd((ERECTL *)&v64, (const struct _POINTL *)v41[0] + (*((_DWORD *)v41[0] + 10) & 1) + 127, 0);
          GreScaleValuesInternal(v41, &v64.left, 4u);
          v22 = XDCOBJ::prgnEffRao(v41);
          v68 = 0LL;
          v69 = 0LL;
          v70 = 0;
          v71 = 1;
          v72 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v22, (struct ERECTL *)&v64, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            v26 = v41[0];
            *((_DWORD *)v41[0] + 9) |= 0x10u;
            *((_QWORD *)v26 + 141) = 0LL;
          }
          else
          {
            v27 = *(_QWORD *)(v21 + 128);
            v28 = *((_QWORD *)v41[0] + 11);
            v50 = -1;
            v54 = 0LL;
            v55 = 0LL;
            pbo.pvRbrush = 0LL;
            pbo.flColorType = 0;
            v51 = 0LL;
            v52 = 0LL;
            v56 = 0;
            BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v45, a3);
            v30 = *(struct BRUSH **)&v45.fl;
            v8 = 0;
            if ( *(_QWORD *)&v45.fl )
            {
              if ( (*((_DWORD *)v41[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v45.fl + 40LL) & 0x100) == 0 )
              {
                rclBounds = (__m128i)pco.rclBounds;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v41, v29, &rclBounds);
              }
              bSyncBrushObj(v30);
              EBRUSHOBJ::vInitBrush(&pbo, v41[0], v30, v28, v27, v21, 1);
              v32 = v41[0];
              v53 = (char *)v41[0] + 176;
              if ( (*((_DWORD *)v30 + 10) & 0x100) != 0 )
              {
                *((_DWORD *)v41[0] + 9) |= 0x10u;
                *((_QWORD *)v32 + 141) = 0LL;
              }
              else
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v41[0] + 122) + 212LL),
                        *(_BYTE *)(*((_QWORD *)v41[0] + 122) + 213LL));
                ++*(_DWORD *)(v21 + 92);
                EngPaint((SURFOBJ *)(v21 + 24), &pco, &pbo, (POINTL *)v41[0] + 149, mix);
                v34 = v41[0];
                v8 = 1;
                *((_DWORD *)v41[0] + 9) |= 0x10u;
                *((_QWORD *)v34 + 141) = 0LL;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)&v45);
            }
            else
            {
              v31 = v41[0];
              *((_DWORD *)v41[0] + 9) |= 0x10u;
              *((_QWORD *)v31 + 141) = 0LL;
            }
            BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v45);
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          }
          goto LABEL_51;
        }
        v20 = v41[0];
      }
      *((_DWORD *)v20 + 9) |= 0x10u;
      *((_QWORD *)v20 + 141) = 0LL;
      v8 = XDCOBJ::bFullScreen((XDCOBJ *)v41);
LABEL_51:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v57, v23, v24, v25);
      if ( v58[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v58);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v59);
      goto LABEL_54;
    }
  }
LABEL_57:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v48);
  if ( v41[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v41);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v42);
  return v8;
}
