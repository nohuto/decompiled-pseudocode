/*
 * XREFs of zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0
 * Callers:
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     _SetLayeredWindowAttributes @ 0x14015DCB4 (_SetLayeredWindowAttributes.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401D1FA4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzResetSharedDesktops @ 0x14024E3F0 (zzzResetSharedDesktops.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 *     xxxMinimizeHungWindow @ 0x14026994C (xxxMinimizeHungWindow.c)
 * Callees:
 *     InvalidateDCE @ 0x14002F704 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x14002F820 (SpbCheckDce.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetLayeredOrRedirectedParent @ 0x140045C50 (GetLayeredOrRedirectedParent.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140060C00 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x140060C4C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140060DC8 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x140060E40 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140060F1C (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreClientRgnUpdated @ 0x140060F88 (GreClientRgnUpdated.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140062E78 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     IsWindowContentProtected @ 0x1400631DC (IsWindowContentProtected.c)
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140063310 (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ??$GreAcquireSemaphore@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x1400D5E5C (--$GreAcquireSemaphore@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400E087C (--$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     InvalidateGDIWindows @ 0x14026C3C4 (InvalidateGDIWindows.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026CF08 (--$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBA.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall zzzLockDisplayAreaAndInvalidateDCCache(__int64 a1, __int64 a2, int *a3)
{
  char v4; // r12
  __int64 v5; // r14
  __int64 *CurrentThreadNonPaged; // rax
  ULONG_PTR v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rdx
  Gre::Base *v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  int v17; // r13d
  __int64 *v18; // rsi
  unsigned int v19; // esi
  __int64 v20; // rbx
  int v21; // ecx
  int v22; // edx
  void (__fastcall *v23)(_QWORD, struct _RECTL *); // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 i; // rcx
  __int64 v35; // rdx
  __int64 j; // rax
  int v37; // r8d
  __int64 v38; // r10
  __int64 v39; // r9
  int v40; // edx
  bool v41; // zf
  __int64 v42; // rax
  int v43; // r12d
  unsigned int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // r13d
  __int64 v48; // rdx
  __int64 v49; // rcx
  Gre::Base *v50; // rcx
  ULONG_PTR v51; // r14
  struct Gre::Base::SESSION_GLOBALS *v52; // r12
  HSEMAPHORE v53; // rsi
  Gre::Base *v54; // rcx
  __int64 v55; // rdx
  Gre::Base *v56; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  Gre::Base *v58; // rcx
  __int64 *v59; // rax
  HSEMAPHORE v60; // rcx
  Gre::Base *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 *v64; // rdi
  __int64 v65; // rsi
  _QWORD *v66; // r13
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // r8
  const struct tagWND **v77; // r14
  const struct tagWND *v78; // rbx
  __int64 v79; // rdx
  char v80; // r14
  int v81; // ebx
  __int64 v82; // r8
  bool v83; // zf
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  struct _GRETHREAD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  ULONG_PTR *v91; // rax
  int v93; // esi
  __int64 v94; // r14
  void *v95; // rbx
  Win32kRS *v96; // rbx
  const struct REGION_CORE *v97; // rdx
  __int64 v98; // r14
  const struct BaseRustGlobals *BaseRustGlobals; // rsi
  char *v100; // rbx
  const struct tagWND *v101; // rsi
  int v102; // r14d
  char v103; // al
  unsigned int v104; // edi
  __int64 v105; // rdx
  struct tagWND *v106; // r13
  __int64 v107; // rcx
  _QWORD *LayeredOrRedirectedParent; // rax
  _QWORD *v109; // rbx
  __int64 v110; // rsi
  int v111; // eax
  unsigned __int8 v112; // dl
  void (__fastcall *v113)(_QWORD, int *); // r13
  __int64 v114; // [rsp+28h] [rbp-E0h] BYREF
  struct _RECTL v115; // [rsp+38h] [rbp-D0h]
  __int64 v116; // [rsp+48h] [rbp-C0h]
  _BYTE v117[22]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v118; // [rsp+66h] [rbp-A2h]
  __int16 v119; // [rsp+76h] [rbp-92h]
  int v120; // [rsp+78h] [rbp-90h]
  __int64 v121; // [rsp+7Ch] [rbp-8Ch]
  int v122; // [rsp+84h] [rbp-84h]
  _BYTE v123[8]; // [rsp+88h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+90h] [rbp-78h] BYREF
  int v125; // [rsp+A8h] [rbp-60h] BYREF
  HSEMAPHORE v126; // [rsp+B0h] [rbp-58h] BYREF
  char v127; // [rsp+B8h] [rbp-50h]
  struct _RECTL v128; // [rsp+C8h] [rbp-40h] BYREF
  struct _RECTL v129; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v130; // [rsp+E8h] [rbp-20h] BYREF

  v4 = a2;
  v5 = a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v7 = 0LL;
  if ( CurrentThreadNonPaged )
    v8 = *CurrentThreadNonPaged;
  else
    v8 = 0LL;
  BugCheckParameter3[0] = *(_QWORD *)(v8 + 456);
  *(_QWORD *)(v8 + 456) = BugCheckParameter3;
  BugCheckParameter3[1] = v5;
  HMLockObject(v5);
  LOBYTE(v10) = (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 0x8000) == 0;
  if ( ((unsigned __int8)v10 & ((v4 & 0x10) == 0)) != 0 )
    GenerateMouseMove(0LL);
  if ( (v4 & 1) != 0 )
  {
    v9 = *(_QWORD *)(v5 + 104);
    v4 = 0;
    if ( v9 )
    {
      if ( v5 != GetDesktopWindow(v5) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 2) != 0 )
        {
          v4 = 4;
          v5 = v9;
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 4) != 0 )
        {
          v4 = 2;
          v5 = v9;
        }
      }
    }
  }
  if ( a3 )
  {
    UserSessionState = W32GetUserSessionState(v10, v9);
    v10 = (Gre::Base *)(unsigned int)a3[2];
    v12 = a3[3];
    v13 = v12;
    v9 = (unsigned int)a3[1];
    v14 = *(_QWORD *)(UserSessionState + 57008);
    v15 = *a3;
    *(_QWORD *)&v115.left = __PAIR64__(v9, v15);
    v16 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)&v115.right = __PAIR64__(v12, (unsigned int)v10);
    if ( v15 > (int)v10 )
    {
      v115.right = v15;
      v115.left = (int)v10;
    }
    v17 = (int)v10;
    if ( v15 <= (int)v10 )
    {
      v17 = v15;
      v15 = (int)v10;
    }
    if ( (int)v9 > v12 )
    {
      v13 = v9;
      v115.bottom = v9;
      v9 = (unsigned int)v12;
      v115.top = v12;
    }
    if ( v17 < v15 && (int)v9 < v13 )
    {
      v18 = (__int64 *)Gre::Base::Globals(v10);
      if ( *(_DWORD *)(v16 + 140) )
      {
        v114 = 0LL;
        if ( !(unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v18) )
        {
          GreAcquireSemaphore<6,>(v18);
          v114 = 1LL;
        }
        v19 = 0;
        if ( *(_DWORD *)(v16 + 140) )
        {
          do
          {
            v20 = *(_QWORD *)(*(_QWORD *)(v16 + 144) + 8LL * v19);
            v128 = v115;
            v21 = *(_DWORD *)(v20 + 2576);
            v22 = *(_DWORD *)(v20 + 2580);
            v128.right = v115.right - v21;
            v128.top = v115.top - v22;
            v128.bottom = v115.bottom - v22;
            v128.left = v17 - v21;
            if ( bIntersect(&v128, (const struct _RECTL *)(v20 + 120), &v129) )
            {
              if ( v114 && !*(_BYTE *)(v20 + 208) )
                GreAcquireSemaphore<9,HSEMAPHORE__ *>(*(_QWORD *)(v20 + 200));
              v23 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v20 + 3488);
              if ( v23 )
                v23(*(_QWORD *)(v20 + 1784), &v129);
            }
            ++v19;
          }
          while ( v19 < *(_DWORD *)(v16 + 140) );
          v7 = 0LL;
        }
      }
      else
      {
        v113 = *(void (__fastcall **)(_QWORD, int *))(v16 + 3488);
        if ( !(unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v18) )
        {
          GreAcquireSemaphore<6,>(v18);
          if ( !*(_BYTE *)(v16 + 208) )
            GreAcquireSemaphore<9,HSEMAPHORE__ *>(*(_QWORD *)(v16 + 200));
        }
        if ( v113 )
          v113(*(_QWORD *)(v16 + 1784), a3);
      }
    }
  }
  v24 = W32GetUserSessionState(v10, v9);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v24 + 57008) + 48LL));
  v27 = W32GetUserSessionState(v26, v25);
  GreLockVisRgnPublish(*(_QWORD *)(*(_QWORD *)(v27 + 57008) + 48LL));
  v30 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 57008);
  v31 = *(_QWORD *)(v30 + 24);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v30, v32) + 57008) + 24LL;
        v31 != i;
        i = *(_QWORD *)(W32GetUserSessionState(i, v35) + 57008) + 24LL )
  {
    v35 = *(unsigned int *)(v31 + 48);
    if ( (v35 & 0x400800) == 0 )
    {
      if ( (v35 & 3) == 0 )
      {
        v82 = *(_QWORD *)(v31 + 80);
        if ( (*(_BYTE *)(*(_QWORD *)(v82 + 40) + 31LL) & 2) != 0 )
        {
          LODWORD(v35) = v35 | 8;
          *(_DWORD *)(v31 + 48) = v35;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v82 + 40) + 31LL) & 0x20) != 0 )
          *(_DWORD *)(v31 + 48) = v35 & 0xFFFFFFF7;
      }
      v35 = *(_QWORD *)(v31 + 80);
      for ( j = v35; j; j = *(_QWORD *)(j + 104) )
      {
        if ( j == v5 )
        {
          if ( v5 != v35
            || (v4 & 2) == 0
            && (LOBYTE(i) = (v4 & 4) != 0, ((unsigned __int8)i & ((*(_BYTE *)(v31 + 48) & 1) != 0)) == 0) )
          {
            v37 = *(_DWORD *)(v31 + 48);
            if ( (v37 & 0x1000) != 0 )
            {
              v38 = *(_QWORD *)(v31 + 88);
              if ( v37 >= 0 )
              {
                v37 &= 0x7FFFFFE7u;
                v39 = v35 + 40;
                *(_DWORD *)(v31 + 48) = v37;
                if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v35 + 136) + 8LL) + 8LL) >= 0
                  || (v112 = *(_BYTE *)(*(_QWORD *)(v38 + 40) + 31LL),
                      ((*(_BYTE *)(*(_QWORD *)v39 + 31LL) ^ v112) & 0x10) != 0) )
                {
                  v40 = v37;
                  if ( (*(_BYTE *)(*(_QWORD *)v39 + 31LL) & 0x22) == 2 )
                  {
                    v40 = v37 | 8;
                    *(_DWORD *)(v31 + 48) = v37 | 8;
                  }
                  v37 = v40;
                  v41 = (*(_BYTE *)(*(_QWORD *)v39 + 31LL) & 4) == 0;
                }
                else
                {
                  v41 = (v112 & 4) == 0;
                }
                if ( !v41 )
                  v37 |= 0x10u;
              }
              *(_DWORD *)(v31 + 48) = v37 | 0x2000;
              UserSetDCVisRgn(v31);
            }
            else
            {
              SpbCheckDce(v31);
              InvalidateDCE(v31);
            }
          }
          break;
        }
      }
    }
    v31 = *(_QWORD *)v31;
  }
  v42 = W32GetUserSessionState(i, v33);
  GreUnlockVisRgnPublish(*(_QWORD *)(*(_QWORD *)(v42 + 57008) + 48LL));
  v43 = v4 & 8;
  v44 = v43 != 0 ? 2 : 0;
  if ( *(_DWORD *)(W32GetUserSessionState(v46, v45) + 43312) )
  {
    InvalidateGDIWindows(v5);
    v44 |= 1u;
  }
  GreClientRgnUpdated((Gre::Base *)v44);
  v47 = v43 != 0 ? 4 : 0;
  LODWORD(v116) = v47;
  v50 = *(Gre::Base **)(W32GetUserSessionState(v49, v48) + 57008);
  v51 = *((_QWORD *)v50 + 6);
  *(_QWORD *)&v115.left = v51;
  v52 = Gre::Base::Globals(v50);
  v53 = (HSEMAPHORE)(*(_QWORD *)v52 + 1144LL);
  *(_QWORD *)&v128.left = v53;
  GreAcquireSemaphoreInternal(v53);
  GrepAcquireLockValidate<2>();
  if ( *((_QWORD *)Gre::Base::Globals(v54) + 17) )
  {
    BugCheckParameter3[2] = v51;
    v125 = 0;
    CurrentThread = GreGetCurrentThread((__int64)v56, v55);
    if ( !CurrentThread || !*((_DWORD *)CurrentThread + 87) && !*((_DWORD *)CurrentThread + 88) )
    {
      v59 = (__int64 *)Gre::Base::Globals(v58);
      GreAcquireSemaphore<6,>(v59);
      v125 = 1;
    }
    v60 = (HSEMAPHORE)(*(_QWORD *)v52 + 520LL);
    v127 = 0;
    v126 = v60;
    GreAcquireSemaphoreInternal(v60);
    GrepAcquireLockValidate<7>();
    if ( *((_QWORD *)Gre::Base::Globals(v61) + 17) )
    {
      v62 = *((_QWORD *)v52 + 17);
      v63 = *(_QWORD *)(v62 + 80);
      if ( v63 != v62 + 80 )
      {
        while ( 1 )
        {
          v64 = (__int64 *)(v63 - 24);
          if ( !v63 )
            v64 = 0LL;
          if ( !v64 )
          {
LABEL_77:
            v53 = *(HSEMAPHORE *)&v128.left;
            v51 = *(_QWORD *)&v115.left;
            v47 = v116;
            goto LABEL_78;
          }
          v65 = v64[5];
          if ( v65 )
            break;
LABEL_76:
          v62 = *((_QWORD *)v52 + 17);
          v63 = v64[3];
          if ( v63 == v62 + 80 )
            goto LABEL_77;
        }
        v66 = (_QWORD *)(v62 + 184);
        *(_QWORD *)&v129.left = v62 + 184;
        W32GetCurrentThreadNonPaged(v63, v62);
        v70 = *(_QWORD *)(W32GetUserSessionState(v68, v67) + 19928);
        if ( (unsigned __int64)(unsigned __int16)v65 >= *(_QWORD *)(v70 + 8)
          || (v71 = W32GetUserSessionState(v70, v69),
              v74 = *(_DWORD *)(W32GetUserSessionState(v73, v72) + 19952) * (unsigned int)(unsigned __int16)v65
                  + *(_QWORD *)(v71 + 19944),
              v77 = (const struct tagWND **)HMPkheFromPhe(v74),
              LOWORD(v65) = WORD1(v65) & 0x7FFF,
              (WORD1(v65) & 0x7FFF) != *(_WORD *)(v74 + 26))
          && (_WORD)v65 != 0x7FFF
          && ((_WORD)v65 || !PsGetCurrentProcessWow64Process(v70, v75, v76))
          || (*(_BYTE *)(v74 + 25) & 1) != 0
          || *(_BYTE *)(v74 + 24) != 1
          || (v78 = *v77) == 0LL )
        {
          v81 = 0;
          goto LABEL_74;
        }
        v70 = *(unsigned int *)(*((_QWORD *)v78 + 5) + 232LL);
        if ( (v70 & 2) == 0 || _GhostWindowFromHungWindow(*v77) || (unsigned int)IsWindowContentProtected(v78) )
        {
          v79 = *((_QWORD *)v78 + 5);
          v80 = *(_BYTE *)(v79 + 31);
          if ( (*(_BYTE *)(v79 + 26) & 0x20) != 0 )
          {
            if ( (v80 & 0x10) != 0 )
            {
              SetRectRgnIndirect(*v66, v79 + 88);
              v81 = 1;
            }
            else
            {
LABEL_118:
              v81 = 0;
            }
          }
          else
          {
            v101 = v78;
            v102 = (4 * (v80 & 4)) | 0x4401;
            while ( v78 )
            {
              v70 = *((_QWORD *)v78 + 5);
              v103 = *(_BYTE *)(v70 + 31);
              if ( (v103 & 0x10) == 0 || (v103 & 0x20) != 0 && v78 != v101 )
              {
LABEL_117:
                v130 = 0LL;
                SetOrCreateRectRgnIndirectPublic(v66, &v130);
                goto LABEL_118;
              }
              if ( (*(_WORD *)(v70 + 42) & 0x2FFF) == 0x29D )
                break;
              v78 = (const struct tagWND *)*((_QWORD *)v78 + 13);
            }
            W32GetUserSessionState(v70, v79);
            v106 = v101;
            while ( 1 )
            {
              v107 = *((_QWORD *)v101 + 5);
              if ( (*(_BYTE *)(v107 + 27) & 0x20) != 0 )
                break;
              v101 = (const struct tagWND *)*((_QWORD *)v101 + 13);
              if ( !v101 )
                goto LABEL_136;
            }
            if ( (v101 == v106 || (*(_WORD *)(v107 + 42) & 0x2FFF) != 0x29D) && v101 && !GetRedirectionBitmap(v101) )
            {
              v66 = *(_QWORD **)&v129.left;
              goto LABEL_117;
            }
LABEL_136:
            W32GetUserSessionState(v107, v105);
            UpdatesLockedForDwm();
            LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(v106);
            v109 = LayeredOrRedirectedParent;
            if ( LayeredOrRedirectedParent )
            {
              v110 = LayeredOrRedirectedParent[5];
              if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
              {
                if ( (*(_DWORD *)(v110 + 24) & 0x20000000) != 0 )
                {
                  v111 = *(_DWORD *)(v110 + 232);
                  if ( (v111 & 2) != 0 && (v111 & 1) == 0 && (*((_DWORD *)v109 + 95) & 0x20000000) == 0 )
                    v102 &= ~0x4000u;
                }
              }
            }
            v81 = CalcVisRgnWorker(v106, *(HRGN **)&v129.left, v102);
          }
        }
        else
        {
          SetRectRgnIndirect(*v66, *((_QWORD *)v78 + 5) + 88LL);
          v81 = 1;
        }
        v83 = v81 == 0;
        if ( !v81 )
          goto LABEL_75;
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v117, *(HRGN *)(*((_QWORD *)v52 + 17) + 184LL), 0, 0);
        if ( !*(_QWORD *)v117 )
        {
LABEL_73:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v117);
LABEL_74:
          v83 = v81 == 0;
LABEL_75:
          LOBYTE(v70) = !v83;
          if ( !v83 != (*((_BYTE *)v64 + 140) & 1) )
          {
            v93 = (unsigned __int8)v70;
            *((_DWORD *)v64 + 35) = (unsigned __int8)v70 | *((_DWORD *)v64 + 35) & 0xFFFFFFFE;
            v94 = *v64;
            v95 = (void *)UserReferenceDwmApiPort(v70);
            IncrementDWMWindowUniqueness();
            if ( v95 )
            {
              v119 = 0;
              *(_DWORD *)v117 = 3670032;
              v120 = 1073741831;
              *(_WORD *)&v117[4] = 0x8000;
              v121 = v94;
              *(_OWORD *)&v117[6] = 0LL;
              v122 = v93;
              v118 = 0LL;
              EtwUpdateEvent(v94);
              LpcRequestPort(v95, v117);
              ObfDereferenceObject(v95);
            }
          }
          goto LABEL_76;
        }
        if ( GetBaseRustGlobals() )
        {
          v98 = *(_QWORD *)v117 + 24LL;
          if ( !*(_QWORD *)v117 )
            v98 = 0LL;
          BaseRustGlobals = GetBaseRustGlobals();
          v100 = (char *)BaseRustGlobals + 8;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx((char *)BaseRustGlobals + 8, 2LL);
          LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)BaseRustGlobals + 72LL))(v98);
          ExReleasePushLockSharedEx(v100, 2LL);
          KeLeaveCriticalRegion();
          if ( (_DWORD)BaseRustGlobals != 1 )
            goto LABEL_109;
        }
        else if ( *(_DWORD *)(*(_QWORD *)v117 + 48LL) != 1 )
        {
          v96 = (Win32kRS *)(*(_QWORD *)v117 + 24LL);
          if ( GetBaseRustGlobals() )
            Win32kRS::RegionCore_get_sizeScan(v96, v97);
LABEL_109:
          v81 = 1;
          goto LABEL_73;
        }
        v81 = 0;
        goto LABEL_73;
      }
    }
LABEL_78:
    SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v126);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v125);
  }
  v114 = v51;
  Gre::Base::Globals(v56);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v123, (struct PDEVOBJ *)&v114);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v51 + 200)) )
  {
    if ( !*(_BYTE *)(v51 + 208) )
      GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>(
        GreReleaseSemaphoreExclusiveInternal,
        *(_QWORD *)(v51 + 200));
    v84 = *(_QWORD *)(v114 + 48);
    GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v84);
    if ( !*(_BYTE *)(v51 + 208) )
      GreAcquireSemaphore<9,HSEMAPHORE__ *>(*(_QWORD *)(v51 + 200));
  }
  else
  {
    v84 = *(_QWORD *)(v114 + 48);
    GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v84);
  }
  if ( *(_DWORD *)(v51 + 140) )
  {
    v104 = 0;
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v51 + 144) + 8LL * v104++), v47);
    while ( v104 < *(_DWORD *)(v51 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v51 + 80), v47);
  }
  if ( v84 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v84);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v123);
  if ( v53 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreLock", v53);
    v87 = GreGetCurrentThreadCrossSessionCheck();
    if ( v87 )
    {
      v41 = (*((_BYTE *)v87 + 10))-- == 1;
      if ( v41 )
        *(_QWORD *)v87 &= ~4uLL;
      if ( !*(_QWORD *)v87 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v53);
  }
  v88 = W32GetUserSessionState(v86, v85);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v88 + 57008) + 48LL));
  v91 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v90, v89);
  if ( v91 )
    v7 = *v91;
  Win32HM_UnlockFromThread<0>(v7, BugCheckParameter3);
  return 1LL;
}
