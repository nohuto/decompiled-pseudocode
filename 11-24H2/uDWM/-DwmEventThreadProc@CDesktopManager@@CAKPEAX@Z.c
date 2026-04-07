/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008DE70
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001FF10 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x180026830 (-ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z.c)
 *     ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ @ 0x180027010 (-CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180045D50 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800478B4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z @ 0x18007DCC0 (-ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18008117C (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180084144 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x18008A2E0 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18008E5C8 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x180098DB8 (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800A7474 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800B88CC (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800BB5D0 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800BDCAC (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  int v2; // r15d
  char v3; // r13
  char v4; // r14
  __int64 (*v5)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v6; // rcx
  int v7; // eax
  signed int v8; // ebx
  HRESULT v9; // eax
  int Instance; // eax
  const unsigned __int16 *v11; // rdx
  HANDLE v12; // rsi
  __int64 v13; // rdx
  DWORD v14; // r12d
  char v15; // r15
  CDesktopManager *v16; // rcx
  char v17; // al
  __int64 v18; // r8
  char v19; // cl
  DWORD v20; // r8d
  bool v21; // si
  DWORD v22; // eax
  int v23; // eax
  int v24; // eax
  int updated; // eax
  signed int v26; // eax
  signed int LastError; // eax
  const unsigned __int16 *v28; // r8
  CDesktopManager *v29; // rcx
  CDesktopManager *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned int dwFlags; // [rsp+28h] [rbp-E0h]
  bool v35[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v36; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v39[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER Frequency; // [rsp+60h] [rbp-A8h] BYREF
  union _LARGE_INTEGER Msg[8]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v43[12]; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE pHandles[3]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v45[16]; // [rsp+120h] [rbp+18h] BYREF

  v2 = -2147221008;
  hObject = 0LL;
  Msg[0].QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  v3 = 0;
  v35[1] = 0;
  v4 = 0;
  v36 = 0;
  v43[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 282) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    dwFlags = 2216;
    goto LABEL_70;
  }
  v7 = CDesktopManager::RegisterWindowClass(v6, v5, &v36);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x8AAu, 0LL);
    goto LABEL_57;
  }
  v9 = CoInitializeEx(0LL, 4u);
  v2 = v9;
  LODWORD(v37) = v9;
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x8B1u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x8B2u, 0LL);
    goto LABEL_73;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 22);
  v8 = Instance;
  if ( Instance < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Instance, 0x8B4u, 0LL);
    goto LABEL_73;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v43, v11);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v26 = GetLastError();
    v8 = v26;
    if ( v26 > 0 )
      v8 = (unsigned __int16)v26 | 0x80070000;
    dwFlags = 2240;
LABEL_70:
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, dwFlags, 0LL);
    goto LABEL_73;
  }
  v4 = 1;
  v39[0] = 0;
  while ( 1 )
  {
    do
    {
      v12 = hObject;
      if ( !hObject && (int)MilCompositionEngine_GetComposedEventId(v39) >= 0 )
      {
        OpenComposedEvent(v39[0], v13, &hObject);
        v12 = hObject;
      }
      memset(&Msg[1], 0, 48);
      pHandles[0] = *(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 72LL);
      pHandles[1] = *(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 80LL);
      pHandles[2] = v12;
      v14 = 3;
      v15 = 0;
      v38 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        v17 = CDesktopManager::CheckForActiveAnimations(v16);
        v15 = v17;
        v35[1] = v12 && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) | (unsigned __int8)v17;
        if ( (unsigned __int8)EtwEventEnabled(
                                Microsoft_Windows_Dwm_Udwm_Provider_Context[0],
                                &UdwmAllAnimationFinished_Info) )
        {
          if ( v15 )
          {
            CDesktopManager::s_fFireAnimationFinished = 1;
          }
          else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
          {
            if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
              McGenEventWrite_EtwEventWriteTransfer(
                Microsoft_Windows_Dwm_Udwm_Provider_Context,
                (__int64)&UdwmAllAnimationFinished_Info,
                v18,
                1LL,
                (__int64)v45);
            CDesktopManager::s_fFireAnimationFinished = 0;
          }
        }
      }
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v38);
      if ( !v35[1] && v3 )
      {
        v19 = 1;
        v20 = 64;
LABEL_29:
        v14 = 2;
        v3 = 0;
        goto LABEL_30;
      }
      v19 = 0;
      v20 = 64;
      if ( !v35[1] )
        goto LABEL_29;
      if ( !v3 )
      {
        Msg[0].QuadPart = -1LL;
        v3 = 1;
        v20 = 0;
        v21 = 0;
        v35[0] = 0;
        goto LABEL_33;
      }
