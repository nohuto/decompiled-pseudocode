/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1400617E0
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 * Callees:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetLayeredOrRedirectedParent @ 0x140045C50 (GetLayeredOrRedirectedParent.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140060C00 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x140060C4C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140060DC8 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x140060E40 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140060F1C (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
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
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall GreUpdateSpriteVisRgn(Gre::Base *a1, unsigned int a2)
{
  Gre::Base *v2; // rsi
  unsigned int v3; // r14d
  struct Gre::Base::SESSION_GLOBALS *v4; // r12
  HSEMAPHORE v5; // rdi
  Gre::Base *v6; // rcx
  __int64 v7; // rdx
  Gre::Base *v8; // rcx
  unsigned int v9; // r15d
  __int64 *CurrentThreadNonPaged; // rax
  Gre::Base *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rax
  HSEMAPHORE v14; // rcx
  Gre::Base *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rsi
  HRGN *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 UserSessionState; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  const struct tagWND **v31; // r14
  const struct tagWND *v32; // rbx
  __int64 v33; // rdx
  char v34; // r14
  int v35; // ebx
  bool v36; // zf
  __int64 v37; // rbx
  struct _GRETHREAD *v38; // rax
  int v39; // esi
  __int64 v40; // r14
  void *v41; // rbx
  Win32kRS *v42; // rbx
  const struct REGION_CORE *v43; // rdx
  __int64 v44; // r14
  const struct BaseRustGlobals *BaseRustGlobals; // rsi
  char *v46; // rbx
  const struct tagWND *v47; // rsi
  int v48; // r14d
  char v49; // al
  __int64 v50; // rdx
  struct tagWND *v51; // r13
  __int64 v52; // rcx
  _QWORD *LayeredOrRedirectedParent; // rax
  _QWORD *v54; // rbx
  __int64 v55; // rsi
  int v56; // eax
  __int64 v57; // rax
  Gre::Base *v58; // [rsp+28h] [rbp-69h] BYREF
  unsigned int v59; // [rsp+30h] [rbp-61h]
  HSEMAPHORE v60; // [rsp+38h] [rbp-59h] BYREF
  HRGN *v61; // [rsp+40h] [rbp-51h]
  _BYTE v62[22]; // [rsp+48h] [rbp-49h] BYREF
  __int128 v63; // [rsp+5Eh] [rbp-33h]
  __int16 v64; // [rsp+6Eh] [rbp-23h]
  int v65; // [rsp+70h] [rbp-21h]
  __int64 v66; // [rsp+74h] [rbp-1Dh]
  int v67; // [rsp+7Ch] [rbp-15h]
  Gre::Base *v68; // [rsp+80h] [rbp-11h]
  Gre::Base *v69; // [rsp+88h] [rbp-9h]
  int v70; // [rsp+90h] [rbp-1h] BYREF
  HSEMAPHORE v71; // [rsp+98h] [rbp+7h] BYREF
  char v72; // [rsp+A0h] [rbp+Fh]
  __int128 v73; // [rsp+A8h] [rbp+17h] BYREF

  v2 = a1;
  v3 = a2;
  v59 = a2;
  v68 = a1;
  v4 = Gre::Base::Globals(a1);
  v5 = (HSEMAPHORE)(*(_QWORD *)v4 + 1144LL);
  v60 = v5;
  GreAcquireSemaphoreInternal(v5);
  GrepAcquireLockValidate<2>();
  v9 = 0;
  if ( *((_QWORD *)Gre::Base::Globals(v6) + 17) )
  {
    v69 = v2;
    v70 = 0;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v8, v7);
    if ( !CurrentThreadNonPaged
      || (v12 = *CurrentThreadNonPaged) == 0
      || (v57 = v12 + 8) == 0
      || !*(_DWORD *)(v57 + 348) && !*(_DWORD *)(v57 + 352) )
    {
      v13 = (__int64 *)Gre::Base::Globals(v11);
      GreAcquireSemaphore<6,>(v13);
      v70 = 1;
    }
    v14 = (HSEMAPHORE)(*(_QWORD *)v4 + 520LL);
    v72 = 0;
    v71 = v14;
    GreAcquireSemaphoreInternal(v14);
    GrepAcquireLockValidate<7>();
    if ( *((_QWORD *)Gre::Base::Globals(v15) + 17) )
    {
      v16 = *((_QWORD *)v4 + 17);
      v17 = *(_QWORD *)(v16 + 80);
      if ( v17 != v16 + 80 )
      {
        while ( 1 )
        {
          v18 = (__int64 *)(v17 - 24);
          if ( !v17 )
            v18 = 0LL;
          if ( !v18 )
          {
LABEL_24:
            v2 = v68;
            v3 = v59;
            goto LABEL_25;
          }
          v19 = v18[5];
          if ( v19 )
            break;
LABEL_23:
          v16 = *((_QWORD *)v4 + 17);
          v17 = v18[3];
          if ( v17 == v16 + 80 )
            goto LABEL_24;
        }
        v20 = (HRGN *)(v16 + 184);
        v61 = (HRGN *)(v16 + 184);
        W32GetCurrentThreadNonPaged(v17, v16);
        v24 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 19928);
        if ( (unsigned __int64)(unsigned __int16)v19 >= *(_QWORD *)(v24 + 8)
          || (UserSessionState = W32GetUserSessionState(v24, v23),
              v28 = *(_DWORD *)(W32GetUserSessionState(v27, v26) + 19952) * (unsigned int)(unsigned __int16)v19
                  + *(_QWORD *)(UserSessionState + 19944),
              v31 = (const struct tagWND **)HMPkheFromPhe(v28),
              LOWORD(v19) = WORD1(v19) & 0x7FFF,
              (WORD1(v19) & 0x7FFF) != *(_WORD *)(v28 + 26))
          && (_WORD)v19 != 0x7FFF
          && ((_WORD)v19 || !PsGetCurrentProcessWow64Process(v24, v29, v30))
          || (*(_BYTE *)(v28 + 25) & 1) != 0
          || *(_BYTE *)(v28 + 24) != 1
          || (v32 = *v31) == 0LL )
        {
          v35 = 0;
          goto LABEL_21;
        }
        v24 = *(unsigned int *)(*((_QWORD *)v32 + 5) + 232LL);
        if ( (v24 & 2) == 0 || _GhostWindowFromHungWindow(*v31) || (unsigned int)IsWindowContentProtected(v32) )
        {
          v33 = *((_QWORD *)v32 + 5);
          v34 = *(_BYTE *)(v33 + 31);
          if ( (*(_BYTE *)(v33 + 26) & 0x20) != 0 )
          {
            if ( (v34 & 0x10) != 0 )
            {
              SetRectRgnIndirect(*v20, v33 + 88);
              v35 = 1;
            }
            else
            {
LABEL_63:
              v35 = 0;
            }
          }
          else
          {
            v47 = v32;
            v48 = (4 * (v34 & 4)) | 0x4401;
            while ( v32 )
            {
              v24 = *((_QWORD *)v32 + 5);
              v49 = *(_BYTE *)(v24 + 31);
              if ( (v49 & 0x10) == 0 || (v49 & 0x20) != 0 && v32 != v47 )
              {
LABEL_62:
                v73 = 0LL;
                SetOrCreateRectRgnIndirectPublic(v20, &v73);
                goto LABEL_63;
              }
              if ( (*(_WORD *)(v24 + 42) & 0x2FFF) == 0x29D )
                break;
              v32 = (const struct tagWND *)*((_QWORD *)v32 + 13);
            }
            W32GetUserSessionState(v24, v33);
            v51 = v47;
            while ( 1 )
            {
              v52 = *((_QWORD *)v47 + 5);
              if ( (*(_BYTE *)(v52 + 27) & 0x20) != 0 )
                break;
              v47 = (const struct tagWND *)*((_QWORD *)v47 + 13);
              if ( !v47 )
                goto LABEL_79;
            }
            if ( (v47 == v51 || (*(_WORD *)(v52 + 42) & 0x2FFF) != 0x29D) && v47 && !GetRedirectionBitmap(v47) )
            {
              v20 = v61;
              goto LABEL_62;
            }
LABEL_79:
            W32GetUserSessionState(v52, v50);
            UpdatesLockedForDwm();
            LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(v51);
            v54 = LayeredOrRedirectedParent;
            if ( LayeredOrRedirectedParent )
            {
              v55 = LayeredOrRedirectedParent[5];
              if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
              {
                if ( (*(_DWORD *)(v55 + 24) & 0x20000000) != 0 )
                {
                  v56 = *(_DWORD *)(v55 + 232);
                  if ( (v56 & 2) != 0 && (v56 & 1) == 0 && (*((_DWORD *)v54 + 95) & 0x20000000) == 0 )
                    v48 &= ~0x4000u;
                }
              }
            }
            v35 = CalcVisRgnWorker(v51, v61, v48);
          }
        }
        else
        {
          SetRectRgnIndirect(*v20, *((_QWORD *)v32 + 5) + 88LL);
          v35 = 1;
        }
        v36 = v35 == 0;
        if ( !v35 )
          goto LABEL_22;
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v62, *(HRGN *)(*((_QWORD *)v4 + 17) + 184LL), 0, 0);
        if ( !*(_QWORD *)v62 )
        {
LABEL_20:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v62);
LABEL_21:
          v36 = v35 == 0;
LABEL_22:
          LOBYTE(v24) = !v36;
          if ( !v36 != (*((_BYTE *)v18 + 140) & 1) )
          {
            v39 = (unsigned __int8)v24;
            *((_DWORD *)v18 + 35) = (unsigned __int8)v24 | *((_DWORD *)v18 + 35) & 0xFFFFFFFE;
            v40 = *v18;
            v41 = (void *)UserReferenceDwmApiPort(v24);
            IncrementDWMWindowUniqueness();
            if ( v41 )
            {
              v64 = 0;
              *(_DWORD *)v62 = 3670032;
              v65 = 1073741831;
              *(_WORD *)&v62[4] = 0x8000;
              v66 = v40;
              *(_OWORD *)&v62[6] = 0LL;
              v67 = v39;
              v63 = 0LL;
              EtwUpdateEvent(v40);
              LpcRequestPort(v41, v62);
              ObfDereferenceObject(v41);
            }
          }
          goto LABEL_23;
        }
        if ( GetBaseRustGlobals() )
        {
          v44 = *(_QWORD *)v62 + 24LL;
          if ( !*(_QWORD *)v62 )
            v44 = 0LL;
          BaseRustGlobals = GetBaseRustGlobals();
          v46 = (char *)BaseRustGlobals + 8;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx((char *)BaseRustGlobals + 8, 2LL);
          LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)BaseRustGlobals + 72LL))(v44);
          ExReleasePushLockSharedEx(v46, 2LL);
          KeLeaveCriticalRegion();
          if ( (_DWORD)BaseRustGlobals != 1 )
            goto LABEL_54;
        }
        else if ( *(_DWORD *)(*(_QWORD *)v62 + 48LL) != 1 )
        {
          v42 = (Win32kRS *)(*(_QWORD *)v62 + 24LL);
          if ( GetBaseRustGlobals() )
            Win32kRS::RegionCore_get_sizeScan(v42, v43);
LABEL_54:
          v35 = 1;
          goto LABEL_20;
        }
        v35 = 0;
        goto LABEL_20;
      }
    }
