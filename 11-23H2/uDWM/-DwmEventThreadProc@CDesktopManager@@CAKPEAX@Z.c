/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18001D4A4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18001E410 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180021320 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x1800216FC (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180022C9C (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180024ED0 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180025D10 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x180028C18 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180046780 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180046D50 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18005608C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x1800569CC (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800570A4 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x180066218 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800AAA0C (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800B3CF8 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x1800B3D2C (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B42D4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800B578C (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800B88F0 (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800C32B0 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  void *v2; // r15
  LARGE_INTEGER v3; // rbx
  bool v4; // r12
  __int64 (*v5)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v6; // rcx
  int v7; // eax
  HRESULT v8; // eax
  int v9; // edi
  int Instance; // eax
  __int64 v11; // rdx
  int v12; // r8d
  signed int v13; // r13d
  const unsigned __int16 *v14; // rdx
  char v15; // di
  DWORD v16; // r14d
  CDesktopManager *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r8
  char v20; // dl
  DWORD v21; // r8d
  DWORD v22; // eax
  int v23; // r14d
  __int64 v24; // r8
  bool v25; // r13
  double v26; // xmm6_8
  CDesktopManager *v27; // rsi
  unsigned int v28; // r15d
  int v29; // r12d
  __int64 v30; // r12
  int v31; // eax
  __int64 v32; // rbx
  CWindowList *v33; // r14
  CDesktopManager *v34; // rdi
  int updated; // eax
  __int64 v36; // rdx
  wil::details **v37; // rdi
  int v38; // eax
  void *v39; // rdx
  int v40; // eax
  int v41; // eax
  signed int v42; // eax
  CAnimationEngine *v43; // rax
  CAnimationEngine *v44; // rdi
  CDesktopManager *v45; // rcx
  CDesktopManager *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  signed int v49; // eax
  signed int LastError; // eax
  int dwFlags; // [rsp+28h] [rbp-E0h]
  bool v53[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v54; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v55[2]; // [rsp+48h] [rbp-C0h] BYREF
  void *v56; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v57; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER Frequency; // [rsp+68h] [rbp-A0h] BYREF
  struct tagMSG Frequency_8; // [rsp+70h] [rbp-98h] BYREF
  HANDLE pHandles[3]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE *v62; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v63; // [rsp+C0h] [rbp-48h]
  int v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+CCh] [rbp-3Ch]
  _BYTE v66[80]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v67[12]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v68[16]; // [rsp+188h] [rbp+80h] BYREF
  int v69[4]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v2 = 0LL;
  v56 = 0LL;
  v3.QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  v4 = 0;
  v53[1] = 0;
  *(_WORD *)&v53[4] = 0;
  v67[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 150) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0x8DBu, 0LL);
    goto LABEL_140;
  }
  v7 = CDesktopManager::RegisterWindowClass(v6, v5, (unsigned __int16 *)&v53[4]);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x8DDu, 0LL);
LABEL_140:
    CWaitForService::Cleanup((CWaitForService *)v67);
    goto LABEL_141;
  }
  v8 = CoInitializeEx(0LL, 4u);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x8E4u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8E5u, 0LL);
    goto LABEL_140;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 22);
  v13 = Instance;
  if ( Instance < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Instance, 0x8E7u, 0LL);
LABEL_132:
    CWaitForService::Cleanup((CWaitForService *)v67);
    goto LABEL_133;
  }
  if ( (int)CDesktopManager::InitializeComObjects((LPVOID *)CDesktopManager::s_pDesktopManagerInstance, v11, v12) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v67, v14);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v49 = GetLastError();
    v13 = v49;
    if ( v49 > 0 )
      v13 = (unsigned __int16)v49 | 0x80070000;
    if ( v13 >= 0 )
      v13 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x8F3u, 0LL);
    goto LABEL_132;
  }
  v55[0] = 0;
  while ( 1 )
  {
    if ( !v2 && (int)MilCompositionEngine_GetComposedEventId(v55) >= 0 )
    {
      OpenComposedEvent(v55[0], v36, &v56);
      v2 = v56;
    }
    memset(&Frequency_8, 0, sizeof(Frequency_8));
    pHandles[0] = *(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 56LL);
    pHandles[1] = v2;
    v15 = 0;
    v16 = 2;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v17 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v18 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( *(_DWORD *)(v18 + 64) && *(_BYTE *)(v18 + 120) )
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      }
      else
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !CDesktopManager::s_fTimelineDirty && !*((_DWORD *)v17 + 136) || *((_BYTE *)v17 + 19) )
        {
          v15 = 0;
          goto LABEL_16;
        }
      }
      v15 = 1;
