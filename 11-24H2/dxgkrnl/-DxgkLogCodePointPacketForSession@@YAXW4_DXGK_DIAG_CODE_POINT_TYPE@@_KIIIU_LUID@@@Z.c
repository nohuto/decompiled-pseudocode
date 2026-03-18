/*
 * XREFs of ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08
 * Callers:
 *     _lambda_ab20bd11cb5e847b50387722fd71407e_::operator() @ 0x1401BD670 (_lambda_ab20bd11cb5e847b50387722fd71407e_--operator().c)
 *     _lambda_cbfcde231c2a8d1b9d404329183532d4_::operator() @ 0x1401BDACC (_lambda_cbfcde231c2a8d1b9d404329183532d4_--operator().c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1401CF8E0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x140259010 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x140259A94 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x14025DCCC (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025DFE4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     _lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator() @ 0x1403E9CAC (_lambda_4d2358d7a59f9862d39587a9c5c8147c_--operator().c)
 *     DxgkRegisterDwmProcess @ 0x1403F1890 (DxgkRegisterDwmProcess.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1404115E8 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DxgkLogCodePointPacketForSession(
        int a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  _OWORD v11[5]; // [rsp+20h] [rbp-60h] BYREF

  memset(v11, 0, 0x48uLL);
  if ( a6 )
  {
    DWORD2(v11[2]) = 0;
    *(_QWORD *)&v11[2] = 0LL;
    HIDWORD(v11[3]) = a5;
    v11[0] = 0x480000001EuLL;
    *(_QWORD *)&v11[4] = a6;
  }
  else
  {
    v11[0] = 0x4000000006uLL;
    HIDWORD(v11[3]) = a5;
    DWORD2(v11[2]) = 0;
    *(_QWORD *)&v11[2] = 0LL;
  }
  *(_QWORD *)((char *)&v11[3] + 4) = __PAIR64__(a4, a3);
  LODWORD(v11[3]) = a1;
  v11[1] = 0LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11, a2);
}
