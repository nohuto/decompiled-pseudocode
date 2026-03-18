/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400B7AD0
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1400B7A90 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140022104 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x1400B7EB8 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ?vLockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1400B7FA0 (-vLockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x1400B7FD4 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x1400B7FF4 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1400B8070 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1400B817C (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x1400B8230 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // r14
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  struct _GRETHREAD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  void *v19; // rbx
  unsigned int v20; // eax
  int v21; // eax
  struct _GRETHREAD **v22; // r15
  struct _GRETHREAD **v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdx
  int v27; // r8d
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // r8d
  bool v36; // zf
  __int64 v37; // rdx
  int v38; // r8d
  __int64 v39; // rdx
  int v40; // r8d
  _QWORD v41[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v42; // [rsp+60h] [rbp-20h] BYREF
  __int64 CurrentProcess; // [rsp+68h] [rbp-18h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  int v45; // [rsp+78h] [rbp-8h]
  struct _ERESOURCE *v46; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v47; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v48; // [rsp+D0h] [rbp+50h] BYREF

  v2 = 0LL;
  if ( !*(_QWORD *)(a1 + 248) && (*(_DWORD *)(a1 + 116) & 1) == 0
    || !_bittest16((const signed __int16 *)(a1 + 102), 0xBu) )
  {
    return 0LL;
  }
  v4 = a1 + 272;
  v5 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  while ( 1 )
  {
    KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 40) + 64LL), UserRequest, 0, 0, 0LL);
    if ( !*(_DWORD *)v4 || *(_DWORD *)v4 == v5 )
      break;
    v17 = *(_QWORD *)(v4 + 40);
    ++*(_DWORD *)(v4 + 4);
    KeReleaseMutex(*(PRKMUTEX *)(v17 + 64), 0);
    KeWaitForSingleObject(*(PVOID *)(v4 + 40), UserRequest, 0, 0, 0LL);
  }
  v6 = *(_DWORD *)(v4 + 8) + 1;
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 8) = v6;
  if ( v6 > *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v6;
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 40) + 64LL), 0);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)v4);
  v46 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v7) + 88) + 936LL);
  v8 = v46;
  GreAcquireSemaphoreInternal(v46);
  GrepAcquireLockValidate<36>();
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  v14 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v14 = (_QWORD *)(v11 & CurrentProcessWin32Process);
  }
  v15 = *(_QWORD **)(a1 + 264);
  if ( v15 == v14 )
  {
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"MapRot", (int)v8, v12);
      v16 = GreGetCurrentThreadCrossSessionCheck();
      if ( v16 )
        *(_QWORD *)v16 &= ~0x1000000000uLL;
      GreReleaseSemaphoreSharedInternal(v8);
    }
    return 1LL;
  }
  if ( v15 )
  {
    v18 = (_QWORD *)(a1 + 528);
    v11 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v11 + 8) != a1 + 528 )
      goto LABEL_42;
    v14 = *(_QWORD **)(a1 + 536);
    if ( (_QWORD *)*v14 != v18 )
      goto LABEL_42;
    *v14 = v11;
    *(_QWORD *)(v11 + 8) = v14;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v18 = v18;
    v19 = *(void **)(a1 + 72);
    if ( v19 )
    {
      v20 = GrepW32PidFromW32Process(*(struct _W32PROCESS **)(a1 + 264));
      Gre::MapViewOfSectionObj::Unmap(v20, v19);
    }
  }
  v21 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v21 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  v22 = (struct _GRETHREAD **)(a1 + 256);
  *(_QWORD *)(a1 + 256) = 0LL;
  v23 = (struct _GRETHREAD **)(a1 + 256);
  if ( v21 )
  {
LABEL_29:
    v28 = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
    if ( v28 )
    {
      v22 = v23;
      if ( !*v28 )
        v28 = 0LL;
    }
    v29 = v28 + 28;
    v30 = (_QWORD *)(a1 + 528);
    v31 = *v29;
    if ( *(_QWORD **)(*v29 + 8LL) == v29 )
    {
      *v30 = v31;
      *(_QWORD *)(a1 + 536) = v29;
      *(_QWORD *)(v31 + 8) = v30;
      *v29 = v30;
      *v22 = GreGetCurrentThread((__int64)v30);
      v33 = PsGetCurrentProcessWin32Process(v32);
      if ( v33 )
      {
        v34 = -(__int64)(*(_QWORD *)v33 != 0LL);
        v33 &= v34;
      }
      *(_QWORD *)(a1 + 264) = v33;
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v36 = (*(_BYTE *)(a1 + 102) & 1) == 0;
        *(_QWORD *)(a1 + 72) = v2;
        if ( v36 )
          *(_QWORD *)(a1 + 80) = v2 + (unsigned int)(*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88));
        else
          *(_QWORD *)(a1 + 80) = v2;
      }
      SEMOBJ<36>::vUnlock(&v46, v34, v35);
      SEMOBJ<36>::vUnlock(&v46, v37, v38);
      return 0LL;
    }
LABEL_42:
    __fastfail(3u);
  }
  v24 = *(unsigned int *)(a1 + 64);
  v25 = *(_QWORD *)(a1 + 248);
  v41[1] = 0LL;
  v42 = 0LL;
  v41[0] = 0LL;
  v44 = 0LL;
  v45 = 5;
  v48 = 0LL;
  v47 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v11, v14, v12, v13);
  if ( (int)MmMapViewOfSection(v25, CurrentProcess, &v42, 0LL, v24, &v48, &v47, 2, 0x400000, 4) >= 0 )
  {
    v2 = v42;
    v23 = (struct _GRETHREAD **)(a1 + 256);
    goto LABEL_29;
  }
  SEMOBJ<36>::vUnlock(&v46, v26, v27);
  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)v4);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)v4);
  if ( v45 != 5 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v41);
  SEMOBJ<36>::vUnlock(&v46, v39, v40);
  return 2LL;
}
