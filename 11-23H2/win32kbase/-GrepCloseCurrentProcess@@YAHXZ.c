/*
 * XREFs of ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8
 * Callers:
 *     GdiProcessCallout @ 0x1C0037960 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C00A8AE8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0033C08 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0034BE0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00350B8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C003537C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0035730 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C00357E4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     HmgNextOwned @ 0x1C0035880 (HmgNextOwned.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0035EF8 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0035FD4 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgSetLock @ 0x1C008A3C0 (HmgSetLock.c)
 *     bDeletePalette @ 0x1C008B2F0 (bDeletePalette.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x1C00BF264 (-vReleaseCurrentpMapProcForSurfaces@@YAXXZ.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00D33D8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     EngDeleteDriverObj @ 0x1C016B160 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C016B280 (EngLockDriverObj.c)
 */

__int64 GrepCloseCurrentProcess(void)
{
  unsigned int v0; // r15d
  unsigned __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 i; // rax
  PDEV *v5; // rdi
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edi
  HDRVOBJ v10; // rbx
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 CurrentProcessWin32Process; // rax
  HDRVOBJ hdo; // [rsp+60h] [rbp+40h] BYREF
  void **v16; // [rsp+68h] [rbp+48h] BYREF
  void *v17; // [rsp+70h] [rbp+50h] BYREF

  v0 = 1;
  v1 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  for ( i = hdevEnumerate<0>(0LL); ; i = hdevEnumerate<0>(v5) )
  {
    v5 = (PDEV *)i;
    if ( !i )
      break;
    if ( (*(_DWORD *)(i + 40) & 0x8000) != 0 )
    {
      v12 = *(_QWORD *)(i + 1760);
      v13 = *(_QWORD *)(v12 + 48);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( v13 == CurrentProcessWin32Process )
        *(_QWORD *)(*((_QWORD *)v5 + 220) + 48LL) = 0LL;
    }
  }
  if ( *(_DWORD *)(v3 + 3192) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    if ( qword_1C0294D58 )
    {
      if ( (int)qword_1C0294D58() >= 0 && qword_1C0294D60 )
        qword_1C0294D60();
    }
  }
  vCleanupDCs(v1);
  MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  if ( qword_1C0294D68 && (int)qword_1C0294D68() >= 0 && qword_1C0294D70 )
    qword_1C0294D70((unsigned int)v1);
  MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  hdo = 0LL;
  v6 = 0;
  while ( 1 )
  {
    v6 = HmgNextOwned(v6, (unsigned int)v1, &hdo);
    if ( !v6 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 0x10 )
      bDeleteBrush((HBRUSH)hdo);
  }
  DxLddmCleanupAtProcessDestroy(v1);
  if ( qword_1C0294D78 && (int)qword_1C0294D78() >= 0 && qword_1C0294D80 )
    qword_1C0294D80((unsigned int)v1);
  if ( *(_DWORD *)(v3 + 3192) )
  {
    vReleaseCurrentpMapProcForSurfaces();
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    *(_QWORD *)(v3 + 6000) = 0LL;
    *(_QWORD *)(v3 + 6032) = 0LL;
    *(_QWORD *)(v3 + 6024) = 0LL;
  }
  MultiUserGreCleanupHmgRemoveAllLocks(5u);
  vCleanupSurfaces(v1);
  vGarbageCollectObjects();
  if ( *(_DWORD *)(v3 + 3192) )
  {
    *(_QWORD *)(v3 + 6392) = 0LL;
    *(_QWORD *)(v3 + 6400) = 0LL;
  }
  MultiUserGreCleanupHmgRemoveAllLocks(4u);
  vCleanupRegions(v1);
  if ( *(_DWORD *)(v3 + 3192) )
    *(_QWORD *)(v3 + 2400) = 0LL;
  MultiUserGreCleanupHmgRemoveAllLocks(9u);
  hdo = 0LL;
  v7 = 0;
  while ( 1 )
  {
    v7 = HmgNextOwned(v7, (unsigned int)v1, &hdo);
    if ( !v7 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 9 )
      bDeleteColorSpace(hdo, 0LL);
  }
  if ( *(_DWORD *)(v3 + 3192) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( qword_1C0294D88 )
    {
      if ( (int)qword_1C0294D88() >= 0 && qword_1C0294D90 )
        qword_1C0294D90((unsigned int)v1);
    }
  }
  MultiUserGreCleanupHmgRemoveAllLocks(0);
  if ( *(_DWORD *)(v3 + 3192) )
    goto LABEL_48;
  if ( qword_1C0294D98 && (int)qword_1C0294D98() >= 0 && qword_1C0294DA0 )
    qword_1C0294DA0();
  if ( *(_DWORD *)(v3 + 3192) )
  {
LABEL_48:
    hdo = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    if ( qword_1C0294DA8 && (int)qword_1C0294DA8() >= 0 )
    {
      if ( qword_1C0294DB0 )
        qword_1C0294DB0(&hdo, &v16, &v17);
      if ( *(_QWORD *)hdo )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(void **)hdo);
      if ( *v16 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v16);
      if ( v17 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v17);
    }
    if ( qword_1C0294A70 )
      qword_1C0294A70();
  }
  vRemoveRefPalettes(v1);
  hdo = 0LL;
  v8 = 0;
  while ( 1 )
  {
    v8 = HmgNextOwned(v8, (unsigned int)v1, &hdo);
    if ( !v8 )
      break;
    v10 = hdo;
    v11 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v0 = bDeletePalette(hdo);
    }
    else if ( v11 == 6 )
    {
      if ( qword_1C0294DB8 && (int)qword_1C0294DB8() >= 0 && qword_1C0294DC0 )
        qword_1C0294DC0(v10);
    }
    else if ( v11 == 28 )
    {
      HmgSetLock(hdo);
      EngLockDriverObj(v10);
      EngDeleteDriverObj(v10, 1, 1);
    }
    else
    {
      v0 = 0;
    }
  }
  return v0;
}
