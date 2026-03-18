/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140020190
 * Callers:
 *     GreGetClipBox @ 0x140039310 (GreGetClipBox.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x140020FF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphoreShared @ 0x140021030 (EngAcquireSemaphoreShared.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x140021E3C (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x140034950 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x140034BE0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1400350A0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x14003ABBC (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B140 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC1CC (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC294 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140174490 (-bCompute@DC@@QEAAHXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, struct _ERESOURCE ***a2, int a3)
{
  __int64 v3; // rbp
  int (*v7)(void); // rax
  void (__fastcall *v8)(DEVLOCKOBJ *, _QWORD); // rax
  int v9; // r13d
  struct _ERESOURCE **v10; // r12
  struct _KTHREAD *v11; // rbp
  __int64 v12; // rdi
  int v13; // r15d
  __int64 *v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rdx
  char v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rax
  struct _KTHREAD *v22; // rbp
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 *v25; // rbx
  __int64 v26; // rdx
  char v27; // cl
  struct _ERESOURCE **v28; // rdx
  struct _ERESOURCE *v29; // rbx
  __int64 ExclusiveWaiters_low; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  _QWORD *v33; // rax
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  struct _KTHREAD *v43; // rbp
  __int64 v44; // rdi
  __int64 *v45; // rax
  __int64 *v46; // rbx
  __int64 v47; // rdx
  char v48; // cl
  int v49; // edx
  struct _ERESOURCE **v50; // rbx
  struct _ERESOURCE **v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  struct _ERESOURCE *v55; // rdi
  int v56; // r8d
  struct _GRETHREAD *v57; // rax
  struct _ERESOURCE *v58; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 *ThreadWin32Thread; // rax
  __int64 v61; // rdx
  struct _ERESOURCE *v62; // rdi
  struct _KTHREAD *v63; // r15
  __int64 v64; // rbp
  __int64 *v65; // rax
  __int64 v66; // rdx
  int (*v67)(void); // rax
  __int64 (__fastcall *v68)(DEVLOCKOBJ *, struct XDCOBJ *); // rax
  int v69; // ecx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  struct _DC_ATTR *UserAttr; // rax
  int (*v75)(void); // rax
  __int64 (__fastcall *v76)(struct XDCOBJ *, char *, char *, char *); // rax
  int v77; // ecx
  bool v78; // al
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  struct _ERESOURCE *v85; // r8
  int v86; // edx
  struct _ERESOURCE *v87; // rcx
  __int64 v88; // rcx
  int v89; // eax
  unsigned int v90; // eax
  __int64 v91; // rcx
  int v92; // edx
  int v93; // edx
  __int64 v94; // rax
  int v95; // ebx
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // ebx
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // ebx
  __int64 v102; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v106; // rax
  int v107; // ebx
  __int64 v108; // rax
  int v109; // r8d
  unsigned __int64 i; // rcx
  int v111; // eax
  unsigned __int64 k; // rcx
  int v113; // eax
  int v114; // r8d
  unsigned __int64 j; // rcx
  int v116; // eax

  v3 = 0LL;
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = **a2;
  if ( !a3 )
  {
    v75 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2056LL);
    if ( v75 && v75() >= 0 )
    {
      v76 = *(__int64 (__fastcall **)(struct XDCOBJ *, char *, char *, char *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable()
                                                                                          + 24)
                                                                              + 2064LL);
      v77 = v76 ? v76((struct XDCOBJ *)a2, (char *)this + 120, (char *)this + 112, (char *)this + 28) : 0;
      v78 = v77 == 1;
    }
    else
    {
      v78 = 0;
    }
    if ( !v78 )
    {
      *((_DWORD *)this + 6) &= ~1u;
      return 0LL;
    }
  }
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 768LL);
  if ( v7 )
  {
    if ( v7() >= 0 )
    {
      v8 = *(void (__fastcall **)(DEVLOCKOBJ *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 776LL);
      if ( v8 )
        v8(this, 0LL);
    }
  }
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v9 = 0;
  v10 = a2[2];
  if ( (*((_DWORD *)*a2 + 9) & 0x200) == 0 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( !CurrentThreadNonPaged )
      goto LABEL_141;
    v80 = 0LL;
    v20 = *CurrentThreadNonPaged == 0LL;
    v81 = *CurrentThreadNonPaged + 8LL;
    if ( !v20 )
      v80 = v81;
    if ( !v80 || !*(_DWORD *)(v80 + 348) )
    {
LABEL_141:
      *((_DWORD *)this + 6) |= 0x80000u;
      v82 = (_QWORD *)W32GetCurrentThreadNonPaged();
      if ( v82 )
      {
        v83 = 0LL;
        v20 = *v82 == 0LL;
        v84 = *v82 + 8LL;
        if ( !v20 )
          v83 = v84;
        if ( v83 )
          ++*(_DWORD *)(v83 + 348);
      }
    }
LABEL_70:
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
      {
        if ( *((_QWORD *)this + 1) )
          GreReleaseSemaphoreShared<3,>(v10);
        if ( v9 )
          goto LABEL_215;
LABEL_148:
        *((_DWORD *)this + 6) &= ~1u;
        return 0LL;
      }
    }
    else if ( *((_QWORD *)this + 1) )
    {
      goto LABEL_75;
    }
    if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute((DC *)*a2) )
    {
      if ( *((_QWORD *)this + 1) )
        GreReleaseSemaphoreShared<3,>(v10);
      if ( v9 )
        GreReleaseSemaphoreShared<2,>(v10);
      goto LABEL_148;
    }
LABEL_75:
    v50 = *a2;
    if ( (!(*a2)[146] || ((_DWORD)v50[5] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)*a2))
      && !v50[144]
      && (!v50[145] || ((_DWORD)v50[5] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v50))
      && !v50[143] )
    {
      goto LABEL_148;
    }
    if ( (*((_DWORD *)this + 6) & 0x20000) == 0
      && (*((_DWORD *)this + 6) & 0x1000) != 0
      && (*((_DWORD *)v50 + 9) & 0x200) != 0 )
    {
      if ( !*((_QWORD *)this + 14) )
      {
        v51 = &v50[(_DWORD)v50[5] & 1];
        *((_DWORD *)v50 + 256) = *((_DWORD *)v51 + 254);
        *((_DWORD *)v50 + 257) = *((_DWORD *)v51 + 255);
        *((_DWORD *)v50 + 262) = *((_DWORD *)v50 + 258);
        *((_DWORD *)v50 + 263) = *((_DWORD *)v50 + 259);
        *((_DWORD *)v50 + 264) = *((_DWORD *)v50 + 260);
        *((_DWORD *)v50 + 265) = *((_DWORD *)v50 + 261);
        *((_DWORD *)v50 + 10) |= 1u;
        if ( (*((_DWORD *)v50 + 9) & 0x4000) != 0 )
        {
          v87 = v50[62];
          if ( v87[2].ExclusiveWaiters || (HIDWORD(v87[1].SystemResourcesList.Blink) & 1) != 0 )
          {
            KeWaitForSingleObject(v87[3].SystemResourcesList.Flink[4].Flink, UserRequest, 0, 0, 0LL);
            ++HIDWORD(v50[62][3].SystemResourcesList.Blink);
            KeReleaseMutex((PRKMUTEX)v50[62][3].SystemResourcesList.Flink[4].Flink, 0);
          }
        }
      }
      v52 = (_QWORD *)W32GetCurrentThreadNonPaged();
      if ( v52 )
      {
        v53 = 0LL;
        v20 = *v52 == 0LL;
        v54 = *v52 + 8LL;
        if ( !v20 )
          v53 = v54;
        if ( v53 )
        {
          *(_QWORD *)(v53 + 296) = *a2;
          if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
          {
            *(_DWORD *)(v53 + 344) |= 1u;
            (*a2)[247] = 0LL;
            v55 = *v10 + 8;
            EngAcquireSemaphoreShared((HSEMAPHORE)v55);
            GrepAcquireLockValidate<14>();
            *(_DWORD *)(v53 + 356) = *((_DWORD *)v10 + 1070);
            EtwTraceGreLockReleaseSemaphore((__int64)L"VisRgnUniqueness", (int)v55, v56);
            v57 = GreGetCurrentThreadCrossSessionCheck();
            if ( v57 )
            {
              v20 = (*((_BYTE *)v57 + 22))-- == 1;
              if ( v20 )
                *(_QWORD *)v57 &= ~0x4000uLL;
            }
            GreReleaseSemaphoreSharedInternal(v55);
          }
        }
      }
    }
    if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v58 = *v10;
      EtwTraceGreLockReleaseSemaphore((__int64)L"DCVisRgn", *(_DWORD *)v10 + 728, v34);
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentProcess = PsGetCurrentProcess(),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v3 = *ThreadWin32Thread;
        v61 = 0LL;
        if ( v3 )
          v61 = v3 + 8;
        if ( v61 )
        {
          v20 = (*(_BYTE *)(v61 + 11))-- == 1;
          if ( v20 )
            *(_QWORD *)v61 &= ~8uLL;
        }
      }
      GreReleaseSemaphoreSharedInternal(v58 + 7);
    }
    if ( v9 )
    {
      v62 = *v10;
      EtwTraceGreLockReleaseSemaphore((__int64)L"GreLock", *(_DWORD *)v10 + 1144, v34);
      v63 = KeGetCurrentThread();
      v64 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v94 = PsGetCurrentProcess(),
            v95 = PsGetProcessSessionIdEx(v94),
            v96 = PsGetCurrentThreadProcess(),
            v95 == (unsigned int)PsGetProcessSessionIdEx(v96)) )
      {
        v65 = (__int64 *)PsGetThreadWin32Thread(v63);
        if ( v65 )
          v64 = *v65;
        v66 = 0LL;
        if ( v64 )
          v66 = v64 + 8;
        if ( v66 )
        {
          v20 = (*(_BYTE *)(v66 + 10))-- == 1;
          if ( v20 )
            *(_QWORD *)v66 &= ~4uLL;
        }
      }
      GreReleaseSemaphoreSharedInternal(v62 + 11);
    }
    if ( (*((_DWORD *)this + 6) & 0x20000) != 0 )
      return 1LL;
    v67 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 768LL);
    if ( v67 && v67() >= 0 )
    {
      v68 = *(__int64 (__fastcall **)(DEVLOCKOBJ *, struct XDCOBJ *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                    + 776LL);
      if ( v68 )
        v69 = v68(this, (struct XDCOBJ *)a2);
      else
        v69 = 0;
      v70 = *((_DWORD *)this + 6);
      if ( v69 )
      {
        if ( (v70 & 0x81000) == 0 )
          return 1LL;
        v71 = *((_QWORD *)this + 4);
        if ( v71 )
        {
LABEL_127:
          *(_DWORD *)(v71 + 40) |= 2u;
          *((_BYTE *)this + 104) = 1;
          return 1LL;
        }
        XDCOBJ::vLockIgnoreAttributes((DEVLOCKOBJ *)((char *)this + 32), (HDC)**a2);
        v72 = *((_QWORD *)this + 4);
        if ( !v72 )
          goto LABEL_125;
        if ( (*(_DWORD *)(v72 + 44) & 2) == 0 )
        {
          if ( (*((_DWORD *)this + 16) & 2) == 0 )
          {
            UserAttr = XDCOBJ::GetUserAttr((DEVLOCKOBJ *)((char *)this + 32));
            if ( UserAttr )
            {
              if ( !(unsigned int)DC::SaveAttributes(*((DC **)this + 4), UserAttr) )
              {
                OBJECT::InterlockedDecrementExclusiveLockCount(*((OBJECT **)this + 4));
                *((_QWORD *)this + 4) = 0LL;
                goto LABEL_125;
              }
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) |= 2u;
          *((_DWORD *)this + 10) = 1;
        }
        v88 = *((_QWORD *)this + 4);
        v89 = *(_DWORD *)(v88 + 520);
        if ( (v89 & 4) != 0 )
        {
          v90 = v89 & 0xFFFFFFFB;
          *(_DWORD *)(v88 + 520) = v90;
          v91 = *(_QWORD *)(v88 + 976);
          v92 = *(_DWORD *)(v91 + 340);
          if ( (v90 & 1) != 0 )
            v93 = v92 | 0x16090;
          else
            v93 = v92 | 0x6090;
          *(_DWORD *)(v91 + 340) = v93;
        }
LABEL_125:
        v71 = *((_QWORD *)this + 4);
        if ( v71 )
        {
          *((_BYTE *)this + 105) = 0;
          goto LABEL_127;
        }
        return 1LL;
      }
    }
    else
    {
      v70 = *((_DWORD *)this + 6);
    }
    *((_DWORD *)this + 6) = v70 & 0xFFFFFFFE;
    return 0LL;
  }
  *((_QWORD *)this + 1) = *v10 + 6;
  EtwTraceGreLockAcquireSemaphoreShared(L"DynamicModeChange", &(*v10)[6]);
  EngAcquireSemaphoreShared((HSEMAPHORE)&(*v10)[6]);
  v11 = KeGetCurrentThread();
  v12 = 0LL;
  v13 = 37;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v97 = PsGetCurrentProcess(),
        v98 = PsGetProcessSessionIdEx(v97),
        v99 = PsGetCurrentThreadProcess(),
        v98 == (unsigned int)PsGetProcessSessionIdEx(v99)) )
  {
    v14 = (__int64 *)PsGetThreadWin32Thread(v11);
    if ( v14 )
      v12 = *v14;
    v15 = 0LL;
    if ( v12 )
      v15 = (__int64 *)(v12 + 8);
    if ( v15 )
    {
      if ( (*v15 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v15 & 2) == 0 )
      {
        v109 = 37;
        for ( i = 0LL; i < 0x40; ++i )
        {
          v111 = i;
          v16 = *v15;
          if ( !_bittest64(&v16, i) )
            v111 = v109;
          v109 = v111;
        }
        if ( v111 > 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      v17 = *((_BYTE *)v15 + 9);
      *((_BYTE *)v15 + 9) = v17 + 1;
      if ( !v17 )
        *v15 |= 2uLL;
    }
  }
  *((_DWORD *)this + 6) |= 8u;
  v18 = (_QWORD *)W32GetCurrentThreadNonPaged();
  if ( !v18 )
    goto LABEL_224;
  v19 = 0LL;
  v20 = *v18 == 0LL;
  v21 = *v18 + 8LL;
  if ( !v20 )
    v19 = v21;
  if ( !v19 || !*(_DWORD *)(v19 + 348) )
  {
LABEL_224:
    if ( !ExIsResourceAcquiredSharedLite(*v10 + 11) )
    {
      EtwTraceGreLockAcquireSemaphoreShared(L"GreLock", &(*v10)[11]);
      EngAcquireSemaphoreShared((HSEMAPHORE)&(*v10)[11]);
      v22 = KeGetCurrentThread();
      v23 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v106 = PsGetCurrentProcess(),
            v107 = PsGetProcessSessionIdEx(v106),
            v108 = PsGetCurrentThreadProcess(),
            v107 == (unsigned int)PsGetProcessSessionIdEx(v108)) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v22);
        if ( v24 )
          v23 = *v24;
        v25 = 0LL;
        if ( v23 )
          v25 = (__int64 *)(v23 + 8);
        if ( v25 )
        {
          if ( (*v25 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*v25 & 4) == 0 )
          {
            v114 = 37;
            for ( j = 0LL; j < 0x40; ++j )
            {
              v116 = j;
              v26 = *v25;
              if ( !_bittest64(&v26, j) )
                v116 = v114;
              v114 = v116;
            }
            if ( v116 > 2 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
          }
          v27 = *((_BYTE *)v25 + 10);
          *((_BYTE *)v25 + 10) = v27 + 1;
          if ( !v27 )
            *v25 |= 4uLL;
        }
      }
      v9 = 1;
    }
  }
  v28 = *a2;
  v29 = (*a2)[6];
  if ( ((__int64)(*a2)[122]->SystemResourcesList.Flink & 1) != 0 || (*((_DWORD *)v28 + 9) & 0x8000) != 0 )
  {
    ExclusiveWaiters_low = LODWORD(v29->ExclusiveWaiters);
    if ( ((__int64)v29->ExclusiveWaiters & 0x1000001) == 1 )
    {
      if ( HIDWORD(v29[25].SystemResourcesList.Flink) == 5
        || (ExclusiveWaiters_low & 0x20000) != 0
        || (ExclusiveWaiters_low = *(_QWORD *)&v29[24].NumberOfSharedWaiters,
            ((ExclusiveWaiters_low + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0)
        && (*(_DWORD *)(ExclusiveWaiters_low + 160) & 0x800000) != 0 )
      {
        v31 = *(_QWORD *)&v29->ActiveCount;
        v32 = *(_QWORD *)(W32GetSessionState(ExclusiveWaiters_low) + 88);
        if ( ((__int64)v29[20].SharedWaiters & 0x400) == 0
          && ((__int64)v29->ExclusiveWaiters & 0x48000000) == 0
          && ((__int64)v29[17].ExclusiveWaiters & 0x8000000) == 0
          && (*(_DWORD *)(v31 + 40) & 0x1000000) == 0
          && *(_DWORD *)(v32 + 4128) )
        {
          goto LABEL_45;
        }
      }
    }
    v28 = *a2;
  }
  v85 = v28[8];
  *(_QWORD *)this = v85;
  *((_QWORD *)this + 2) = (*a2)[6];
  if ( v9 == 1 && v85 == &(*v10)[11] )
  {
    GreReleaseSemaphoreShared<2,>(v10);
    v9 = 0;
  }
  if ( *(struct _ERESOURCE **)this == &(*v10)[11] )
  {
    *((_DWORD *)this + 6) |= 0x100000u;
    GreAcquireSemaphore<2,>(v10);
  }
  else
  {
    GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 2));
  }
  v86 = *((_DWORD *)this + 6);
  if ( (v86 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
    *((_DWORD *)this + 6) = v86 | 0x200;
LABEL_45:
  v33 = (_QWORD *)W32GetCurrentThreadNonPaged();
  v3 = 0LL;
  if ( !v33 )
    goto LABEL_50;
  v35 = 0LL;
  v20 = *v33 == 0LL;
  v36 = *v33 + 8LL;
  if ( !v20 )
    v35 = v36;
  if ( !v35 || !*(_DWORD *)(v35 + 348) )
  {
LABEL_50:
    *((_DWORD *)this + 6) |= 0x1000u;
    v37 = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( v37 )
    {
      v38 = 0LL;
      v20 = *v37 == 0LL;
      v39 = *v37 + 8LL;
      if ( !v20 )
        v38 = v39;
      if ( v38 )
      {
        *(_QWORD *)(v38 + 304) = 0LL;
        *(_QWORD *)(v38 + 296) = 0LL;
      }
    }
    v40 = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( v40 )
    {
      v41 = 0LL;
      v20 = *v40 == 0LL;
      v42 = *v40 + 8LL;
      if ( !v20 )
        v41 = v42;
      if ( v41 )
        ++*(_DWORD *)(v41 + 348);
    }
    EtwTraceGreLockAcquireSemaphoreShared(L"DCVisRgn", &(*v10)[7]);
    EngAcquireSemaphoreShared((HSEMAPHORE)&(*v10)[7]);
    v43 = KeGetCurrentThread();
    v44 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v100 = PsGetCurrentProcess(),
          v101 = PsGetProcessSessionIdEx(v100),
          v102 = PsGetCurrentThreadProcess(),
          v101 == (unsigned int)PsGetProcessSessionIdEx(v102)) )
    {
      v45 = (__int64 *)PsGetThreadWin32Thread(v43);
      if ( v45 )
        v44 = *v45;
      v3 = 0LL;
      v46 = 0LL;
      if ( v44 )
        v46 = (__int64 *)(v44 + 8);
      if ( v46 )
      {
        if ( (*v46 & 0xFFFFFFFFFFFFFFF8uLL) != 0 && (*v46 & 8) == 0 )
        {
          for ( k = 0LL; k < 0x40; ++k )
          {
            v113 = k;
            v47 = *v46;
            if ( !_bittest64(&v47, k) )
              v113 = v13;
            v13 = v113;
          }
          if ( v113 > 3 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
        }
        v48 = *((_BYTE *)v46 + 11);
        *((_BYTE *)v46 + 11) = v48 + 1;
        if ( !v48 )
          *v46 |= 8uLL;
      }
    }
    else
    {
      v3 = 0LL;
    }
  }
  v49 = *((_DWORD *)*a2 + 9);
  if ( (v49 & 0x1000) == 0 || (v49 & 0x4000) != 0 )
    goto LABEL_70;
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    GreReleaseSemaphoreShared<3,>(v10);
  if ( !v9 )
    goto LABEL_148;
LABEL_215:
  GreReleaseSemaphoreShared<2,>(v10);
  *((_DWORD *)this + 6) &= ~1u;
  return 0LL;
}
