/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14028F114
 * Callers:
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x14018AAE0 (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1401E4010 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1401E6370 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1401E63C0 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14028E9B4 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x14028F070 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x14028F0B8 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14028F8B0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402B67F4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403B1388 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1403CB428 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403D47D8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140406F60 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?NotifyDWMOfDDAChange@OUTPUTDUPL_MGR@@AEAAXK@Z @ 0x1401E5590 (-NotifyDWMOfDDAChange@OUTPUTDUPL_MGR@@AEAAXK@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1401E7064 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B4368 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1402B57D8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1403E4C7C (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
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
  unsigned int v9; // r14d
  __int64 v12; // rax
  __int64 v13; // r15
  OUTPUTDUPL_MGR *v14; // rcx
  __int64 v15; // rcx
  OUTPUTDUPL_CONTEXT **v16; // rdi
  __int64 v17; // rbx
  unsigned int ProcessSessionId; // eax
  OUTPUTDUPL_MGR *v20; // rcx
  OUTPUTDUPL_CONTEXT *v21; // rcx
  OUTPUTDUPL_CONTEXT **v22; // rax
  __int64 v23; // rdx
  _BYTE v24[16]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v25[8]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v26; // [rsp+68h] [rbp-51h]
  int v27; // [rsp+70h] [rbp-49h]
  _DWORD v28[16]; // [rsp+80h] [rbp-39h] BYREF

  v7 = a2;
  v8 = *(ADAPTER_DISPLAY **)a1;
  v9 = 0;
  if ( v8 && !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2387;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      2387LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v26 = a1 + 24;
  if ( a1 != -24 && *(struct _KTHREAD **)(a1 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 24));
  v12 = *(_QWORD *)(a1 + 16);
  v27 = 2;
  v13 = v12 + 72 * v7;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)v13, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  memset(v28, 0, sizeof(v28));
  OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v28);
  v28[1] = 64;
  v28[12] = 1;
  v28[13] = v7;
  v28[15] = a6;
  v16 = *(OUTPUTDUPL_CONTEXT ***)(v13 + 48);
  if ( *(_DWORD *)(a1 + 8) )
  {
    do
    {
      if ( *v16 )
      {
        if ( *((_DWORD *)*v16 + 72) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2416;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(*ppCurrentContext)->IsPendingDestroy() == FALSE",
            2416LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*v16) == a3 )
        {
          if ( !a4 || (v17 = *((_QWORD *)*v16 + 3), PsGetCurrentProcess(v15) == v17) )
          {
            if ( !a5 || !*((_DWORD *)*v16 + 82) )
            {
              if ( *((_DWORD *)*v16 + 79) )
              {
                if ( !*(_DWORD *)(v13 + 64) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 2439;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"pContextList->cActiveContexts > 0",
                    2439LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( (*(_DWORD *)(v13 + 64))-- == 1 )
                {
                  ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)*v16 + 3));
                  OUTPUTDUPL_MGR::NotifyDWMOfDDAChange(v20, ProcessSessionId);
                }
              }
              OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*v16);
              v21 = *v16;
              v22 = (OUTPUTDUPL_CONTEXT **)(a1 + 56);
              v23 = *(_QWORD *)(a1 + 56);
              if ( *(_QWORD *)(v23 + 8) != a1 + 56 )
                __fastfail(3u);
              *(_QWORD *)v21 = v23;
              *((_QWORD *)v21 + 1) = v22;
              *(_QWORD *)(v23 + 8) = v21;
              *v22 = v21;
              *v16 = 0LL;
              v28[14] = v9;
              OUTPUTDUPL_MGR::LogEtwAndDiagnostics(
                (OUTPUTDUPL_MGR *)a1,
                1,
                (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v28,
                1);
            }
          }
        }
      }
      ++v9;
      ++v16;
    }
    while ( v9 < *(_DWORD *)(a1 + 8) );
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
}