LABEL_30:
      v21 = 0;
      v35[0] = 0;
      if ( v19 )
      {
        v21 = v15;
        goto LABEL_50;
      }
      if ( !v3 )
        v20 = -1;
LABEL_33:
      v22 = MsgWaitForMultipleObjectsEx(v14, pHandles, v20, 0x1CFFu, 6u);
      if ( v22 == v14 )
      {
        while ( PeekMessageW((LPMSG)&Msg[1], 0LL, 0, 0, 1u) )
        {
          if ( Msg[2].LowPart == 18 )
            goto LABEL_56;
          DispatchMessageW((const MSG *)&Msg[1]);
          if ( !Msg[1].QuadPart )
            CDesktopManager::HandleThreadMessage(Msg[2].LowPart, (HWND)Msg[3].QuadPart, Msg[4].LowPart);
        }
      }
      else if ( v22 < 2 )
      {
        v38 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v35[0] = 0;
        v24 = CGraphicsDeviceManager::ValidateDXGIAdapterAndDevice(
                *((wil::details ***)CDesktopManager::s_pDesktopManagerInstance + 7),
                v35);
        v8 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x94Du, 0LL);
          goto LABEL_60;
        }
        v21 = !v35[0];
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v38);
      }
      else if ( v3 && ((v22 - 2) & 0xFFFFFEFF) == 0 )
      {
        v23 = CDesktopManager::ProcessAnimationTick(Msg, &Frequency, v35);
        v8 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x955u, 0LL);
          goto LABEL_56;
        }
        v21 = v35[0];
      }
LABEL_50:
      if ( Msg[2].LowPart == 18 )
        goto LABEL_56;
    }
    while ( !v21 );
    v38 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      updated = CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
      v8 = updated;
      if ( updated < 0 )
        break;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v38);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x96Eu, 0LL);
LABEL_60:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v38);
LABEL_56:
  v2 = v37;
LABEL_57:
  if ( hObject )
    CloseHandle(hObject);
LABEL_73:
  CWaitForService::Cleanup((CWaitForService *)v43);
  if ( v4 )
  {
    v38 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0, v28);
      if ( v36 )
        UnregisterClassW((LPCWSTR)v36, g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v29);
      v30 = CDesktopManager::s_pDesktopManagerInstance;
      v31 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33);
      if ( v31 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 33));
        v30 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33) = 0LL;
      }
      v32 = *((_QWORD *)v30 + 34);
      if ( v32 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32 + 16LL))(*((_QWORD *)v30 + 34));
        v30 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34) = 0LL;
      }
      if ( *((_QWORD *)v30 + 22) )
      {
        CAnimationEngine::Cleanup(*((CAnimationEngine **)v30 + 22));
        v30 = CDesktopManager::s_pDesktopManagerInstance;
      }
      if ( *((_QWORD *)v30 + 22) )
      {
        CAnimationEngine::Release(*((CAnimationEngine **)v30 + 22));
        v30 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = 0LL;
      }
      CDisplayBroker::Shutdown(*((CDisplayBroker **)v30 + 27));
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v38);
  }
  if ( v2 >= 0 )
    CoUninitialize();
  if ( v8 < 0 )
  {
    v8 = -2003302654;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003302654, 0x9A3u, 0LL);
  }
  return (unsigned int)v8;
}
