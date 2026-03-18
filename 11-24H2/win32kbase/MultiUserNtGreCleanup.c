/*
 * XREFs of MultiUserNtGreCleanup @ 0x140089C68
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     FreeThreadBufferWithTag @ 0x14001BCC0 (FreeThreadBufferWithTag.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x14003D9D0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?MultiUserGreHmgOwnAll@@YAXXZ @ 0x14008985C (-MultiUserGreHmgOwnAll@@YAXXZ.c)
 *     ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x14008A1C4 (-FreeSessionGlobalsArea@Base@Gre@@YAXXZ.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x14008A220 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x14008A370 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     DrvNotifySessionStateChange @ 0x14008A3A0 (DrvNotifySessionStateChange.c)
 *     ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x14008A468 (-MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14008A594 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1401991EC (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x14019DA38 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?Destroy@ScanLookAsideList@@QEAAXXZ @ 0x14019DDD0 (-Destroy@ScanLookAsideList@@QEAAXXZ.c)
 *     ?UninitializeTypeIsolation@@YAXXZ @ 0x14019E714 (-UninitializeTypeIsolation@@YAXXZ.c)
 *     ?CleanupRustCode@@YAXXZ @ 0x14019F210 (-CleanupRustCode@@YAXXZ.c)
 *     ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1401D0E9C (-Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MultiUserNtGreCleanup(Gre::Base *a1)
{
  __int64 v1; // rcx
  Gre::Base *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int (*v8)(void); // rax
  void (*v9)(void); // rax
  int (*v10)(void); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  void (*v13)(void); // rax
  char *v14; // rcx
  char *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  char *v19; // rcx
  char *v20; // rcx
  char *v21; // rcx
  int (*v22)(void); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 (*v25)(void); // rax
  char **v26; // rdi
  void *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int (*v30)(void); // rax
  __int64 (*v31)(void); // rax
  struct PDEV *v32; // rax
  int (*v33)(void); // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 (*v36)(void); // rax
  struct PDEV *v37; // rax
  char *v38; // rcx
  char *v39; // rcx
  char *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdi
  PVOID *v43; // rsi
  __int64 v44; // rbp
  char *v45; // rcx
  char *v46; // rcx
  char *v47; // rcx
  void *v48; // rcx
  void *v49; // rcx
  void *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  void **v53; // rbx
  __int64 v54; // rdi
  void *v55; // rsi
  __int64 UserSessionState; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int (*v59)(void); // rax
  void (*v60)(void); // rax
  int (*v61)(void); // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  void (*v64)(void); // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  Gre::Base *v67; // rcx
  int (*v68)(void); // rax
  __int64 v69; // rdx
  void (*v70)(void); // rax

  if ( Gre::Base::IsSessionGlobalsAreaAllocated(a1) )
  {
    v3 = *(_QWORD *)(W32GetSessionState(v1) + 88);
    if ( *(_BYTE *)(v3 + 8) )
    {
      *(_DWORD *)(v3 + 3032) = 1;
      MultiUserGreHmgOwnAll();
      v7 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24);
      v8 = *(int (**)(void))(v7 + 1072);
      if ( v8 )
      {
        if ( v8() >= 0 )
        {
          v7 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 24);
          v9 = *(void (**)(void))(v7 + 1080);
          if ( v9 )
            v9();
        }
      }
      if ( *(_QWORD *)(v3 + 5672) )
        GrepCloseCurrentProcess();
      v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 24) + 1120LL);
      if ( v10 )
      {
        if ( v10() >= 0 )
        {
          v13 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 24) + 1128LL);
          if ( v13 )
            v13();
        }
      }
      v14 = *(char **)(v3 + 1736);
      if ( v14 )
      {
        GreDeleteFastMutex(v14);
        *(_QWORD *)(v3 + 1736) = 0LL;
      }
      v15 = *(char **)(v3 + 2840);
      if ( v15 )
      {
        GreDeleteFastMutex(v15);
        *(_QWORD *)(v3 + 2840) = 0LL;
      }
      v16 = 0LL;
      v17 = 8LL;
      do
      {
        v15 = *(char **)(v16 + *(_QWORD *)(W32GetSessionState(v15) + 88) + 4296);
        if ( v15 )
          FreeThreadBufferWithTag((__int64)v15);
        v16 += 32LL;
        --v17;
      }
      while ( v17 );
      v19 = *(char **)(v3 + 32);
      if ( v19 )
        GreDeleteFastMutex(v19);
      v20 = *(char **)(v3 + 24);
      if ( v20 )
        GreDeleteFastMutex(v20);
      v21 = *(char **)(v3 + 3760);
      if ( v21 )
      {
        GreDeleteFastMutex(v21);
        *(_QWORD *)(v3 + 3760) = 0LL;
      }
      v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v18) + 24) + 1104LL);
      if ( v22 && v22() >= 0 )
      {
        v25 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 24) + 1112LL);
        v26 = v25 ? (char **)v25() : 0LL;
        if ( *v26 )
        {
          GreDeleteFastMutex(*v26);
          *v26 = 0LL;
        }
      }
      v27 = *(void **)(*(_QWORD *)(v3 + 4232) + 24LL);
      if ( v27 )
        ZwClose(v27);
      v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v23) + 24);
      v30 = *(int (**)(void))(v29 + 1136);
      if ( v30 )
      {
        if ( v30() >= 0 )
        {
          v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v28) + 24);
          v31 = *(__int64 (**)(void))(v29 + 1144);
          if ( v31 )
          {
            v32 = (struct PDEV *)v31();
            if ( v32 )
              PDEV::Free(v32);
          }
        }
      }
      v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v28) + 24) + 1152LL);
      if ( v33 )
      {
        if ( v33() >= 0 )
        {
          v36 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v35, v34) + 24) + 1160LL);
          if ( v36 )
          {
            v37 = (struct PDEV *)v36();
            if ( v37 )
              PDEV::Free(v37);
          }
        }
      }
      MultiUserGreCleanupDrivers();
      MultiUserDrvCleanupGraphicsDeviceList();
      DrvNotifySessionStateChange(1LL);
      v38 = *(char **)(v3 + 2192);
      if ( v38 )
      {
        GreDeleteFastMutex(v38);
        *(_QWORD *)(v3 + 2192) = 0LL;
      }
      v39 = *(char **)(v3 + 2208);
      if ( v39 )
      {
        GreDeleteFastMutex(v39);
        *(_QWORD *)(v3 + 2208) = 0LL;
      }
      v40 = *(char **)(v3 + 2200);
      if ( v40 )
      {
        GreDeleteFastMutex(v40);
        *(_QWORD *)(v3 + 2200) = 0LL;
      }
      UninitializeTypeIsolation();
      v42 = *(_QWORD *)(W32GetSessionState(v41) + 88);
      if ( *(_QWORD *)(v42 + 5688) )
      {
        v43 = (PVOID *)(v42 + 5704);
        v44 = 3LL;
        do
        {
          if ( *v43 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(*v43);
          v43 += 2;
          --v44;
        }
        while ( v44 );
        ExFreePoolWithTag(*(PVOID *)(v42 + 5688), 0);
        *(_QWORD *)(v42 + 5688) = 0LL;
      }
      v45 = *(char **)(v3 + 1144);
      if ( v45 )
      {
        GreDeleteFastMutex(v45);
        *(_QWORD *)(v3 + 1144) = 0LL;
      }
      v46 = *(char **)(v3 + 1152);
      if ( v46 )
      {
        GreDeleteFastMutex(v46);
        *(_QWORD *)(v3 + 1152) = 0LL;
      }
      while ( 1 )
      {
        v47 = *(char **)(v3 + 3816);
        if ( !v47 )
          break;
        *(_QWORD *)(v3 + 3816) = *(_QWORD *)v47;
        GreDeleteFastMutex(v47);
      }
      v48 = *(void **)(v3 + 5672);
      if ( v48 )
      {
        GdiHandleManager::Destroy(v48);
        *(_QWORD *)(v3 + 5672) = 0LL;
      }
      v49 = *(void **)(v3 + 1768);
      if ( v49 )
      {
        MmUnmapViewInSessionSpace(v49);
        *(_QWORD *)(v3 + 1768) = 0LL;
      }
      v50 = *(void **)(v3 + 2184);
      if ( v50 )
      {
        ObfDereferenceObject(v50);
        *(_QWORD *)(v3 + 2184) = 0LL;
      }
      ScanLookAsideList::Destroy((ScanLookAsideList *)(v3 + 4136));
      v53 = (void **)(v3 + 1792);
      v54 = 31LL;
      do
      {
        v55 = *v53;
        if ( *v53 )
        {
          UserSessionState = W32GetUserSessionState(v52);
          NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
            (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
            v55);
          *v53 = 0LL;
        }
        ++v53;
        --v54;
      }
      while ( v54 );
      v58 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v52, v51) + 24);
      v59 = *(int (**)(void))(v58 + 1184);
      if ( v59 )
      {
        if ( v59() >= 0 )
        {
          v58 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v58, v57) + 24);
          v60 = *(void (**)(void))(v58 + 1192);
          if ( v60 )
            v60();
        }
      }
      v61 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v58, v57) + 24) + 848LL);
      if ( v61 )
      {
        if ( v61() >= 0 )
        {
          v64 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v63, v62) + 24) + 856LL);
          if ( v64 )
            v64();
        }
      }
      MultiUserGreCleanupEngResources();
      v67 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v66, v65) + 24);
      v68 = (int (*)(void))*((_QWORD *)v67 + 345);
      if ( v68 )
      {
        if ( v68() >= 0 )
        {
          v67 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v67, v69) + 24);
          v70 = (void (*)(void))*((_QWORD *)v67 + 346);
          if ( v70 )
            v70();
        }
      }
      Gre::Base::FreeSessionGlobalsArea(v67);
      CleanupRustCode();
    }
    else
    {
      Gre::Base::FreeSessionGlobalsArea(v2);
    }
  }
  return 1LL;
}
