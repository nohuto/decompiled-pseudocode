/*
 * XREFs of ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 *     GdiProcessCallout @ 0x140179DD0 (GdiProcessCallout.c)
 * Callees:
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1400146F8 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1400147BC (-vCleanupBrushes@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x140014B30 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140014C24 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140014D00 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140015300 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1400153DC (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140015DB8 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HmgNextOwned @ 0x14001F530 (HmgNextOwned.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x140023540 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002357C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x1400897A0 (-vReleaseCurrentpMapProcForSurfaces@@YAXXZ.c)
 *     bDeletePalette @ 0x1400BF950 (bDeletePalette.c)
 *     HmgSetLock @ 0x1401268B8 (HmgSetLock.c)
 *     EngDeleteDriverObj @ 0x1401CD5B0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1401CD6C0 (EngLockDriverObj.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 GrepCloseCurrentProcess(void)
{
  unsigned int v0; // r15d
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r14
  PDEV *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  int (*v11)(void); // rax
  void (__fastcall *v12)(_QWORD); // rax
  int (*v13)(void); // rax
  void (__fastcall *v14)(_QWORD); // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int (*v17)(void); // rax
  void (*v18)(void); // rax
  __int64 v19; // rcx
  unsigned int v20; // edi
  int (*v22)(void); // rax
  void (__fastcall *v23)(HDRVOBJ *, PVOID **, PVOID *); // rax
  void (*v24)(void); // rax
  __int64 v25; // r14
  __int64 CurrentProcessWin32Process; // rax
  int (*v27)(void); // rax
  void (__fastcall *v28)(_QWORD); // rax
  HDRVOBJ v29; // rbx
  char v30; // cl
  int (*v31)(void); // rax
  void (*v32)(void); // rax
  int (*v33)(void); // rax
  void (__fastcall *v34)(HDRVOBJ); // rax
  HDRVOBJ hdo; // [rsp+60h] [rbp+40h] BYREF
  PVOID *v36; // [rsp+68h] [rbp+48h] BYREF
  PVOID Buffer; // [rsp+70h] [rbp+50h] BYREF

  v0 = 1;
  v1 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v4 = *(_QWORD *)(W32GetSessionState(v3, v2) + 88);
  v7 = *(_QWORD **)(W32GetSessionState(v6, v5) + 88);
  GreAcquireSemaphore<19,>(v7);
  v8 = (PDEV *)v7[481];
  v9 = 0LL;
  if ( v8 )
  {
    v9 = v7[481];
    PDEV::IncrementClientReferenceCount(v8);
  }
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *v7);
  for ( ; v9; v9 = hdevEnumerate<0>((PDEV *)v9) )
  {
    if ( (*(_DWORD *)(v9 + 40) & 0x8000) != 0 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(v9 + 1776) + 56LL);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( v25 == CurrentProcessWin32Process )
        *(_QWORD *)(*(_QWORD *)(v9 + 1776) + 56LL) = 0LL;
    }
  }
  if ( *(_DWORD *)(v4 + 3032) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(18);
    v31 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2312LL);
    if ( v31 )
    {
      if ( v31() >= 0 )
      {
        v32 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2320LL);
        if ( v32 )
          v32();
      }
    }
  }
  vCleanupDCs((unsigned int)v1, v10);
  MultiUserGreCleanupHmgRemoveAllLocks(10);
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2328LL);
  if ( v11 )
  {
    if ( v11() >= 0 )
    {
      v12 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2336LL);
      if ( v12 )
        v12((unsigned int)v1);
    }
  }
  MultiUserGreCleanupHmgRemoveAllLocks(16);
  vCleanupBrushes(v1);
  DxLddmCleanupAtProcessDestroy(v1);
  v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2344LL);
  if ( v13 )
  {
    if ( v13() >= 0 )
    {
      v14 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2352LL);
      if ( v14 )
        v14((unsigned int)v1);
    }
  }
  if ( *(_DWORD *)(v4 + 3032) )
  {
    vReleaseCurrentpMapProcForSurfaces();
    *(_QWORD *)(v4 + 4264) = 0LL;
    *(_QWORD *)(v4 + 3768) = 0LL;
    *(_QWORD *)(v4 + 3800) = 0LL;
    *(_QWORD *)(v4 + 3792) = 0LL;
  }
  MultiUserGreCleanupHmgRemoveAllLocks(5);
  vCleanupSurfaces(v1);
  vGarbageCollectObjects(v16, v15);
  if ( *(_DWORD *)(v4 + 3032) )
    *(_QWORD *)(v4 + 2240) = 0LL;
  MultiUserGreCleanupHmgRemoveAllLocks(9);
  vCleanupLCSPs(v1);
  if ( *(_DWORD *)(v4 + 3032) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(21);
    v27 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2360LL);
    if ( v27 )
    {
      if ( v27() >= 0 )
      {
        v28 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2368LL);
        if ( v28 )
          v28((unsigned int)v1);
      }
    }
    if ( *(_DWORD *)(v4 + 3032) )
    {
      *(_QWORD *)(v4 + 4152) = 0LL;
      *(_QWORD *)(v4 + 4160) = 0LL;
    }
  }
  MultiUserGreCleanupHmgRemoveAllLocks(4);
  MultiUserGreCleanupHmgRemoveAllLocks(0);
  vCleanupRegionsAndPaths(v1);
  if ( *(_DWORD *)(v4 + 3032) )
    goto LABEL_29;
  v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2376LL);
  if ( v17 )
  {
    if ( v17() >= 0 )
    {
      v18 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2384LL);
      if ( v18 )
        v18();
    }
  }
  if ( *(_DWORD *)(v4 + 3032) )
  {
LABEL_29:
    hdo = 0LL;
    v36 = 0LL;
    Buffer = 0LL;
    v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2392LL);
    if ( v22 && v22() >= 0 )
    {
      v23 = *(void (__fastcall **)(HDRVOBJ *, PVOID **, PVOID *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                + 2400LL);
      if ( v23 )
        v23(&hdo, &v36, &Buffer);
      if ( *(_QWORD *)hdo )
        GreDeleteFastMutex(*(PVOID *)hdo);
      if ( *v36 )
        GreDeleteFastMutex(*v36);
      if ( Buffer )
        GreDeleteFastMutex(Buffer);
    }
    v24 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1376LL);
    if ( v24 )
      v24();
  }
  vRemoveRefPalettes(v1);
  v19 = 0LL;
  hdo = 0LL;
  while ( 1 )
  {
    v20 = HmgNextOwned(v19, (unsigned int)v1, &hdo);
    if ( !v20 )
      break;
    v29 = hdo;
    v30 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v0 = bDeletePalette(hdo);
    }
    else if ( v30 == 6 )
    {
      v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2408LL);
      if ( v33 )
      {
        if ( v33() >= 0 )
        {
          v34 = *(void (__fastcall **)(HDRVOBJ))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2416LL);
          if ( v34 )
            v34(v29);
        }
      }
    }
    else if ( v30 == 28 )
    {
      HmgSetLock(hdo);
      EngLockDriverObj(v29);
      EngDeleteDriverObj(v29, 1, 1);
    }
    else
    {
      v0 = 0;
    }
    v19 = v20;
  }
  return v0;
}
