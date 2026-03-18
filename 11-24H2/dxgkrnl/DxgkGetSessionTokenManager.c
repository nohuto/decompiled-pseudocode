/*
 * XREFs of DxgkGetSessionTokenManager @ 0x14001A800
 * Callers:
 *     NtUnBindCompositionSurface @ 0x140019EB0 (NtUnBindCompositionSurface.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x14001A7A4 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001BDDC (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x140025728 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x140028FC0 (NtNotifyPresentToCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1400442C0 (NtBindCompositionSurface.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14004E2F8 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     NtTokenManagerThread @ 0x14004E480 (NtTokenManagerThread.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x14005A660 (NtTokenManagerOpenSectionAndEvents.c)
 *     ?SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z @ 0x14005B94C (-SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z.c)
 *     ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x14005BE90 (-PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z.c)
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x14005F940 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400610A4 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x140063414 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x140099690 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x140099AE0 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x140099CE0 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x14009C870 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x14009CC00 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009EF2C (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x14020A5B0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkGetSessionTokenManager(_QWORD *a1)
{
  unsigned int v2; // edi
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v4)(_QWORD); // rbx
  __int64 v6; // rdx
  __int64 v7; // r8

  v2 = -1073741823;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2605;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(2605LL, v6, v7, 0LL, 2, -1, L"m_pGlobal != NULL", 45, 0, 0, 0, 0);
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
