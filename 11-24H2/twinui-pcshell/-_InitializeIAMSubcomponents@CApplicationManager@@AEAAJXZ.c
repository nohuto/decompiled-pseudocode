/*
 * XREFs of ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18009F930
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18009F1F4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18008FA98 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance@CClassicWindowManager@@SAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A12E8 (-s_CreateInstance@CClassicWindowManager@@SAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX.c)
 *     ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A276C (-s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1800A3BC8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FFF1C (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 *     ?s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F4A88 (-s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameFactory@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1801FDD00 (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 *     ??0CImmersiveApplicationTransitionHelper@@QEAA@XZ @ 0x1802182F4 (--0CImmersiveApplicationTransitionHelper@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x18022A90C (--$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveAppli.c)
 *     ?s_CreateInstance@CAppViewManager@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1802AC028 (-s_CreateInstance@CAppViewManager@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPE.c)
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1802B1008 (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ?s_CreateInstance@CImmersiveWindowManager@@SAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B9248 (-s_CreateInstance@CImmersiveWindowManager@@SAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance@CFallbackWindow@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1802BC5A4 (-s_CreateInstance@CFallbackWindow@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180679D28 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_InitializeIAMSubcomponents(IUnknown *punkSite)
{
  IUnknown *v2; // rdi
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  CCriticalFailureHandler *v5; // rcx
  int Instance; // ebx
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  const struct _GUID *v9; // rcx
  CCriticalFailureHandler *v10; // rcx
  CCriticalFailureHandler *v11; // rcx
  IUnknown **v12; // rdi
  const struct _GUID *v13; // rcx
  CCriticalFailureHandler *v14; // rcx
  CCriticalFailureHandler *v15; // rcx
  const struct _GUID *v16; // rdx
  CCriticalFailureHandler *v17; // rcx
  CCriticalFailureHandler *v18; // rcx
  const struct _GUID *v19; // rcx
  CCriticalFailureHandler *v20; // rcx
  void *v21; // rax
  CImmersiveApplicationTransitionHelper *v22; // rdi
  CCriticalFailureHandler *v23; // rcx
  CCriticalFailureHandler *v24; // rcx
  CCriticalFailureHandler *v25; // rcx
  const struct _GUID *v26; // rdx
  CCriticalFailureHandler *v27; // rcx
  void *v28; // rax
  CRealmActivationHistory *v29; // rdi
  const struct _GUID *v30; // rdx
  void *v31; // rcx
  unsigned __int64 *v33; // [rsp+20h] [rbp-10h]
  unsigned __int64 *v34; // [rsp+28h] [rbp-8h]
  void *lpVtbl; // [rsp+70h] [rbp+40h] BYREF
  void *v36; // [rsp+78h] [rbp+48h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, IUnknown *); // [rsp+80h] [rbp+50h] BYREF

  v2 = punkSite + 72;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[72]);
  Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)&v2->lpVtbl);
  LODWORD(lpVtbl) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v5, (int *)&lpVtbl);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
    goto LABEL_8;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)&lpVtbl,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x137Au,
      v33,
      v34);
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
  {
LABEL_8:
    v36 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
    Instance = CImmersiveWindowManager::s_CreateInstance(
                 (struct IIAMServiceProvider *)((unsigned __int64)&punkSite[24] & -(__int64)(punkSite != 0LL)),
                 (const struct _GUID *)&punkSite[24],
                 &v36);
    LODWORD(lpVtbl) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v7, (int *)&lpVtbl);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
      goto LABEL_15;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        (int *)&lpVtbl,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x1380u,
        v33,
        v34);
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
    {
LABEL_15:
      Instance = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, void *))v2->lpVtbl->QueryInterface + 5))(
                   v2->lpVtbl,
                   v36);
      LODWORD(lpVtbl) = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v8, (int *)&lpVtbl);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
        goto LABEL_22;
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v8,
          (int *)&lpVtbl,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1383u,
          v33,
          v34);
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
      {
LABEL_22:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[71]);
        Instance = CFallbackWindow::s_CreateInstance(v9, (void **)&punkSite[71].lpVtbl);
        LODWORD(lpVtbl) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v10, (int *)&lpVtbl);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
          goto LABEL_29;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v10,
            (int *)&lpVtbl,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x138Au,
            v33,
            v34);
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
        {
LABEL_29:
          Instance = IUnknown_SetSite((IUnknown *)punkSite[71].lpVtbl, punkSite);
          LODWORD(lpVtbl) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v11, (int *)&lpVtbl);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
            goto LABEL_36;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v11,
              (int *)&lpVtbl,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x138Du,
              v33,
              v34);
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
          {
LABEL_36:
            v12 = (IUnknown **)&punkSite[66];
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[66]);
            Instance = CImmersiveMode::s_CreateInstance(v13, (void **)&punkSite[66].lpVtbl);
            LODWORD(lpVtbl) = Instance;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v14, (int *)&lpVtbl);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
              goto LABEL_43;
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v14,
                (int *)&lpVtbl,
                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                0x1395u,
                v33,
                v34);
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
            {
LABEL_43:
              Instance = IUnknown_SetSite(*v12, punkSite);
              LODWORD(lpVtbl) = Instance;
              if ( !CRVPrivate::cfhImmersiveShellStartup )
              {
                CCriticalFailureHandler::GetFakeFailure(v15, (int *)&lpVtbl);
                CRVPrivate::cfhImmersiveShellStartup = 1;
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
                goto LABEL_50;
              if ( Instance != -2147024882 && Instance != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v15,
                  (int *)&lpVtbl,
                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  0x1398u,
                  v33,
                  v34);
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
              {
LABEL_50:
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[67]);
                Instance = CClassicWindowManager::s_CreateInstance(
                             (struct IImmersiveSystemModeInternal *)*v12,
                             v16,
                             (void **)&punkSite[67].lpVtbl);
                LODWORD(lpVtbl) = Instance;
                if ( !CRVPrivate::cfhImmersiveShellStartup )
                {
                  CCriticalFailureHandler::GetFakeFailure(v17, (int *)&lpVtbl);
                  CRVPrivate::cfhImmersiveShellStartup = 1;
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                  goto LABEL_57;
                if ( Instance != -2147024882 && Instance != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v17,
                    (int *)&lpVtbl,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    0x13A0u,
                    v33,
                    v34);
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                {
LABEL_57:
                  Instance = IUnknown_SetSite((IUnknown *)punkSite[67].lpVtbl, punkSite);
                  LODWORD(lpVtbl) = Instance;
                  if ( !CRVPrivate::cfhImmersiveShellStartup )
                  {
                    CCriticalFailureHandler::GetFakeFailure(v18, (int *)&lpVtbl);
                    CRVPrivate::cfhImmersiveShellStartup = 1;
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                    goto LABEL_64;
                  if ( Instance != -2147024882 && Instance != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v18,
                      (int *)&lpVtbl,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      0x13A3u,
                      v33,
                      v34);
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                  {
LABEL_64:
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[68]);
                    Instance = CRotationManagerSync::s_CreateInstance(v19, (void **)&punkSite[68].lpVtbl);
                    LODWORD(lpVtbl) = Instance;
                    if ( !CRVPrivate::cfhImmersiveShellStartup )
                    {
                      CCriticalFailureHandler::GetFakeFailure(v20, (int *)&lpVtbl);
                      CRVPrivate::cfhImmersiveShellStartup = 1;
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                      goto LABEL_71;
                    if ( Instance != -2147024882 && Instance != -2144862209 )
                    {
                      CCriticalFailureHandler::HandleFailure(
                        v20,
                        (int *)&lpVtbl,
                        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        0x13ABu,
                        v33,
                        v34);
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                    {
LABEL_71:
                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[69]);
                      punkSite[69].lpVtbl = 0LL;
                      v21 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
                      lpVtbl = v21;
                      v22 = 0LL;
                      if ( v21 )
                      {
                        v22 = CImmersiveApplicationTransitionHelper::CImmersiveApplicationTransitionHelper((CImmersiveApplicationTransitionHelper *)v21);
                        lpVtbl = 0LL;
                      }
                      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&lpVtbl);
                      if ( v22 )
                        Instance = (**(__int64 (__fastcall ***)(CImmersiveApplicationTransitionHelper *, GUID *, IUnknown *))v22)(
                                     v22,
                                     &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                                     punkSite + 69);
                      else
                        Instance = -2147024882;
                      if ( v22 )
                        (*(void (__fastcall **)(CImmersiveApplicationTransitionHelper *))(*(_QWORD *)v22 + 16LL))(v22);
                      LODWORD(lpVtbl) = Instance;
                      if ( !CRVPrivate::cfhImmersiveShellStartup )
                      {
                        CCriticalFailureHandler::GetFakeFailure(v23, (int *)&lpVtbl);
                        CRVPrivate::cfhImmersiveShellStartup = 1;
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                        goto LABEL_85;
                      if ( Instance != -2147024882 && Instance != -2144862209 )
                      {
                        CCriticalFailureHandler::HandleFailure(
                          v23,
                          (int *)&lpVtbl,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          0x13B5u,
                          v33,
                          v34);
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                      {
LABEL_85:
                        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[74]);
                        lpVtbl = punkSite[69].lpVtbl;
                        punkSite[74].lpVtbl = 0LL;
                        v37 = 0LL;
                        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
                        Instance = Microsoft::WRL::Details::MakeAndInitialize<CCharmsWindowManager,ICharmWindowManagerInternal,IImmersiveApplicationTransitionHelper * &>(
                                     &v37,
                                     &lpVtbl);
                        if ( Instance >= 0 )
                          Instance = (**v37)(v37, &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee, punkSite + 74);
                        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
                        LODWORD(lpVtbl) = Instance;
                        if ( !CRVPrivate::cfhImmersiveShellStartup )
                        {
                          CCriticalFailureHandler::GetFakeFailure(v24, (int *)&lpVtbl);
                          CRVPrivate::cfhImmersiveShellStartup = 1;
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                          goto LABEL_94;
                        if ( Instance != -2147024882 && Instance != -2144862209 )
                        {
                          CCriticalFailureHandler::HandleFailure(
                            v24,
                            (int *)&lpVtbl,
                            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            0x13BCu,
                            v33,
                            v34);
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                        {
LABEL_94:
                          Instance = IUnknown_SetSite((IUnknown *)punkSite[74].lpVtbl, punkSite);
                          LODWORD(lpVtbl) = Instance;
                          if ( !CRVPrivate::cfhImmersiveShellStartup )
                          {
                            CCriticalFailureHandler::GetFakeFailure(v25, (int *)&lpVtbl);
                            CRVPrivate::cfhImmersiveShellStartup = 1;
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                            goto LABEL_101;
                          if ( Instance != -2147024882 && Instance != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              v25,
                              (int *)&lpVtbl,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x13BFu,
                              v33,
                              v34);
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                          {
LABEL_101:
                            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[75]);
                            Instance = CAppViewManager::s_CreateInstance(
                                         (struct IImmersiveApplicationManagerInternal *)((unsigned __int64)&punkSite[30] & -(__int64)(punkSite != 0LL)),
                                         v26,
                                         (void **)&punkSite[75].lpVtbl);
                            LODWORD(lpVtbl) = Instance;
                            if ( !CRVPrivate::cfhImmersiveShellStartup )
                            {
                              CCriticalFailureHandler::GetFakeFailure(v27, (int *)&lpVtbl);
                              CRVPrivate::cfhImmersiveShellStartup = 1;
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                              goto LABEL_108;
                            if ( Instance != -2147024882 && Instance != -2144862209 )
                            {
                              CCriticalFailureHandler::HandleFailure(
                                v27,
                                (int *)&lpVtbl,
                                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                0x13C7u,
                                v33,
                                v34);
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                            {
LABEL_108:
                              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[65]);
                              punkSite[65].lpVtbl = 0LL;
                              v28 = operator new(0x198uLL, (const struct std::nothrow_t *)&std::nothrow);
                              lpVtbl = v28;
                              v29 = 0LL;
                              if ( v28 )
                              {
                                v29 = CRealmActivationHistory::CRealmActivationHistory(
                                        (CRealmActivationHistory *)v28,
                                        (struct IImmersiveApplicationManagerInternal *)((unsigned __int64)&punkSite[30] & -(__int64)(punkSite != 0LL)));
                                lpVtbl = 0LL;
                              }
                              Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&lpVtbl);
                              if ( v29 )
                                Instance = (**(__int64 (__fastcall ***)(CRealmActivationHistory *, GUID *, IUnknown *))v29)(
                                             v29,
                                             &GUID_a98c0472_db38_4f6d_ba6f_6bf60514f600,
                                             punkSite + 65);
                              else
                                Instance = -2147024882;
                              if ( v29 )
                                (*(void (__fastcall **)(CRealmActivationHistory *))(*(_QWORD *)v29 + 16LL))(v29);
                              if ( Instance >= 0 )
                              {
                                Instance = IUnknown_SetSite((IUnknown *)punkSite[65].lpVtbl, punkSite);
                                if ( Instance >= 0 )
                                {
                                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[76]);
                                  Instance = CApplicationFrameService_CreateInstance(
                                               (struct IImmersiveApplicationManagerInternal *)((unsigned __int64)&punkSite[30] & -(__int64)(punkSite != 0LL)),
                                               v30,
                                               (void **)&punkSite[76].lpVtbl);
                                  if ( Instance >= 0 )
                                  {
                                    Instance = IUnknown_SetSite((IUnknown *)punkSite[76].lpVtbl, punkSite);
                                    if ( Instance >= 0 )
                                    {
                                      lpVtbl = CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
                                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[77]);
                                      Instance = Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
                                                   &punkSite[77],
                                                   &lpVtbl);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v31 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  return (unsigned int)Instance;
}
