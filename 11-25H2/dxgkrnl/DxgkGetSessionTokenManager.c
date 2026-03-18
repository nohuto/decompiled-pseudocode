/*
 * XREFs of DxgkGetSessionTokenManager @ 0x14000B2D0
 * Callers:
 *     NtUnBindCompositionSurface @ 0x14000A980 (NtUnBindCompositionSurface.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x14000B274 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14000C8FC (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x140024F78 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x140026A70 (NtNotifyPresentToCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1400445E0 (NtBindCompositionSurface.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14004E9F8 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     NtTokenManagerThread @ 0x14004EB80 (NtTokenManagerThread.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x14005AC60 (NtTokenManagerOpenSectionAndEvents.c)
 *     ?SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z @ 0x14005BF4C (-SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x14005C430 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x14005F090 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400607EC (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x140062B24 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x140097410 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x140097860 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x140097A60 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x14009A720 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x14009AAB0 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CBD4 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x140203E90 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkGetSessionTokenManager(_QWORD *a1)
{
  unsigned int v2; // edi
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v4)(_QWORD); // rbx
  int v6; // edx
  int v7; // r8d

  v2 = -1073741823;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2604;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(2604, v6, v7, 0, 2, -1, (__int64)L"m_pGlobal != NULL", 44, 0, 0, 0, 0);
    }
  }
  SessionData = DXGGLOBAL::GetSessionData(*(DXGGLOBAL **)&DXGGLOBAL::m_pGlobal);
  if ( SessionData )
  {
    v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2344);
    if ( v4 )
    {
      (**v4)(*((_QWORD *)SessionData + 2344));
      v2 = 0;
      *a1 = v4;
    }
  }
  return v2;
}
