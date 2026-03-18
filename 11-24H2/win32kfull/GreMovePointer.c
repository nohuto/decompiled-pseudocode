/*
 * XREFs of GreMovePointer @ 0x1400240B0
 * Callers:
 *     GreHidePointer @ 0x14002A43C (GreHidePointer.c)
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140093C68 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140022FAC (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$03@@QEAAXXZ @ 0x1400231A0 (-vUnlock@-$SEMOBJ@$03@@QEAAXXZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x140023218 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     EngpMovePointer @ 0x140024AC8 (EngpMovePointer.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall GreMovePointer(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // r12d
  int v6; // r15d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  Gre::Base *v10; // rcx
  __int64 v11; // r13
  unsigned __int8 v12; // al
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v16; // rbx
  __int64 v17; // rdx
  char v18; // cl
  HSEMAPHORE v19; // r14
  int v20; // edi
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // ebx
  __int64 v25; // r8
  int v26; // ebx
  unsigned int v27; // r13d
  int v28; // r12d
  int v29; // eax
  Gre::Base *v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // r15
  struct _SURFOBJ *v33; // r15
  void (__fastcall *v34)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  HDEV hdev; // rbx
  Gre::Base *v36; // rcx
  struct _RECTL *v37; // r9
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  HSEMAPHORE v39; // rbx
  struct Gre::Base::SESSION_GLOBALS *v40; // rdi
  __int64 v41; // rdi
  Gre::Base *v42; // rcx
  struct _RECTL *v43; // r9
  LONG cy; // ecx
  void (__fastcall *v45)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  int v46; // r8d
  struct _GRETHREAD *v47; // rax
  bool v48; // zf
  HSEMAPHORE v49; // r14
  struct _KTHREAD *v50; // rsi
  __int64 v51; // rdi
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  _QWORD *v55; // rdx
  __int64 SessionState; // rax
  __int64 **v57; // rcx
  int v58; // edx
  __int64 *v59; // r14
  __int64 v60; // rax
  HSEMAPHORE v61; // rsi
  unsigned int v62; // r15d
  __int64 v63; // rbx
  unsigned int v64; // edi
  unsigned int v65; // r12d
  int v66; // eax
  _DWORD *v67; // rcx
  void (__fastcall *v68)(_DWORD *, _QWORD, _QWORD, _QWORD); // rax
  __int64 v69; // rdi
  Gre::Base *v70; // rcx
  struct _RECTL *v71; // r9
  struct Gre::Base::SESSION_GLOBALS *v72; // rax
  HSEMAPHORE v73; // rdi
  struct Gre::Base::SESSION_GLOBALS *v74; // r15
  __int64 v75; // r15
  Gre::Base *v76; // rcx
  struct _RECTL *v77; // r9
  struct _SURFOBJ *v78; // r15
  signed int v79; // edx
  void (__fastcall *v80)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  struct _GRETHREAD *v81; // rax
  HSEMAPHORE v82; // rdi
  __int64 v83; // rbx
  int v84; // ecx
  __int64 v85; // rax
  struct _SURFOBJ *v86; // rsi
  void (__fastcall *v87)(struct _SURFOBJ *, __int64, __int64, _QWORD); // rax
  struct _GRETHREAD *v88; // rax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v91; // ebx
  __int64 v92; // rax
  void (__fastcall *v93)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v94)(_DWORD *, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v95)(struct _SURFOBJ *, __int64, __int64, _QWORD); // rax
  unsigned __int64 v96; // rcx
  int v97; // r8d
  int v98; // eax
  int v99; // [rsp+38h] [rbp-59h]
  __int64 v100; // [rsp+40h] [rbp-51h]
  __int64 v101; // [rsp+48h] [rbp-49h]
  __int64 v102; // [rsp+50h] [rbp-41h] BYREF
  int v103; // [rsp+58h] [rbp-39h]
  _DWORD *v104; // [rsp+60h] [rbp-31h] BYREF
  struct _SURFOBJ *v105; // [rsp+68h] [rbp-29h]
  __int64 v106; // [rsp+70h] [rbp-21h]
  unsigned int v107; // [rsp+78h] [rbp-19h]
  HSEMAPHORE v108; // [rsp+80h] [rbp-11h] BYREF
  HSEMAPHORE v109; // [rsp+88h] [rbp-9h]
  _BYTE v110[8]; // [rsp+90h] [rbp-1h] BYREF
  HSEMAPHORE v111; // [rsp+98h] [rbp+7h]
  unsigned __int8 v112; // [rsp+F8h] [rbp+67h]
  int v113; // [rsp+100h] [rbp+6Fh] BYREF
  int v114; // [rsp+108h] [rbp+77h] BYREF
  int v115; // [rsp+110h] [rbp+7Fh]

  v115 = a4;
  v114 = a3;
  v113 = a2;
  v4 = a4;
  v102 = a1;
  v6 = 0;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v8 = *CurrentThreadNonPaged;
  else
    v8 = 0LL;
  v9 = v8 + 8;
  v112 = 0;
  v10 = (Gre::Base *)-v8;
  v11 = v9 & -(__int64)(v10 != 0LL);
  v100 = v11;
  if ( v11 )
  {
    v12 = *(_BYTE *)((v9 & -(__int64)(v10 != 0LL)) + 0x158);
    *(_DWORD *)(v11 + 344) &= ~1u;
    v112 = v12;
  }
  v111 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v10) + 624LL);
  GreAcquireSemaphoreSharedInternal(v111);
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  v16 = (__int64 *)((v14 + 8) & -(__int64)(v14 != 0));
  if ( v16 )
  {
    v17 = *v16;
    if ( (*v16 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v16 & 2) == 0 )
    {
      v96 = 0LL;
      v97 = 37;
      do
      {
        v98 = v96;
        if ( !_bittest64(&v17, v96) )
          v98 = v97;
        ++v96;
        v97 = v98;
      }
      while ( v96 < 0x40 );
      if ( v98 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v96, v17, (unsigned int)v98);
    }
    v18 = *(_BYTE *)(((v14 + 8) & -(__int64)(v14 != 0)) + 9);
    *(_BYTE *)(((v14 + 8) & -(__int64)(v14 != 0)) + 9) = v18 + 1;
    if ( !v18 )
      *v16 |= 2uLL;
  }
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v110, (struct PDEVOBJ *)&v102);
  v19 = *(HSEMAPHORE *)(v102 + 56);
  v109 = v19;
  GreAcquireSemaphoreInternal(v19);
  GrepAcquireLockValidate<4>();
  DrvUniformSpaceToPixelSpacePoint(&v113, &v114);
  v20 = v114;
  v21 = v113;
  v22 = *(_QWORD *)(W32GetSessionState() + 96);
  *(_QWORD *)(v22 + 48) = a1;
  *(_DWORD *)(v22 + 56) = v21;
  *(_DWORD *)(v22 + 60) = v20;
  *(_DWORD *)(v22 + 64) = v4;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState() + 96) + 72LL) )
  {
    SessionState = W32GetSessionState();
    v106 = 0LL;
    v24 = 1;
    v101 = 1LL;
    v23 = 1LL;
    *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 80LL) = 1;
    if ( *(_DWORD *)(W32GetUserSessionState() + 36348) )
    {
      v106 = 1LL;
      v6 = 1;
      v101 = 1LL;
      v25 = 1LL;
    }
    else
    {
      v25 = v106;
    }
  }
  else
  {
    v23 = 0LL;
    v24 = 0;
    v25 = 0LL;
    v101 = 0LL;
    v106 = 0LL;
  }
  if ( (*(_DWORD *)(v102 + 40) & 0x20000) != 0 )
  {
    v57 = *(__int64 ***)(v102 + 1784);
    v58 = *((_DWORD *)v57 + 4);
    v59 = *v57;
    v99 = v58;
    while ( 1 )
    {
      v60 = v59[6];
      if ( v113 < *((_DWORD *)v59 + 7) || v113 >= *((_DWORD *)v59 + 9) )
        goto LABEL_97;
      if ( v114 < *((_DWORD *)v59 + 8) || v114 >= *((_DWORD *)v59 + 10) )
      {
        v58 = v99;
LABEL_97:
        if ( v23 && (*(_DWORD *)(v60 + 2112) & 0x2000) == 0 )
          goto LABEL_94;
        v82 = *(HSEMAPHORE *)(v60 + 56);
        GreAcquireSemaphoreInternal(v82);
        GrepAcquireLockValidate<4>();
        v83 = v59[6];
        if ( *(_DWORD *)(v83 + 64) != -1 || *(_DWORD *)(v83 + 68) != -1 || (*(_DWORD *)(v83 + 40) & 0x100000) != 0 )
        {
          v84 = *(_DWORD *)(v83 + 40);
          *(_DWORD *)(v83 + 64) = -1;
          *(_DWORD *)(v83 + 68) = -1;
          if ( (v84 & 0x400) == 0 )
          {
            v85 = *(_QWORD *)(v83 + 2544);
            if ( v85 )
            {
              v86 = (struct _SURFOBJ *)(v85 + 24);
              if ( (v84 & 2) != 0 )
              {
                v87 = *(void (__fastcall **)(struct _SURFOBJ *, __int64, __int64, _QWORD))(v83 + 3416);
                if ( v87 )
                {
                  v87(v86, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4);
                }
                else
                {
                  v95 = *(void (__fastcall **)(struct _SURFOBJ *, __int64, __int64, _QWORD))(v83 + 2920);
                  if ( v95 )
                    v95(v86, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
                }
              }
              if ( (*(_DWORD *)(v83 + 40) & 4) != 0 )
                EngpMovePointer(v86, -1, -1, v4 & 0xF4);
            }
          }
        }
        if ( v82 )
        {
          EtwTraceGreLockReleaseSemaphore(L"Pointer", v82);
          v88 = GreGetCurrentThreadCrossSessionCheck();
          if ( v88 )
          {
            v48 = (*((_BYTE *)v88 + 12))-- == 1;
            if ( v48 )
              *(_QWORD *)v88 &= ~0x10uLL;
            if ( !*(_QWORD *)v88 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v82);
        }
        goto LABEL_92;
      }
      if ( v23 && (*(_DWORD *)(v60 + 2112) & 0x2000) == 0 && !v25 )
        goto LABEL_93;
      v61 = *(HSEMAPHORE *)(v60 + 56);
      v62 = v4 | 4;
      if ( !v25 )
        v62 = v4;
      v107 = v62;
      GreAcquireSemaphoreInternal(v61);
      GrepAcquireLockValidate<4>();
      v63 = v59[6];
      v65 = v114 - *((_DWORD *)v59 + 8);
      v103 = v113 - *((_DWORD *)v59 + 7);
      v64 = v103;
      if ( *(_QWORD *)(v63 + 64) != __PAIR64__(v65, v103) || (*(_DWORD *)(v63 + 40) & 0x100000) != 0 )
      {
        v66 = *(_DWORD *)(v63 + 40);
        *(_DWORD *)(v63 + 64) = v103;
        *(_DWORD *)(v63 + 68) = v65;
        if ( (v66 & 0x400) == 0 )
        {
          v67 = *(_DWORD **)(v63 + 2544);
          v104 = v67;
          if ( v67 )
            break;
        }
      }
LABEL_84:
      if ( v61 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Pointer", v61);
        v81 = GreGetCurrentThreadCrossSessionCheck();
        if ( v81 )
        {
          v48 = (*((_BYTE *)v81 + 12))-- == 1;
          if ( v48 )
            *(_QWORD *)v81 &= ~0x10uLL;
          if ( !*(_QWORD *)v81 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v61);
      }
      v4 = v115;
LABEL_92:
      v23 = v101;
LABEL_93:
      v58 = v99;
LABEL_94:
      v59 = (__int64 *)*v59;
      --v58;
      v25 = v106;
      v99 = v58;
      if ( !v58 )
      {
        v19 = v109;
        goto LABEL_36;
      }
    }
    v105 = (struct _SURFOBJ *)(v67 + 6);
    if ( (v66 & 2) != 0 )
    {
      v68 = *(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD))(v63 + 3416);
      if ( v68 )
      {
        v68(v67 + 6, v64, v65, v62);
LABEL_72:
        v67 = v104;
        goto LABEL_73;
      }
      v94 = *(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD))(v63 + 2920);
      if ( v94 )
      {
        v94(v67 + 6, v64, v65, 0LL);
        goto LABEL_72;
      }
    }
LABEL_73:
    if ( (*(_DWORD *)(v63 + 40) & 4) != 0 )
    {
      v69 = *((_QWORD *)v67 + 6);
      if ( IsDwmActive((Gre::Base *)v67) )
      {
        v72 = Gre::Base::Globals(v70);
        v73 = *(HSEMAPHORE *)(v69 + 56);
        v74 = v72;
        v108 = v73;
        GreAcquireSemaphoreInternal(v73);
        GrepAcquireLockValidate<4>();
        v75 = *(_QWORD *)v74 + 1040LL;
        EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v75);
        GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedStarveExclusiveInternal,
          v75);
        if ( IsDwmActive(v76) )
        {
          v64 = v103;
          DwmMovePointer(v105, v103, v65, v77, v107 & 0xF4);
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v75);
          SEMOBJ<4>::vUnlock(&v108);
          goto LABEL_77;
        }
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v75);
        if ( v73 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v73);
      }
      v78 = v105;
      v64 = v103;
      GdiMovePointer(v105, v103, v65, v71, 0);
      goto LABEL_78;
    }
LABEL_77:
    v78 = v105;
LABEL_78:
    if ( (*(_DWORD *)(v63 + 1808) & 0x10000) != 0 && v65 != -1 && (signed int)v64 < v104[14] )
    {
      v79 = v104[15];
      if ( (int)v65 < v79 )
      {
        v80 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))(v63 + 2920);
        if ( v80 )
          v80(v78, v64, v65 - v79, 0LL);
      }
    }
    goto LABEL_84;
  }
  if ( !v24 || (*(_DWORD *)(v102 + 2112) & 0x2000) != 0 || v6 )
  {
    v26 = v113;
    v27 = v4 | 4;
    v115 = v113;
    if ( !v6 )
      v27 = v4;
    v28 = v114;
    if ( *(_DWORD *)(a1 + 64) == v113 && *(_DWORD *)(a1 + 68) == v114 && (*(_DWORD *)(a1 + 40) & 0x100000) == 0 )
      goto LABEL_36;
    v29 = *(_DWORD *)(a1 + 40);
    v30 = (Gre::Base *)(unsigned int)v113;
    v31 = v114;
    *(_DWORD *)(a1 + 64) = v113;
    *(_DWORD *)(a1 + 68) = v31;
    if ( (v29 & 0x400) != 0 )
      goto LABEL_36;
    v32 = *(_QWORD *)(a1 + 2544);
    if ( !v32 )
      goto LABEL_36;
    v33 = (struct _SURFOBJ *)(v32 + 24);
    if ( (v29 & 2) != 0 )
    {
      v34 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))(a1 + 3416);
      if ( v34 )
      {
        v34(v33, (unsigned int)v30, v31, v27);
      }
      else
      {
        v93 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))(a1 + 2920);
        if ( v93 )
          v93(v33, (unsigned int)v30, v31, 0LL);
      }
    }
    if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
    {
      hdev = v33->hdev;
      if ( IsDwmActive(v30) )
      {
        v38 = Gre::Base::Globals(v36);
        v39 = (HSEMAPHORE)*((_QWORD *)hdev + 7);
        v40 = v38;
        v104 = v39;
        GreAcquireSemaphoreInternal(v39);
        GrepAcquireLockValidate<4>();
        v41 = *(_QWORD *)v40 + 1040LL;
        EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v41);
        GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedStarveExclusiveInternal,
          v41);
        if ( IsDwmActive(v42) )
        {
          v26 = v115;
          DwmMovePointer(v33, v115, v28, v43, v27 & 0xF4);
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v41);
          SEMOBJ<4>::vUnlock((HSEMAPHORE *)&v104);
          goto LABEL_30;
        }
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v41);
        if ( v39 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v39);
      }
      v26 = v115;
      GdiMovePointer(v33, v115, v28, v37, 0);
    }
LABEL_30:
    if ( (*(_DWORD *)(a1 + 1808) & 0x10000) != 0 && v28 != -1 && v26 < v33->sizlBitmap.cx )
    {
      cy = v33->sizlBitmap.cy;
      if ( v28 < cy )
      {
        v45 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))(a1 + 2920);
        if ( v45 )
          v45(v33, (unsigned int)v26, (unsigned int)(v28 - cy), 0LL);
      }
    }
LABEL_36:
    v11 = v100;
  }
  v46 = v114;
  *(_DWORD *)(v102 + 64) = v113;
  *(_DWORD *)(v102 + 68) = v46;
  if ( v19 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Pointer", v19);
    v47 = GreGetCurrentThreadCrossSessionCheck();
    if ( v47 )
    {
      v48 = (*((_BYTE *)v47 + 12))-- == 1;
      if ( v48 )
        *(_QWORD *)v47 &= ~0x10uLL;
      if ( !*(_QWORD *)v47 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v19);
  }
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v110);
  if ( v11 )
    *(_DWORD *)(v11 + 344) ^= ((unsigned __int8)*(_DWORD *)(v11 + 344) ^ v112) & 1;
  v49 = v111;
  EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v111);
  v50 = KeGetCurrentThread();
  v51 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v91 = W32GetCurrentWin32kSessionId(),
        v92 = PsGetCurrentThreadProcess(),
        v91 == (unsigned int)PsGetProcessSessionIdEx(v92)) )
  {
    v52 = (__int64 *)PsGetThreadWin32Thread(v50);
    if ( v52 )
      v51 = *v52;
  }
  v53 = v51 + 8;
  v54 = -v51;
  v55 = (_QWORD *)(v53 & -(__int64)(v54 != 0));
  if ( v55 )
  {
    v48 = (*(_BYTE *)((v53 & -(__int64)(v54 != 0)) + 9))-- == 1;
    if ( v48 )
      *v55 &= ~2uLL;
    if ( !*v55 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal(v49);
}