LABEL_16:
      *((_BYTE *)v17 + 18) = v15;
      v53[1] = v2 && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) | (unsigned __int8)v15;
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
              v19,
              1LL,
              (__int64)v68);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v53[1] && v4 )
    {
      v20 = 1;
      v21 = 64;
LABEL_66:
      v16 = 1;
      v4 = 0;
      goto LABEL_25;
    }
    v20 = 0;
    v21 = 64;
    if ( !v53[1] )
      goto LABEL_66;
    if ( !v4 )
    {
      v3.QuadPart = -1LL;
      v4 = 1;
      v21 = 0;
      v15 = 0;
      goto LABEL_28;
    }
LABEL_25:
    if ( v20 )
      goto LABEL_54;
    v15 = 0;
    if ( !v4 )
      v21 = -1;
LABEL_28:
    v22 = MsgWaitForMultipleObjectsEx(v16, pHandles, v21, 0x1CFFu, 6u);
    if ( v22 == v16 )
      break;
    if ( v22 )
    {
      if ( v4 && (v22 == 1 || v22 == 258) )
      {
        v57 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v23 = 0;
        v13 = 0;
        if ( !CDesktopManager::s_pDesktopManagerInstance )
          goto LABEL_53;
        PerformanceCount.QuadPart = 0LL;
        SetLastError(0);
        if ( !QueryPerformanceCounter(&PerformanceCount) )
        {
          v42 = GetLastError();
          v13 = v42;
          if ( v42 > 0 )
            v13 = (unsigned __int16)v42 | 0x80070000;
          if ( v13 >= 0 )
            v13 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x826u, 0LL);
          goto LABEL_53;
        }
        v25 = v4;
        if ( v3.QuadPart == -1 )
          v3 = PerformanceCount;
        v26 = (double)(PerformanceCount.LowPart - v3.LowPart) / (double)(int)Frequency.LowPart;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)&UdwmAnimation_Info,
            v24,
            1LL,
            (__int64)v69);
        v27 = CDesktopManager::s_pDesktopManagerInstance;
        CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v26);
        v28 = *((_DWORD *)v27 + 136);
        if ( v28 )
        {
          v62 = v66;
          v63 = v66;
          v64 = 10;
          v65 = 10LL;
          v15 = 1;
          v29 = 0;
          if ( v28 <= 0xA )
          {
            memcpy_0(v66, *((const void **)v27 + 65), 8LL * v28);
            HIDWORD(v65) = v28;
            goto LABEL_41;
          }
          v40 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v62, 8, v28, *((_QWORD *)v27 + 65));
          v29 = v40;
          LODWORD(v54) = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xC0u, 0LL);
            v23 = v29;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x7EBu, 0LL);
            DynArrayImpl<0>::~DynArrayImpl<0>(&v62);
            v4 = v25;
            v13 = v23;
            goto LABEL_98;
          }
          v28 = HIDWORD(v65);
LABEL_41:
          v23 = v29;
          v30 = 0LL;
          v53[0] = v25;
          if ( v28 )
          {
            v53[0] = v25;
            while ( 1 )
            {
              v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v62[8 * v30] + 152LL))(*(_QWORD *)&v62[8 * v30]);
              v23 = v31;
              v13 = v31;
              if ( v31 < 0 )
                break;
              v30 = (unsigned int)(v30 + 1);
              if ( (unsigned int)v30 >= HIDWORD(v65) )
                goto LABEL_45;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x7EFu, 0LL);
            DynArrayImpl<0>::~DynArrayImpl<0>(&v62);
            v4 = v53[0];
LABEL_98:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x806u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x830u, 0LL);
            v2 = v56;
            goto LABEL_53;
          }
