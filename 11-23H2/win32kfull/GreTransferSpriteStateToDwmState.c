/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C00217FC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 * Callees:
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C000B35C (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserGetMiniWinInfo @ 0x1C0017994 (UserGetMiniWinInfo.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C0020A9C (UserIsWindowOnDesktopAndComposed.c)
 *     GreDeleteSprite @ 0x1C00267F8 (GreDeleteSprite.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0026D64 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0027280 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C006B514 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C006B8D8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C007AAF0 (DwmAsyncUpdateSprite.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C008C180 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008E520 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncCreateSprite @ 0x1C00AA528 (DwmAsyncCreateSprite.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00BA500 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00C3C44 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00C3D94 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C4690 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00C5F04 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C5F3C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C7D10 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00C9A30 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UserGetHwndProcess @ 0x1C0134978 (UserGetHwndProcess.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01349A0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0134C60 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  int v3; // ebx
  HDEV v5; // r12
  int *v6; // r12
  Gre::Base *v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  HSPRITE DwmSpriteObj; // rbx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  struct _SURFOBJ *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // eax
  BOOL (__stdcall *v30)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rsi
  struct _EPROCESS *HwndProcess; // rax
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // r8
  void *v35; // rax
  __int64 v36; // rdx
  Gre::Base *v37; // rcx
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  int v39; // r9d
  int v40; // edx
  __int64 v41; // r15
  int v42; // r14d
  __int64 v43; // r8
  void *v44; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v46; // rdi
  struct DWMSPRITE *v47; // rbx
  __int64 v48; // r9
  unsigned __int64 v49; // r9
  struct Gre::Base::SESSION_GLOBALS *v50; // r14
  unsigned int v51; // esi
  _QWORD *v52; // rcx
  _QWORD *v53; // rdi
  __int64 v54; // r8
  __int64 v55; // rdi
  __int64 v56; // rbx
  _QWORD *v57; // rdi
  __int64 v58; // rcx
  _QWORD *v59; // rbx
  int v61; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v62; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v63; // [rsp+68h] [rbp-98h] BYREF
  int v64; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v65; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v66; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  struct SFMLOGICALSURFACE *v68; // [rsp+80h] [rbp-80h]
  struct DWMSPRITE *v69; // [rsp+88h] [rbp-78h]
  HDEV v70; // [rsp+90h] [rbp-70h] BYREF
  __int64 v71; // [rsp+98h] [rbp-68h]
  char v72[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v73[8]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v74; // [rsp+B0h] [rbp-50h]
  _QWORD v75[2]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v76[32]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v77; // [rsp+E8h] [rbp-18h]
  _BYTE v78[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v79; // [rsp+110h] [rbp+10h]
  __int64 v80[18]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v81; // [rsp+1B0h] [rbp+B0h] BYREF
  int v82; // [rsp+1B8h] [rbp+B8h]
  int v83; // [rsp+1BCh] [rbp+BCh]
  struct tagRECT v84; // [rsp+1C0h] [rbp+C0h] BYREF

  v2 = a2;
  v74 = a2;
  v70 = a1;
  v3 = 1;
  v66 = 0;
  ENTER_GRE_DWM_CRIT(a1, &v66);
  v5 = a1 + 20;
  if ( *((_DWORD *)a1 + 35) )
    v5 = (HDEV)(**((_QWORD **)a1 + 18) + 80LL);
  v6 = (int *)*((_QWORD *)v5 + 1);
  v65 = 0;
  v63 = 0;
  v62 = 0;
  v64 = 0;
  while ( v6 )
  {
    v7 = (Gre::Base *)*((_QWORD *)v6 + 9);
    if ( v7 && (unsigned int)UserIsWindowOnDesktopAndComposed((__int64)v7, v2) )
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( (*v6 & 0x20) == 0 )
        {
          v8 = *((_QWORD *)v6 + 1);
          v9 = 0;
          v10 = *(_DWORD *)(v8 + 20);
          if ( v10 )
          {
            while ( (**(_DWORD **)(v8 + 8LL * v9 + 24) & 0x20) == 0 )
            {
              if ( ++v9 >= v10 )
                goto LABEL_14;
            }
            v6 = *(int **)(v8 + 8LL * v9 + 24);
          }
        }
      }
LABEL_14:
      DwmSpriteObj = hspCreateDwmSpriteObj(*((HWND *)v6 + 9), v2, a1, 0);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v76);
      v77 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v76, DwmSpriteObj);
      v13 = v77;
      v69 = (struct DWMSPRITE *)v77;
      if ( v77 )
      {
        v14 = (__int64 *)*((_QWORD *)v6 + 2);
        v3 = 1;
        v15 = *(_QWORD *)(v77 + 144);
        v68 = (struct SFMLOGICALSURFACE *)v15;
        v16 = *v14;
        *(_DWORD *)(v77 + 56) = v6[28] + *(_DWORD *)(v16 + 2560);
        *(_DWORD *)(v13 + 60) = *(_DWORD *)(v16 + 2564) + v6[29];
        v17 = v6[28] + *(_DWORD *)(v16 + 2560);
        *(_DWORD *)(v13 + 64) = v17;
        v18 = *(_DWORD *)(v16 + 2564) + v6[29];
        *(_DWORD *)(v13 + 68) = v18;
        *(_QWORD *)(v13 + 72) = *((_QWORD *)v6 + 28);
        *(_DWORD *)(v13 + 80) = v6[58];
        v19 = *v6;
        v71 = v13 + 72;
        if ( (v19 & 1) != 0 || (v19 & 0x10) != 0 || v6[20] >= v6[22] || (v20 = 1, v6[21] >= v6[23]) )
          v20 = 0;
        *(_DWORD *)(v13 + 140) = v20 | *(_DWORD *)(v13 + 140) & 0xFFFFFFFE;
        v21 = *((_QWORD *)v6 + 16);
        if ( !v21 )
          goto LABEL_36;
        *(_DWORD *)(v13 + 64) = v17 + *(_DWORD *)(v21 + 32);
        *(_DWORD *)(v13 + 68) = v18 + *(_DWORD *)(*((_QWORD *)v6 + 16) + 36LL);
        v22 = *((_QWORD *)v6 + 30);
        if ( v22 )
        {
          LOBYTE(v12) = 5;
          v23 = HmgReferenceCheckLock(v22, v12, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, a1, (struct _SURFOBJ *)(v23 + 24));
          v24 = *(_DWORD *)(v15 + 252) | 1;
          *(_DWORD *)(v15 + 252) = v24;
          *(_DWORD *)(v15 + 252) = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)((unsigned int)*v6 >> 1)) & 0x40;
          goto LABEL_36;
        }
        SpCreateSurface(v78, a1, *((_QWORD *)v6 + 16) + 32LL);
        v25 = v79;
        if ( v79 )
        {
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, a1, (struct _SURFOBJ *)(v79 + 24));
          v26 = *(struct _SURFOBJ **)(v15 + 184);
          v75[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v75, v26);
          if ( v75[0] )
          {
            v81 = 0LL;
            v27 = *((_QWORD *)v6 + 16);
            v28 = *(_QWORD *)(v15 + 184);
            v82 = *(_DWORD *)(v27 + 32);
            v29 = *(_DWORD *)(v27 + 36);
            v67 = 0LL;
            v83 = v29;
            if ( (*(_DWORD *)(v28 + 88) & 0x400) != 0 )
              v30 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 352);
            else
              v30 = EngCopyBits;
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v70) )
              v30 = RedirCopyBits;
            HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*(_QWORD *)(v13 + 40));
            SURFACE::vAppContainerOwner((SURFACE *)(v28 - 24), HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v30)(
              *(_QWORD *)(v15 + 184),
              *((_QWORD *)v6 + 16),
              0LL,
              0LL,
              &v81,
              &v67);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v75);
          v25 = v79;
        }
        else
        {
          v3 = 0;
        }
        if ( v25 )
          DEC_SHARE_REF_CNT(v25);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v78);
        if ( v3 )
        {
LABEL_36:
          memset_0(v80, 0, 0x88uLL);
          v61 = 39168;
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v73, (struct _EX_PUSH_LOCK *)(v13 + 88));
          UserGetMiniWinInfo(*(_QWORD *)(v13 + 40), (struct tagMINIWINDOWINFO *)v80, &v61);
          v32 = *(_DWORD *)(v13 + 140) & 1;
          v33 = v32 | *(_DWORD *)(v15 + 252) & 0xC | (2
                                                    * (*(_DWORD *)(v15 + 252) & 1 | *(_DWORD *)(v13 + 140) & 0x40 | (4 * (*(_DWORD *)(v13 + 140) & 0xE))));
          v35 = (void *)UserReferenceDwmApiPort(v32, *(_DWORD *)(v15 + 252) & 1, v34);
          if ( (int)DwmAsyncCreateSprite(v35, v33, (__int64)v80, v61) < 0 )
          {
            v3 = 0;
          }
          else
          {
            v3 = 1;
            if ( *(_QWORD *)(v15 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*((_QWORD *)v6 + 9), v36) )
            {
              *(_DWORD *)(v15 + 252) |= 8u;
              v38 = Gre::Base::Globals(v37);
              SFMLOGICALSURFACE::StartSfmStateTracking(
                (SFMLOGICALSURFACE *)v15,
                a1,
                *((struct SfmState **)v38 + 809),
                v39);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v15,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v64,
                &v63,
                &v62,
                0LL,
                0LL);
              v40 = *(_DWORD *)(v15 + 252);
              v41 = *(_QWORD *)(v13 + 104);
              *(_QWORD *)(v13 + 104) = 0LL;
              v42 = *(_DWORD *)(v13 + 116);
              v44 = (void *)UserReferenceDwmApiPort(v40 & 1, v40 & 0xC, v43);
              updated = DwmAsyncUpdateSprite(v44, v71, (__int64)v80, v64, v63, v62, v42 >= 1, v41);
              v46 = v68;
              v3 = updated >= 0;
              *((_DWORD *)v68 + 63) &= ~8u;
              if ( updated >= 0 )
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v72, (struct SFMLOGICALSURFACE *)((char *)v46 + 256));
                v47 = v69;
                *(_QWORD *)&v84.left = 0LL;
                v84.right = *((_DWORD *)v69 + 16) - *((_DWORD *)v69 + 14);
                v84.bottom = *((_DWORD *)v69 + 17) - *((_DWORD *)v69 + 15);
                vSpUpdateDirtyRgn(v69, v46, 0LL, &v84, &v65, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v72);
                v48 = *((_QWORD *)v46 + 23);
                if ( v48 )
                  v49 = *(_QWORD *)(v48 + 8);
                else
                  v49 = 0LL;
                v3 = bSpDwmNotifyDirty(*(HSPRITE *)v47, v46, v65, v49);
              }
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v73);
        }
        v13 = v77;
      }
      else
      {
        v3 = 0;
      }
      v6 = (int *)*((_QWORD *)v6 + 3);
      if ( v13 )
        _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      v77 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v76);
      v2 = v74;
      goto LABEL_52;
    }
    v6 = (int *)*((_QWORD *)v6 + 3);
