/*
 * XREFs of ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800312D0
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800759E0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x1801F9780 (CDelayIAMOperations--CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180031F14 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800320E0 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x1800321C0 (-StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180032494 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180036EC0 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180043214 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1800693A8 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18008E2BC (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18008E604 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x18008ED78 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18008F7AC (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18008FD24 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18011EC70 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18011EC70.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180164368 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180184BB0 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?SetStopResult@?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801ACA00 (-SetStopResult@-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x1801E1B0C (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801EBF28 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1801EF6D4 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1802ECE7C (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1802ED02C (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CApplicationManager::OnShellHookMessage(CApplicationManager *this, unsigned __int64 a2, __int64 a3)
{
  HWND v3; // r15
  CApplicationManager *v6; // rdi
  unsigned __int64 v7; // r12
  int v8; // ebx
  int v9; // eax
  DWORD CurrentThreadId; // ebx
  HRESULT ApartmentType; // esi
  int v12; // eax
  HWND v13; // r14
  HWND v14; // rbx
  unsigned int v15; // r12d
  bool v16; // r15
  __int64 *v17; // rcx
  __int64 v18; // rax
  char v19; // al
  struct IImmersiveMonitor *v20; // rbx
  _DWORD *v21; // rbx
  unsigned __int64 v22; // r14
  unsigned __int64 i; // rdi
  char v24; // di
  volatile signed __int32 *v25; // rcx
  _QWORD **v26; // rcx
  _QWORD *v27; // rax
  struct IImmersiveApplication *v28; // rcx
  __int64 v30; // rcx
  unsigned __int8 (__fastcall *v31)(__int64, HWND); // rax
  HWND v32; // rbx
  struct ISyncIAMEventHandler *v33; // rcx
  struct IObjectArray *v34; // rcx
  __int64 v35; // rcx
  RTL_SRWLOCK *v36; // rbx
  struct CDelayIAMOperations::COperation *v37; // r15
  int v38; // eax
  __int64 v39; // rdx
  void *v40; // rbx
  struct IImmersiveMonitor **cchValue; // [rsp+20h] [rbp-E0h]
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  bool v43; // [rsp+58h] [rbp-A8h] BYREF
  struct IImmersiveMonitor *v44; // [rsp+60h] [rbp-A0h] BYREF
  void (__fastcall ***v45)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+68h] [rbp-98h] BYREF
  APTTYPE pAptType; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v47; // [rsp+74h] [rbp-8Ch] BYREF
  int v48; // [rsp+78h] [rbp-88h] BYREF
  struct ISyncIAMEventHandler *v49; // [rsp+80h] [rbp-80h] BYREF
  struct IObjectArray *v50; // [rsp+88h] [rbp-78h] BYREF
  struct IImmersiveApplication *v51; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  HWND v53; // [rsp+A0h] [rbp-60h]
  unsigned int v54; // [rsp+A8h] [rbp-58h]
  char v55; // [rsp+ACh] [rbp-54h]
  char v56; // [rsp+ADh] [rbp-53h]
  unsigned int v57; // [rsp+B0h] [rbp-50h]
  char v58; // [rsp+B4h] [rbp-4Ch]
  HWND hWnd[2]; // [rsp+B8h] [rbp-48h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+C8h] [rbp-38h] BYREF
  HWND v61; // [rsp+D0h] [rbp-30h] BYREF
  int v62; // [rsp+D8h] [rbp-28h]
  _DWORD *v63; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v64; // [rsp+E8h] [rbp-18h]
  __int64 v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v67; // [rsp+100h] [rbp+0h]
  HRESULT v68; // [rsp+108h] [rbp+8h]
  char v69[16]; // [rsp+110h] [rbp+10h] BYREF
  void **v70; // [rsp+120h] [rbp+20h] BYREF
  int v71; // [rsp+128h] [rbp+28h] BYREF
  char v72; // [rsp+12Ch] [rbp+2Ch]
  int v73; // [rsp+150h] [rbp+50h] BYREF
  const char *v74; // [rsp+158h] [rbp+58h]
  __int64 v75; // [rsp+160h] [rbp+60h]
  char v76; // [rsp+168h] [rbp+68h]
  int v77; // [rsp+170h] [rbp+70h]
  char v78[152]; // [rsp+178h] [rbp+78h] BYREF
  __int128 v79; // [rsp+210h] [rbp+110h]
  int v80; // [rsp+220h] [rbp+120h]
  __int64 v81; // [rsp+228h] [rbp+128h]
  int *v82; // [rsp+230h] [rbp+130h]
  void *v83; // [rsp+238h] [rbp+138h] BYREF
  _QWORD v84[2]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD *v85; // [rsp+250h] [rbp+150h]
  int v86; // [rsp+258h] [rbp+158h]
  int *v87; // [rsp+260h] [rbp+160h]
  char v88; // [rsp+268h] [rbp+168h]
  WCHAR Filename[264]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4C8h] [rbp+3C8h]

  v3 = (HWND)a3;
  v42 = a3;
  v6 = (CApplicationManager *)((char *)this - 160);
  v7 = ((unsigned __int64)this + 232) & -(__int64)(this != (CApplicationManager *)160);
  v45 = (void (__fastcall ***)(_QWORD, GUID *, struct IImmersiveApplication **))v7;
  v67 = v7;
  v8 = *(_DWORD *)(v7 + 0x2C);
  if ( v8 == 2 )
    goto LABEL_4;
  v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    goto LABEL_3;
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
    {
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_18;
    }
    v12 = 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
  }
  else
  {
    v12 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v12 == 1 )
  {
    if ( v8 == 1 )
    {
      if ( (unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v9 = 2;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      }
      else
      {
        v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      }
LABEL_3:
      if ( v9 != 1 )
        goto LABEL_18;
    }
LABEL_4:
    if ( *(_DWORD *)(v7 + 40) == -3 )
      goto LABEL_18;
    CurrentThreadId = 0;
    pAptType = APTTYPE_STA;
    pAptQualifier = APTTYPEQUALIFIER_NONE;
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    if ( ApartmentType >= 0 )
    {
      switch ( pAptType )
      {
        case APTTYPE_STA:
          goto LABEL_10;
        case APTTYPE_MTA:
          goto LABEL_12;
        case APTTYPE_NA:
          CurrentThreadId = -1;
LABEL_12:
          if ( CurrentThreadId != *(_DWORD *)(v7 + 40) )
            ApartmentType = -2147417842;
LABEL_132:
          if ( ApartmentType < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xC8,
              (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
              (const char *)(unsigned int)ApartmentType);
            goto LABEL_19;
          }
          goto LABEL_18;
        case APTTYPE_MAINSTA:
LABEL_10:
          CurrentThreadId = GetCurrentThreadId();
          goto LABEL_12;
      }
    }
    if ( ApartmentType < 0 )
      goto LABEL_132;
    goto LABEL_12;
  }
LABEL_18:
  ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v7) ? 0x8001010E : 0;
LABEL_19:
  v68 = ApartmentType;
  v52 = a2;
  v53 = v3;
  v54 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  *(_OWORD *)hWnd = 0LL;
  if ( a2 == 17
    || a2 == 18
    || a2 == 19
    || a2 == 20
    || a2 == 26
    || a2 == 29
    || a2 == 32
    || a2 == 34
    || (v55 = 1, a2 == 65533) )
  {
    v55 = 0;
  }
  v51 = 0LL;
  v71 = 0;
  v72 = 0;
  v76 = 0;
  v73 = 0;
  v74 = "OnShellHookMessage";
  v75 = 0LL;
  v77 = 0;
  v79 = 0LL;
  memset_0(v78, 0, sizeof(v78));
  v80 = 1;
  v81 = 0LL;
  v82 = &v71;
  v83 = 0LL;
  v84[0] = 0LL;
  v84[1] = &v70;
  v85 = 0LL;
  v86 = 0;
  v87 = &v73;
  v88 = 0;
  v70 = &IamTraceLogging::OnShellHookMessage::`vftable';
  IamTraceLogging::OnShellHookMessage::StartActivity((IamTraceLogging::OnShellHookMessage *)&v70, a2, v3);
  if ( a2 - 65534 > 1
    && CApplicationManager::_AnalyzeShellNotification(v6, (struct CApplicationManager::HSHELL_DATA *)&v52) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v52 <= 0x19 )
    {
      if ( v52 != 25 )
      {
        if ( v52 == 17 )
        {
          CApplicationManager::_HandleWindowCreation(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v52);
          goto LABEL_54;
        }
        if ( v52 == 18 )
        {
          v30 = *((_QWORD *)this + 47);
          v31 = *(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v30 + 72LL);
        }
        else
        {
          switch ( v52 )
          {
            case 0x13uLL:
              goto LABEL_98;
            case 0x14uLL:
              CApplicationManager::_HandleMonitorChanged(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v52);
              goto LABEL_54;
            case 0x15uLL:
              if ( v54 - 2 > 1 )
                goto LABEL_41;
              CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v52,
                v3);
              goto LABEL_54;
          }
          if ( v52 != 22 )
          {
            if ( v52 != 23 )
            {
              if ( v52 == 24 )
              {
LABEL_41:
                v13 = v53;
                v14 = v53;
                if ( hWnd[1] )
                  v14 = hWnd[1];
                v15 = v57;
                v16 = v52 == 21;
                v44 = 0LL;
                if ( GetShellWindow() != v14
                  && !(unsigned int)GetPropW(v14, L"MultimonitorActivationException")
                  && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 94) + 24LL))(*((_QWORD *)v6 + 94)) != v14 )
                {
                  cchValue = &v44;
                  (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *))(**((_QWORD **)v6 + 70) + 88LL))(
                    *((_QWORD *)v6 + 70),
                    v14,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
                }
                v17 = (__int64 *)*((_QWORD *)v6 + 67);
                v18 = *v17;
                if ( v16 )
                {
                  LODWORD(cchValue) = (_DWORD)v44;
                  v19 = (*(__int64 (__fastcall **)(__int64 *, HWND, _QWORD, _QWORD))(v18 + 24))(v17, v13, v15, 0LL);
                }
                else
                {
                  v19 = (*(__int64 (__fastcall **)(__int64 *, HWND, struct IImmersiveMonitor *))(v18 + 32))(
                          v17,
                          v13,
                          v44);
                }
                if ( v19 )
                {
                  v20 = v44;
                  if ( !v44 )
                    goto LABEL_51;
                  v47 = 0;
                  (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)v6 + 70) + 32LL))(
                    *((_QWORD *)v6 + 70),
                    &v47);
                  if ( v47 > 1
                    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 66) + 56LL))(*((_QWORD *)v6 + 66)) == 1
                    && (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)v6 + 67) + 88LL))(
                         *((_QWORD *)v6 + 67),
                         v13) )
                  {
                    v50 = 0LL;
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v50);
                    if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(v6, v20, &v50) >= 0 )
                    {
                      v49 = 0LL;
                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
                      if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(v6, &v49) >= 0 )
                      {
                        LODWORD(cchValue) = 1;
                        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD))(*(_QWORD *)v49 + 24LL))(
                          v49,
                          v50,
                          ((unsigned __int64)v6 + 248) & -(__int64)(v6 != 0LL),
                          0LL);
                      }
                      v33 = v49;
                      if ( v49 )
                      {
                        v49 = 0LL;
                        (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v33 + 16LL))(v33);
                      }
                    }
                    v34 = v50;
                    if ( v50 )
                    {
                      v50 = 0LL;
                      ((void (__fastcall *)(struct IObjectArray *))v34->lpVtbl->Release)(v34);
                    }
                  }
                }
                v20 = v44;
LABEL_51:
                if ( v20 )
                {
                  v44 = 0LL;
                  (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
                }
                v3 = (HWND)v42;
                v7 = (unsigned __int64)v45;
              }
LABEL_54:
              ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
              goto LABEL_55;
            }
LABEL_98:
            v42 = 0LL;
            if ( v54 == 2 )
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
              v61 = v53;
              v62 = 2;
              if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v61, &v42, v69) >= 0 )
                CApplicationManager::_UpdatePerApplicationDataIfNeeded(v6, v42, v53, 0LL);
            }
            (*(void (__fastcall **)(_QWORD, HWND, _QWORD, __int64))(**((_QWORD **)v6 + 68) + 24LL))(
              *((_QWORD *)v6 + 68),
              v53,
              v54,
              v42);
            CApplicationManager::_HandleActivation2(v6, &v52, 1LL);
            v35 = v42;
            if ( v42 )
            {
              v42 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            }
            goto LABEL_54;
          }
          v30 = *((_QWORD *)this + 47);
          v31 = *(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v30 + 64LL);
        }
        v32 = v53;
        if ( !v31(v30, v53) )
          (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 54) + 32LL))(*((_QWORD *)this + 54), v32);
        goto LABEL_54;
      }
LABEL_125:
      CApplicationManager::_HandleWindowBecameOwned(v6, v3, (const struct CApplicationManager::HSHELL_DATA *const)&v52);
      goto LABEL_54;
    }
    if ( v52 != 26 )
    {
      if ( v52 != 27 )
      {
        if ( v52 == 28 )
          goto LABEL_125;
        if ( v52 == 29 )
          goto LABEL_118;
        if ( v52 != 30 )
        {
          if ( v52 == 32 )
          {
            v45 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
            v61 = v53;
            v62 = 2;
            if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v61, &v45, 0LL) >= 0 )
            {
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v51);
              (**v45)(v45, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v51);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
          }
          else if ( v52 == 34 && v54 == 2 )
          {
            CApplicationManager::_HandleApplicationRequestActivation(
              v6,
              (const struct CApplicationManager::HSHELL_DATA *const)&v52);
          }
          goto LABEL_54;
        }
      }
      CApplicationManager::_HandleWindowChangedOwner(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v52, v3);
      goto LABEL_54;
    }
LABEL_118:
    CApplicationManager::_HandleWindowBecameUnowned(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v52);
    goto LABEL_54;
  }
LABEL_55:
  if ( v52 == 32 )
  {
    CApplicationManager::_HandleCloseRequested(v6, (const struct CApplicationManager::HSHELL_DATA *)&v52, v51);
  }
  else if ( v52 == 65534 || v52 == 0xFFFF )
  {
    CApplicationManager::OnMessage(
      (CApplicationManager *)((char *)this + 40),
      (v52 != 0xFFFF) + 1025,
      0LL,
      (__int64)v3,
      &v43);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v21 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v22 = *((_QWORD *)this + 102);
  if ( v22 )
  {
    v21 = (_DWORD *)*((_QWORD *)this + 101);
    v63 = v21;
    v65 = *((_QWORD *)this + 103);
    v64 = v22;
    v66 = *((_QWORD *)this + 104);
    *((_QWORD *)this + 101) = 0LL;
    *((_QWORD *)this + 103) = 0LL;
    *((_QWORD *)this + 102) = 0LL;
    *((_QWORD *)this + 104) = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = 0LL; i < v22; ++i )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v37 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 80), v21[i]);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v37 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v37 + 8LL))(v37);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v37)(v37, 1LL);
    }
  }
  if ( v21 )
    CoTaskMemFree(v21);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v70, 0LL);
  v70 = &IamTraceLogging::OnShellHookMessage::`vftable';
  v24 = 1;
  v25 = (volatile signed __int32 *)v83;
  if ( !v83 )
    goto LABEL_64;
  v36 = (RTL_SRWLOCK *)((char *)v83 + 264);
  AcquireSRWLockExclusive((PSRWLOCK)v83 + 33);
  v25 = (volatile signed __int32 *)v83;
  if ( !v83 || *(_DWORD *)v83 != 1 )
  {
    v24 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v83);
    v25 = (volatile signed __int32 *)v83;
  }
  if ( v36 )
  {
    ReleaseSRWLockExclusive(v36);
    v25 = (volatile signed __int32 *)v83;
  }
  if ( v24 )
  {
LABEL_64:
    if ( *v82 == 1 )
    {
      v38 = v82[22];
      v48 = v38;
      v39 = 2147942974LL;
      if ( v38 < 0 )
        v39 = (unsigned int)v38;
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v82,
        v39,
        &v48);
      ((void (__fastcall *)(void ***))v70[1])(&v70);
      v25 = (volatile signed __int32 *)v83;
    }
  }
  if ( v86 )
  {
    if ( v86 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3BE,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        (int)cchValue);
    v86 = 0;
    v26 = (_QWORD **)v84[0];
    while ( 1 )
    {
      v27 = *v26;
      if ( !*v26 )
        break;
      if ( v27 == v84 )
      {
        *v26 = v85;
        break;
      }
      v26 = (_QWORD **)(v27 + 2);
      v84[0] = v27 + 2;
    }
    v84[0] = 0LL;
    v25 = (volatile signed __int32 *)v83;
  }
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
    {
      v40 = v83;
      if ( v83 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v83 + 8);
        operator delete(v40, (const struct std::nothrow_t *)0x110);
      }
    }
    v83 = 0LL;
    v7 = v67;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(&v71);
  v28 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  CoTaskMemFree(hWnd[0]);
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v7);
  return 0LL;
}