LABEL_25:
    SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v71);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v70);
    v5 = v60;
  }
  v58 = v2;
  Gre::Base::Globals(v8);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v60, (struct PDEVOBJ *)&v58);
  if ( ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v2 + 25)) )
  {
    if ( !*((_BYTE *)v2 + 208) )
      GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, *((_QWORD *)v2 + 25));
    v37 = *((_QWORD *)v58 + 6);
    GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v37);
    if ( !*((_BYTE *)v2 + 208) )
      GreAcquireSemaphore<9,HSEMAPHORE__ *>(*((_QWORD *)v2 + 25));
  }
  else
  {
    v37 = *((_QWORD *)v58 + 6);
    GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v37);
  }
  if ( *((_DWORD *)v2 + 35) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*((_QWORD *)v2 + 18) + 8LL * v9++), v3);
    while ( v9 < *((_DWORD *)v2 + 35) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*((HDEV *)v2 + 10), v3);
  }
  if ( v37 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v37);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v60);
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreLock", v5);
    v38 = GreGetCurrentThreadCrossSessionCheck();
    if ( v38 )
    {
      v36 = (*((_BYTE *)v38 + 10))-- == 1;
      if ( v36 )
        *(_QWORD *)v38 &= ~4uLL;
      if ( !*(_QWORD *)v38 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
}