LABEL_52:
    if ( !v3 )
    {
      v50 = Gre::Base::Globals(v7);
      v51 = 0;
      v52 = (_QWORD *)(*((_QWORD *)v50 + 38) + 80LL);
      v53 = (_QWORD *)*v52;
      if ( (_QWORD *)*v52 != v52 )
      {
        do
        {
          v54 = (unsigned __int64)(v53 - 3) & -(__int64)(v53 != 0LL);
          v53 = *(_QWORD **)(v54 + 0x18);
          GreDeleteSprite(a1, 0LL, *(void **)v54, 1);
        }
        while ( v53 != (_QWORD *)(*((_QWORD *)v50 + 38) + 80LL) );
      }
      goto LABEL_70;
    }
  }
  v51 = v3;
  if ( *((_DWORD *)a1 + 35) )
  {
    v55 = *((_QWORD *)a1 + 19);
    if ( v55 )
    {
      do
      {
        v56 = *(_QWORD *)(v55 + 8);
        if ( *(_QWORD *)v55 && (unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)v55, v2) )
        {
          GdiHintSpriteShape(a1, *(HWND *)v55, 0LL, 0, 0);
          GdiDeleteSprite(a1, *(HWND *)v55, (void *)v55);
        }
        v55 = v56;
      }
      while ( v56 );
    }
  }
  else
  {
    v57 = (_QWORD *)*((_QWORD *)a1 + 11);
    if ( v57 )
    {
      do
      {
        v58 = v57[9];
        v59 = (_QWORD *)v57[3];
        if ( v58 && (unsigned int)UserIsWindowOnDesktopAndComposed(v58, v2) )
        {
          if ( v57[30] )
            GdiHintSpriteShape(a1, (HWND)v57[9], 0LL, 0, 0);
          GdiDeleteSprite(a1, (HWND)v57[9], v57);
        }
        v57 = v59;
      }
      while ( v59 );
    }
  }
LABEL_70:
  LEAVE_GRE_DWM_CRIT(a1, v66);
  return v51;
}
