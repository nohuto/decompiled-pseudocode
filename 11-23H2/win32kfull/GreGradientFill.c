/*
 * XREFs of GreGradientFill @ 0x1C0001610
 * Callers:
 *     NtGdiGradientFill @ 0x1C0001410 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C022B450 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C0002078 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002200 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0010D3C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007A678 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008C210 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00BB358 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00C3A9C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C00F80F0 (bCvtPts1.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F98B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FB100 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013DC2C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 GreGradientFill(
        __int64 a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        int *a4,
        unsigned int a5,
        unsigned __int8 a6,
        ...)
{
  struct _TRIVERTEX *v7; // r12
  __int64 v9; // r14
  struct _TRIVERTEX *v10; // rsi
  __int64 v11; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  struct UMPDOBJ *v15; // rdx
  DC *v16; // r9
  int v17; // ebx
  unsigned int v18; // ebx
  struct _DC_ATTR *v19; // rax
  __int64 v20; // rdi
  struct _DC_ATTR *UserAttr; // rax
  int v23; // r8d
  __int64 v24; // r9
  DC *v25; // rdx
  char *v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned __int64 v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rax
  struct _TRIVERTEX *v33; // r9
  int v34; // r8d
  int *v35; // rsi
  __int64 v36; // rcx
  char *v37; // rdx
  __int128 v38; // xmm0
  unsigned int v39; // edi
  int v40; // ebx
  unsigned int v41; // r11d
  int v42; // r13d
  struct _TRIVERTEX *v43; // rcx
  struct _TRIVERTEX *v44; // rdx
  struct _TRIVERTEX *v45; // r10
  struct _TRIVERTEX *v46; // r9
  COLOR16 Alpha; // ax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // r13d
  ULONG v52; // ecx
  struct _TRIVERTEX *v53; // rbx
  __int64 v54; // rdi
  LONG x; // r8d
  int v56; // eax
  LONG y; // r9d
  _DWORD *v58; // rcx
  unsigned int v59; // edi
  DC *v60; // rdx
  __int64 v61; // r10
  struct REGION *v62; // r10
  struct ECLIPOBJ *v63; // rdx
  DC *v64; // r13
  struct ECLIPOBJ *v65; // rdx
  __int64 v66; // r13
  Gre::Base *v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // r8
  __int64 v70; // rdi
  __int64 v71; // rbx
  struct Gre::Base::SESSION_GLOBALS *v72; // rax
  unsigned int inited; // eax
  char *v74; // rax
  bool v75; // zf
  BOOL (__stdcall *v76)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  unsigned int v77; // [rsp+60h] [rbp-A0h]
  DC *v78; // [rsp+68h] [rbp-98h] BYREF
  __int64 v79; // [rsp+70h] [rbp-90h]
  _BYTE v80[32]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v81; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v82; // [rsp+A0h] [rbp-60h]
  int v83; // [rsp+A4h] [rbp-5Ch] BYREF
  struct _TRIVERTEX *v84; // [rsp+A8h] [rbp-58h]
  __int64 v85; // [rsp+B0h] [rbp-50h] BYREF
  char *v86; // [rsp+B8h] [rbp-48h] BYREF
  int v87; // [rsp+C0h] [rbp-40h]
  int v88; // [rsp+C4h] [rbp-3Ch]
  struct _RECTL v89; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v90[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v91; // [rsp+100h] [rbp+0h]
  __int64 v92; // [rsp+108h] [rbp+8h]
  char v93; // [rsp+110h] [rbp+10h]
  int v94; // [rsp+114h] [rbp+14h]
  int v95; // [rsp+138h] [rbp+38h]
  __int128 v96; // [rsp+140h] [rbp+40h]
  int v97; // [rsp+150h] [rbp+50h]
  __int64 v98; // [rsp+158h] [rbp+58h]
  __int64 v99; // [rsp+160h] [rbp+60h]
  char v100[32]; // [rsp+168h] [rbp+68h] BYREF
  __int16 v101; // [rsp+188h] [rbp+88h]
  __int64 v102; // [rsp+190h] [rbp+90h]
  __int64 v103; // [rsp+198h] [rbp+98h]
  char v104[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int16 v105; // [rsp+1C0h] [rbp+C0h]
  __int64 v106; // [rsp+1C8h] [rbp+C8h]
  __int128 v107; // [rsp+1D0h] [rbp+D0h]
  __int64 v108; // [rsp+1E0h] [rbp+E0h]
  __int64 v109; // [rsp+1E8h] [rbp+E8h]
  __int64 v110; // [rsp+1F0h] [rbp+F0h]
  __int64 v111; // [rsp+1F8h] [rbp+F8h]
  struct _RECTL si128; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v113[4]; // [rsp+210h] [rbp+110h] BYREF
  int v114; // [rsp+214h] [rbp+114h]
  int v115; // [rsp+218h] [rbp+118h]
  int v116; // [rsp+21Ch] [rbp+11Ch]
  int v117; // [rsp+220h] [rbp+120h]
  __int64 v118; // [rsp+248h] [rbp+148h]
  __int64 v119; // [rsp+260h] [rbp+160h]
  int v120; // [rsp+268h] [rbp+168h]
  int v121; // [rsp+290h] [rbp+190h]
  __int64 v122; // [rsp+2A0h] [rbp+1A0h]

  v77 = a6;
  v7 = 0LL;
  v79 = 0LL;
  v9 = a3;
  v10 = a2;
  v84 = a2;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v80);
  LOBYTE(v11) = 1;
  v78 = (DC *)HmgLockEx(a1, v11, 0LL);
  if ( !v78 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_35;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v13 = *ThreadWin32Thread) != 0 && (v14 = *(_QWORD *)(v13 + 40), v14 != v13 + 40) )
    v15 = (struct UMPDOBJ *)(v14 - 40);
  else
    v15 = 0LL;
  v16 = v78;
  if ( *((_WORD *)v78 + 6) == 1 )
  {
    *((_QWORD *)v78 + 271) = v15;
    *((_DWORD *)v78 + 544) = 0xFFFF;
    v16 = v78;
  }
  else if ( *((struct UMPDOBJ **)v78 + 271) != v15 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v78, v15);
    goto LABEL_16;
  }
  if ( !HIDWORD(v79) )
  {
    if ( !*((_DWORD *)v16 + 528) )
    {
LABEL_36:
      if ( !v16 )
        goto LABEL_18;
      if ( (*((_DWORD *)v16 + 11) & 2) != 0 )
      {
LABEL_43:
        if ( (*((_DWORD *)v16 + 130) & 4) != 0 )
        {
          DC::vMarkTransformDirty(v16);
          v16 = v78;
        }
        if ( !v16 || (*((_DWORD *)v16 + 9) & 0x10000) != 0 )
          goto LABEL_18;
        v92 = 0LL;
        v93 = 0;
        v94 = 0;
        v95 = 0;
        v98 = 0LL;
        v99 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v100);
        v101 = 256;
        v102 = 0LL;
        v103 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v104);
        v105 = 256;
        memset(v90, 0, sizeof(v90));
        v96 = 0LL;
        v107 = 0LL;
        v91 = 0LL;
        v97 = 0;
        v106 = 0LL;
        v108 = 0LL;
        v111 = 0LL;
        v109 = 0LL;
        v110 = 0LL;
        v98 = 0LL;
        v102 = 0LL;
        if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v90, (struct XDCOBJ *)&v78, v23) )
        {
          v18 = XDCOBJ::bFullScreen((XDCOBJ *)&v78);
          goto LABEL_119;
        }
        v25 = v78;
        v87 = *(_DWORD *)(*((_QWORD *)v78 + 122) + 208LL);
        v88 = *(_DWORD *)(*((_QWORD *)v78 + 122) + 108LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v78 + 122) + 340LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v86, (struct XDCOBJ *)&v78, 0x204u, 0);
          v25 = v78;
          v26 = v86;
        }
        else
        {
          v26 = (char *)v78 + 320;
          v86 = (char *)v78 + 320;
        }
        if ( (*((_DWORD *)v26 + 8) & 1) == 0 && a6 <= 1u )
        {
          v27 = 2LL * a5;
          if ( v27 > 0xFFFFFFFF
            || (v28 = 12LL * (unsigned int)v27, v28 > 0xFFFFFFFF)
            || (v29 = v9 + 2 * a5, v82 = 2 * a5, v29 < 2 * a5)
            || (v30 = 16LL * v29, v30 > 0xFFFFFFFF)
            || (v31 = v30 + v28, (int)v30 + (int)v28 < (unsigned int)v28) )
          {
            v52 = 534;
          }
          else
          {
            if ( v31 <= 0x2710000 )
            {
              if ( v31 )
              {
                v32 = Win32AllocPool(v31, 1886221383LL, 0xFFFFFFFFLL, v24);
                v7 = (struct _TRIVERTEX *)v32;
                if ( v32 )
                {
                  v33 = v84;
                  v34 = 0;
                  v35 = (int *)(v32 + (unsigned int)v30);
                  if ( (_DWORD)v9 )
                  {
                    v36 = v9;
                    v37 = (char *)v84 - v32;
                    v34 = v9;
                    do
                    {
                      v38 = *(_OWORD *)&v37[v32];
                      v32 += 16LL;
                      *(_OWORD *)(v32 - 16) = v38;
                      --v36;
                    }
                    while ( v36 );
                  }
                  v39 = 0;
                  if ( a5 )
                  {
                    while ( 1 )
                    {
                      v40 = *a4;
                      v41 = a4[1];
                      if ( *a4 >= (unsigned int)v9 || v41 >= (unsigned int)v9 )
                        break;
                      v42 = v34 + 1;
                      v43 = &v33[v41];
                      v44 = &v7[v34];
                      v45 = &v7[v34 + 1];
                      v44->x = v43->x;
                      v46 = &v33[v40];
                      v44->y = v46->y;
                      v45->x = v46->x;
                      v45->y = v43->y;
                      if ( a6 == 1 )
                      {
                        v44->Red = v46->Red;
                        v44->Green = v46->Green;
                        v44->Blue = v46->Blue;
                        v44->Alpha = v46->Alpha;
                        v45->Red = v43->Red;
                        v45->Green = v43->Green;
                        v45->Blue = v43->Blue;
                        Alpha = v43->Alpha;
                      }
                      else
                      {
                        v44->Red = v43->Red;
                        v44->Green = v43->Green;
                        v44->Blue = v43->Blue;
                        v44->Alpha = v43->Alpha;
                        v45->Red = v46->Red;
                        v45->Green = v46->Green;
                        v45->Blue = v46->Blue;
                        Alpha = v46->Alpha;
                      }
                      v33 = v84;
                      v48 = 2 * v39;
                      v45->Alpha = Alpha;
                      v49 = 3 * v48;
                      v35[v49 + 1] = v34;
                      v50 = 3LL * (unsigned int)(v48 + 1);
                      v35[v49] = v40;
                      v35[v50 + 1] = v34;
                      ++v39;
                      v34 += 2;
                      v35[v49 + 2] = v42;
                      a4 += 2;
                      v35[v50] = v41;
                      v35[v50 + 2] = v42;
                      if ( v39 >= a5 )
                        goto LABEL_71;
                    }
                    EngSetLastError(0x57u);
                    Win32FreePool(v7);
                    goto LABEL_76;
                  }
LABEL_71:
                  v25 = v78;
                  a4 = v35;
                  v26 = v86;
                  v10 = v7;
                  v51 = v82;
                  LODWORD(v9) = v34;
                  v84 = v7;
                  v77 = 2;
LABEL_78:
                  si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                  if ( (_DWORD)v9 )
                  {
                    v53 = v10;
                    v54 = (unsigned int)v9;
                    while ( 1 )
                    {
                      x = v53->x;
                      v56 = *((_DWORD *)v26 + 8) & 0x43;
                      y = v53->y;
                      LODWORD(v81) = v53->x;
                      HIDWORD(v81) = y;
                      if ( (_BYTE)v56 != 67 )
                      {
                        bCvtPts1(v26, &v81, 1LL);
                        v25 = v78;
                        y = HIDWORD(v81);
                        x = v81;
                      }
                      if ( (*(_DWORD *)(*((_QWORD *)v25 + 122) + 108LL) & 1) != 0 )
                        ++x;
                      v58 = (_DWORD *)((char *)v25 + 1024);
                      if ( (*((_DWORD *)v25 + 10) & 1) == 0 )
                        v58 = (_DWORD *)((char *)v25 + 1016);
                      v53->x = x + *v58;
                      v53->y = y + *((_DWORD *)v78 + 2 * (*((_DWORD *)v78 + 10) & 1) + 255);
                      ++v53;
                      if ( !--v54 )
                        break;
                      v25 = v78;
                      v26 = v86;
                    }
                  }
                  v59 = v77;
                  v18 = bCalcMeshExtent(v10, v9, a4, v51, v77, &si128);
                  if ( !v18 )
                    goto LABEL_119;
                  v60 = v78;
                  v61 = *((_QWORD *)v78 + 146);
                  if ( !v61 || (*((_DWORD *)v78 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v78) )
                  {
                    if ( !*((_QWORD *)v60 + 144) )
                    {
                      v62 = DC::prgnVisSnap(v60);
                      goto LABEL_98;
                    }
                    if ( !v61 )
                      goto LABEL_96;
                  }
                  if ( (*((_DWORD *)v60 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v60) )
LABEL_96:
                    v62 = (struct REGION *)*((_QWORD *)v60 + 144);
LABEL_98:
                  v121 = 1;
                  v118 = 0LL;
                  v119 = 0LL;
                  v120 = 0;
                  v122 = 0LL;
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v113, v62, (struct ERECTL *)&si128, 0);
                  if ( v114 == v116 || v115 == v117 )
                  {
                    v18 = 1;
                  }
                  else
                  {
                    v64 = v78;
                    if ( (*((_DWORD *)v78 + 9) & 0xE0) != 0 )
                    {
                      v89 = si128;
                      XDCOBJ::vAccumulate((XDCOBJ *)&v78, v63, (struct ERECTL *)&v89);
                      XDCOBJ::vAccumulateTight((XDCOBJ *)&v78, v65, (struct ERECTL *)&v89);
                      v64 = v78;
                    }
                    v66 = *((_QWORD *)v64 + 62);
                    if ( v66 )
                    {
                      ++*(_DWORD *)(v66 + 92);
                      v67 = (Gre::Base *)(v66 + 96);
                      v68 = *(_QWORD *)(v66 + 48);
                      v81 = 0LL;
                      *(_QWORD *)&v89.left = v66 + 96;
                      if ( (*(_DWORD *)(v68 + 40) & 0x80u) != 0 )
                      {
                        *(_QWORD *)&v89.left = v66 + 96;
                      }
                      else if ( *(_DWORD *)v67 > 3u )
                      {
                        v69 = 0LL;
LABEL_108:
                        v74 = (char *)v78 + 1024;
                        if ( (*((_DWORD *)v78 + 10) & 1) == 0 )
                          v74 = (char *)v78 + 1016;
                        v85 = *(_QWORD *)v74;
                        HIDWORD(v85) = -HIDWORD(v85);
                        v75 = *(_DWORD *)v67 == 3;
                        LODWORD(v85) = -(int)v85;
                        if ( v75 || (*(_DWORD *)(v66 + 112) & 0x20000) == 0 )
                          v76 = EngGradientFill;
                        else
                          v76 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v68 + 3208);
                        if ( v18
                          && ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, int *, unsigned int, struct _RECTL *, __int64 *, unsigned int))v76)(
                               v66 + 24,
                               v113,
                               v69,
                               v84,
                               v9,
                               a4,
                               v82,
                               &si128,
                               &v85,
                               v59) )
                        {
                          v18 = 1;
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v81);
                        }
                        else
                        {
                          v18 = 0;
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v81);
                        }
                        goto LABEL_119;
                      }
                      v70 = *(_QWORD *)(v66 + 128);
                      v71 = *((_QWORD *)v78 + 11);
                      v72 = Gre::Base::Globals(v67);
                      inited = EXLATEOBJ::bInitXlateObj(
                                 &v81,
                                 *(_QWORD *)(*((_QWORD *)v78 + 122) + 248LL),
                                 *((unsigned int *)v78 + 30),
                                 *((_QWORD *)v72 + 751),
                                 v70,
                                 v71,
                                 v71,
                                 *(_DWORD *)(*((_QWORD *)v78 + 122) + 184LL),
                                 *(_DWORD *)(*((_QWORD *)v78 + 122) + 176LL),
                                 0,
                                 0);
                      v69 = v81;
                      v18 = inited;
                      v67 = *(Gre::Base **)&v89.left;
                      v59 = v77;
                      goto LABEL_108;
                    }
                    v18 = 1;
                  }
LABEL_119:
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v90);
                  if ( v7 )
                    Win32FreePool(v7);
                  v16 = v78;
                  goto LABEL_19;
                }
              }
            }
            v52 = 8;
          }
          EngSetLastError(v52);
LABEL_76:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v90);
          DCOBJ::~DCOBJ((DCOBJ *)&v78);
          return 0LL;
        }
        v51 = a5;
        v82 = a5;
        goto LABEL_78;
      }
      if ( HIDWORD(v79) )
      {
LABEL_42:
        *((_DWORD *)v16 + 11) |= 2u;
        v16 = v78;
        LODWORD(v79) = 1;
        goto LABEL_43;
      }
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v78);
      if ( !UserAttr || DC::SaveAttributes(v78, UserAttr) )
      {
        v16 = v78;
        goto LABEL_42;
      }
LABEL_16:
      _InterlockedDecrement((volatile signed __int32 *)v78 + 3);
      goto LABEL_17;
    }
    *((_DWORD *)v16 + 528) = 0;
LABEL_35:
    v16 = v78;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v16 + 6) + 40LL) & 0x8000) != 0 )
  {
    v17 = *((_DWORD *)v16 + 528);
    if ( v17 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v16 = v78;
      goto LABEL_13;
    }
    goto LABEL_35;
  }
LABEL_13:
  _InterlockedDecrement((volatile signed __int32 *)v16 + 3);
LABEL_17:
  v78 = 0LL;
  v16 = 0LL;
LABEL_18:
  v18 = 0;
LABEL_19:
  if ( v16 )
  {
    if ( (_DWORD)v79 && (*((_DWORD *)v16 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v79) )
      {
        v19 = XDCOBJ::GetUserAttr((XDCOBJ *)&v78);
        if ( v19 )
          DC::RestoreAttributes(v78, v19);
        v16 = v78;
      }
      *((_DWORD *)v16 + 11) &= ~2u;
      v16 = v78;
      LODWORD(v79) = 0;
    }
    v83 = 0;
    v20 = *(_QWORD *)v16;
    HmgDecrementExclusiveReferenceCountEx(v16, HIDWORD(v79), &v83);
    if ( v83 )
      GrepDeleteDC(v20, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v80);
  return v18;
}