LABEL_45:
          if ( v62 != v63 )
          {
            (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
            v62 = 0LL;
          }
          v4 = v53[0];
        }
        if ( *((_BYTE *)v27 + 23) )
        {
          v41 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 29));
          v23 = v41;
          v13 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x7F5u, 0LL);
            goto LABEL_98;
          }
        }
        v13 = v23;
        if ( v23 < 0 )
          goto LABEL_98;
        v32 = *((_QWORD *)v27 + 22);
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( *(_DWORD *)(v32 + 64) && *(_BYTE *)(v32 + 120) )
        {
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
          v53[2] = 0;
          CAnimationEngine::OnTick(
            *((CAnimationEngine **)v27 + 22),
            *((double *)CDesktopManager::s_pDesktopManagerInstance + 33),
            &v53[2]);
          v15 |= v53[2];
        }
        else
        {
          LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        }
        v3 = PerformanceCount;
        v2 = v56;
LABEL_53:
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x977u, 0LL);
          goto LABEL_112;
        }
      }
    }
    else
    {
      v54 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v37 = (wil::details **)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
      v38 = CGraphicsDeviceManager::CheckDXGIAdapter((CGraphicsDeviceManager *)v37, &v53[3]);
      v13 = v38;
      if ( v38 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8B,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
          (const char *)(unsigned int)v38,
          dwFlags);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x96Fu, 0LL);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v54);
        goto LABEL_112;
      }
      wil::details::ResetEvent(v37[7], v39);
      v13 = 0;
      v15 = !v53[3];
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v54);
    }
LABEL_54:
    if ( Frequency_8.message == 18 )
      goto LABEL_112;
    if ( v15 )
    {
      v57 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( !CDesktopManager::s_pDesktopManagerInstance )
        goto LABEL_62;
      v33 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
      if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) )
      {
        v54 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v34 = CDesktopManager::s_pDesktopManagerInstance;
        if ( GetCurrentThreadId() != *((_DWORD *)v34 + 150)
          && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 23)) > 0 )
        {
          v43 = CDesktopManager::AcquireAnimationEngine();
          v44 = v43;
          if ( v43 )
          {
            if ( CAnimationEngine::IsIdle(v43) )
            {
              CAnimationEngine::Release(v44);
LABEL_60:
              LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
              goto LABEL_61;
            }
            CAnimationEngine::Release(v44);
          }
        }
        updated = CWindowList::ForceUpdateScene(v33);
        v13 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A8D,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)updated,
            dwFlags);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v54);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x989u, 0LL);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v57);
          goto LABEL_112;
        }
        goto LABEL_60;
      }
LABEL_61:
      v13 = 0;
LABEL_62:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
  }
  if ( !PeekMessageW(&Frequency_8, 0LL, 0, 0, 1u) )
    goto LABEL_54;
  while ( Frequency_8.message != 18 )
  {
    DispatchMessageW(&Frequency_8);
    if ( !Frequency_8.hwnd )
      CDesktopManager::HandleThreadMessage(Frequency_8.message, (HWND)Frequency_8.wParam, Frequency_8.lParam);
    if ( !PeekMessageW(&Frequency_8, 0LL, 0, 0, 1u) )
      goto LABEL_54;
  }
LABEL_112:
  if ( v2 )
    CloseHandle(v2);
  CWaitForService::Cleanup((CWaitForService *)v67);
  v57 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( CDesktopManager::s_pDesktopManagerInstance )
  {
    CDesktopManager::EnableLivePreviewInputHooks(0, 0);
    if ( *(_WORD *)&v53[4] )
      UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v53[4], g_hInstance);
    CDesktopManager::AbandonActiveAnimations(v45);
    v46 = CDesktopManager::s_pDesktopManagerInstance;
    v47 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34);
    if ( v47 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v47 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                               + 34));
      v46 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34) = 0LL;
    }
    v48 = *((_QWORD *)v46 + 35);
    if ( v48 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 16LL))(*((_QWORD *)v46 + 35));
      v46 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 35) = 0LL;
    }
    if ( *((_QWORD *)v46 + 22) )
    {
      CAnimationEngine::Cleanup(*((CAnimationEngine **)v46 + 22));
      v46 = CDesktopManager::s_pDesktopManagerInstance;
    }
    if ( *((_QWORD *)v46 + 22) )
    {
      CAnimationEngine::Release(*((CAnimationEngine **)v46 + 22));
      v46 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = 0LL;
    }
    CDisplayBroker::Shutdown(*((CDisplayBroker **)v46 + 28));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v57);
LABEL_133:
  CoUninitialize();
  if ( v13 >= 0 )
    return (unsigned int)v13;
LABEL_141:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003302654, 0x9BEu, 0LL);
  return 2291664642LL;
}
