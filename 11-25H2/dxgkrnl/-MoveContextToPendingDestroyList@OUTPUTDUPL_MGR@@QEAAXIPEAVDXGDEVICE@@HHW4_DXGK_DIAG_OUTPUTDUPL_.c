/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1402D8EE4
 * Callers:
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1401887D0 (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1401DEE10 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1401E1140 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1401E1190 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402D7E98 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1402D8E40 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1402D8E88 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402DA594 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402FFB70 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403325A8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403BDDE8 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1403D3CF8 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x14040E0D4 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?NotifyDWMOfDDAChange@OUTPUTDUPL_MGR@@AEAAXK@Z @ 0x1401E038C (-NotifyDWMOfDDAChange@OUTPUTDUPL_MGR@@AEAAXK@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1401E1E34 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1402DA4D8 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1402FEB58 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        __int64 a1,
        unsigned int a2,
        struct DXGDEVICE *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v7; // rdi
  ADAPTER_DISPLAY *v8; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  __int128 v16; // xmm0
  unsigned int CurrentThreadId; // eax
  __int64 v18; // rcx
  unsigned int v19; // r14d
  OUTPUTDUPL_CONTEXT **i; // rdi
  __int64 v21; // rbx
  unsigned int ProcessSessionId; // eax
  OUTPUTDUPL_MGR *v24; // rcx
  OUTPUTDUPL_CONTEXT *v25; // rcx
  OUTPUTDUPL_CONTEXT **v26; // rax
  __int64 v27; // rdx
  _BYTE v28[16]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v29[8]; // [rsp+60h] [rbp-59h] BYREF
  DXGPUSHLOCK *v30; // [rsp+68h] [rbp-51h]
  int v31; // [rsp+70h] [rbp-49h]
  _OWORD v32[4]; // [rsp+80h] [rbp-39h] BYREF

  v7 = a2;
  v8 = *(ADAPTER_DISPLAY **)a1;
  if ( v8 && !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2381;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      2381LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, (struct _KTHREAD **)(a1 + 24), 0);
  DXGPUSHLOCK::AcquireExclusive(v30);
  v11 = *(_QWORD *)(a1 + 16);
  v31 = 2;
  v12 = v11 + 72 * v7;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)v12, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  memset(v32, 0, sizeof(v32));
  LODWORD(v32[0]) = 15;
  v13 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)&v32[0] + 1) = v13 * KeQueryTimeIncrement();
  CurrentProcess = PsGetCurrentProcess(v14);
  v16 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
  DWORD1(v32[2]) &= ~0x80000000;
  v32[1] = v16;
  DWORD1(v32[2]) = DWORD1(v32[2]) & 0x80000000 | PsGetCurrentProcessSessionId() & 0x7FFFFFFF;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  DWORD1(v32[0]) = 64;
  v19 = 0;
  LODWORD(v32[2]) = CurrentThreadId;
  HIDWORD(v32[3]) = a6;
  LODWORD(v32[3]) = 1;
  DWORD1(v32[3]) = v7;
  for ( i = *(OUTPUTDUPL_CONTEXT ***)(v12 + 48); v19 < *(_DWORD *)(a1 + 8); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2410;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"(*ppCurrentContext)->IsPendingDestroy() == FALSE",
          2410LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*i) == a3 )
      {
        if ( !a4 || (v21 = *((_QWORD *)*i + 3), PsGetCurrentProcess(v18) == v21) )
        {
          if ( !a5 || !*((_DWORD *)*i + 82) )
          {
            if ( *((_DWORD *)*i + 79) )
            {
              if ( !*(_DWORD *)(v12 + 64) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2433;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"pContextList->cActiveContexts > 0",
                  2433LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*(_DWORD *)(v12 + 64))-- == 1 )
              {
                ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)*i + 3));
                OUTPUTDUPL_MGR::NotifyDWMOfDDAChange(v24, ProcessSessionId);
              }
            }
            OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
            v25 = *i;
            v26 = (OUTPUTDUPL_CONTEXT **)(a1 + 56);
            v27 = *(_QWORD *)(a1 + 56);
            if ( *(_QWORD *)(v27 + 8) != a1 + 56 )
              __fastfail(3u);
            *(_QWORD *)v25 = v27;
            *((_QWORD *)v25 + 1) = v26;
            *(_QWORD *)(v27 + 8) = v25;
            *v26 = v25;
            *i = 0LL;
            DWORD2(v32[3]) = v19;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics((OUTPUTDUPL_MGR *)a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v32, 1);
          }
        }
      }
    }
    ++v19;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
}
