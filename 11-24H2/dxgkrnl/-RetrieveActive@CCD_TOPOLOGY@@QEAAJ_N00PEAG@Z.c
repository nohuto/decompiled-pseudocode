/*
 * XREFs of ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14031CB7C
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401B9E28 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x140269220 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1402D9EA8 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14031B5E4 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkGetPathsModality @ 0x14031E370 (DxgkGetPathsModality.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x14032018C (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x140321A18 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140293650 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1402D6908 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14031CCD8 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403C1AA8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveActive(CCD_TOPOLOGY *this, bool a2, char a3, bool a4, unsigned __int16 *a5)
{
  bool v5; // di
  CCD_BTL *v9; // rax
  __int64 v10; // rsi
  unsigned int v12; // ebx
  int v13; // eax

  v5 = 0;
  if ( !a3 )
  {
    v13 = DxgkAcquireSessionModeChangeLock(0);
    v10 = v13;
    v5 = v13 >= 0;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 885;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_3;
    }
  }
  v9 = CCD_BTL::Global();
  LODWORD(v10) = CCD_BTL::RetrieveActiveTopology(v9, a2, a4, this, a5);
  if ( (int)v10 < 0 || (LODWORD(v10) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this), (int)v10 < 0) )
  {
LABEL_3:
    if ( v5 )
      DxgkReleaseSessionModeChangeLock();
    return (unsigned int)v10;
  }
  v12 = CCD_TOPOLOGY::FillPathsTargetFlags(this);
  if ( v5 )
    DxgkReleaseSessionModeChangeLock();
  return v12;
}
