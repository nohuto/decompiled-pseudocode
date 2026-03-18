/*
 * XREFs of ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x140284668
 * Callers:
 *     ?WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1400599C0 (-WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPE.c)
 *     DxgkGetDisplayModeList @ 0x140283980 (DxgkGetDisplayModeList.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1403E85B0 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x140036894 (-ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(DXGSESSIONMGR *this, struct DXGSESSIONDATA *a2)
{
  DXGSESSIONDATA **v2; // rbx

  v2 = (DXGSESSIONDATA **)((char *)this + 136);
  if ( !a2 || a2 != *v2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6236;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pConsoleSessionData != NULL) && (pConsoleSessionData == m_pConsoleSessionData)",
      6236LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONDATA::ReleaseSessionModeChangeLock(*v2);
}
