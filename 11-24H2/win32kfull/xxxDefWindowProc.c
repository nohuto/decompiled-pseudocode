/*
 * XREFs of xxxDefWindowProc @ 0x14007E7C0
 * Callers:
 *     xxxGetControlColor @ 0x1400385D0 (xxxGetControlColor.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14007D9D8 (-xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x14007F440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxValidateClassAndSize @ 0x14023A978 (xxxValidateClassAndSize.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402574D0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x140257BE8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxEventWndProc @ 0x1402DBD80 (xxxEventWndProc.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E1D78 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     SfnDWORD @ 0x14007F9E0 (SfnDWORD.c)
 *     SfnOUTCBOXSTRING @ 0x140089680 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140089810 (SfnOUTLBOXSTRING.c)
 *     SfnINCBOXSTRING @ 0x14008A380 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x14008A6D0 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x14008A860 (SfnINSTRING.c)
 *     SfnCOPYDATA @ 0x14012BE50 (SfnCOPYDATA.c)
 *     SfnINSTRINGNULL @ 0x14016FBA0 (SfnINSTRINGNULL.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x140170920 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     SfnINDEVICECHANGE @ 0x140174A40 (SfnINDEVICECHANGE.c)
 *     SfnOUTSTRING @ 0x140176180 (SfnOUTSTRING.c)
 *     SfnINOUTLPWINDOWPOS @ 0x1401777D0 (SfnINOUTLPWINDOWPOS.c)
 *     SfnDWORDOPTINLPMSG @ 0x140178390 (SfnDWORDOPTINLPMSG.c)
 *     SfnINOUTNCCALCSIZE @ 0x14017DAE0 (SfnINOUTNCCALCSIZE.c)
 *     SfnINLPWINDOWPOS @ 0x14017E180 (SfnINLPWINDOWPOS.c)
 *     SfnINOUTSTYLECHANGE @ 0x140182360 (SfnINOUTSTYLECHANGE.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x140184A70 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnNCDESTROY @ 0x14018C190 (SfnNCDESTROY.c)
 *     SfnEMPTY @ 0x14018F5F0 (SfnEMPTY.c)
 *     SfnPOWERBROADCAST @ 0x140198190 (SfnPOWERBROADCAST.c)
 *     SfnINOUTLPPOINT5 @ 0x14019F860 (SfnINOUTLPPOINT5.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1401A5A30 (SfnINOUTLPSCROLLINFO.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1401AC130 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1401AE5F0 (SfnOUTLPCOMBOBOXINFO.c)
 *     SfnINOUTLPRECT @ 0x1401B1DE0 (SfnINOUTLPRECT.c)
 *     SfnINLPDELETEITEMSTRUCT @ 0x1401B3C70 (SfnINLPDELETEITEMSTRUCT.c)
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x1401C6A60 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1401C7640 (SfnSHELLWINDOWMANAGEMENTNOTIFY.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1401CCCE0 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1401CF210 (SfnINLPUAHINITMENU.c)
 *     xxxLoadUserApiHook @ 0x1401D111C (xxxLoadUserApiHook.c)
 *     SfnOUTLPRECT @ 0x1401D1D30 (SfnOUTLPRECT.c)
 *     SfnOUTDWORDINDWORD @ 0x1401D4720 (SfnOUTDWORDINDWORD.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x1401D8D10 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x1401D8F70 (SfnOUTLPTITLEBARINFOEX.c)
 *     SfnSHELLSYNCDISPLAYCHANGED @ 0x1401DB1F0 (SfnSHELLSYNCDISPLAYCHANGED.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401DDB20 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnIMECONTROL @ 0x1401E57B0 (SfnIMECONTROL.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1401E62E0 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1401E7FF0 (SfnOUTLPSCROLLBARINFO.c)
 *     SfnINWPARAMCHAR @ 0x1401E9660 (SfnINWPARAMCHAR.c)
 *     SfnINLPUAHDRAWMENU @ 0x1401ED350 (SfnINLPUAHDRAWMENU.c)
 *     SfnINDESTROYCLIPBRD @ 0x1401F1F90 (SfnINDESTROYCLIPBRD.c)
 *     SfnINCNTOUTSTRING @ 0x1401F4340 (SfnINCNTOUTSTRING.c)
 *     SfnTOUCH @ 0x1401F5D40 (SfnTOUCH.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1401F91F0 (SfnINWPARAMDBCSCHAR.c)
 *     SfnINOUTLPSIZE @ 0x1402000F0 (SfnINOUTLPSIZE.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x140202F70 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnCOPYGLOBALDATA @ 0x140203210 (SfnCOPYGLOBALDATA.c)
 *     SfnTOUCHHITTESTING @ 0x1402041C0 (SfnTOUCHHITTESTING.c)
 *     SfnGESTURE @ 0x140209870 (SfnGESTURE.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x140209F80 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x1402510A0 (SfnINLPCREATESTRUCT.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     SfnGETWINDOWDATA @ 0x1402B88A0 (SfnGETWINDOWDATA.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402B8A10 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402B8E90 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402B91E0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINOUTDRAG @ 0x1402B9720 (SfnINOUTDRAG.c)
 *     SfnINOUTMENUGETOBJECT @ 0x1402B9A10 (SfnINOUTMENUGETOBJECT.c)
 *     SfnINOUTNEXTMENU @ 0x1402B9D00 (SfnINOUTNEXTMENU.c)
 *     SfnINPAINTCLIPBRD @ 0x1402B9FC0 (SfnINPAINTCLIPBRD.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402BA2C0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSIZECLIPBRD @ 0x1402BA610 (SfnINSIZECLIPBRD.c)
 *     SfnINTERCEPTEDWINDOWACTION @ 0x1402BA8A0 (SfnINTERCEPTEDWINDOWACTION.c)
 *     SfnPOPTINLPUINT @ 0x1402BAB30 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402BAED0 (SfnPOUTLPINT.c)
 *     SfnSENTDDEMSG @ 0x1402BB320 (SfnSENTDDEMSG.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagTHREADINFO **a1, __int64 a2, HWND a3, struct tagDRAWITEMSTRUCT *a4)
{
  unsigned int v4; // edi
  struct tagDRAWITEMSTRUCT *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(int, int, int, int, __int64, __int64); // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(int, int, int, int, __int64, __int64); // rbx
  __int64 v20; // rdx

  v4 = a2;
  if ( (unsigned __int64)a1 - 2 <= 0xFFFFFFFFFFFFFFFBuLL
    && a1[2] != PtiCurrent((__int64)a1, a2)
    && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1603LL);
  }
  if ( v4 == 397 || v4 == 325 )
    return 0LL;
  v8 = 0LL;
  if ( v4 != 60 )
    v8 = a4;
  if ( !IsInsideUserApiHook((__int64)a1, a2) )
    return xxxRealDefWindowProc((struct tagWND *)a1, v4, a3, v8);
  v10 = (__int64)a1[5];
  if ( *(char *)(v10 + 19) < 0 && (v4 != 130 || (*(_BYTE *)(v10 + 18) & 4) == 0 || *(__int16 *)(v10 + 42) < 0) )
    return xxxRealDefWindowProc((struct tagWND *)a1, v4, a3, v8);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v10, v9) + 132, 0, 0) & 1) != 0
    || !(unsigned int)xxxLoadUserApiHook() )
  {
    return xxxRealDefWindowProc((struct tagWND *)a1, v4, a3, v8);
  }
  v12 = v4 & 0x1FFFF;
  if ( (*((_BYTE *)a1[5] + 18) & 8) != 0 )
  {
    if ( (unsigned int)v12 >= 0x400 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v12) + 19928) + 552LL);
      return SfnDWORD((_DWORD)a1, v4, (_DWORD)a3, (_DWORD)v8, 0LL, v13);
    }
    v15 = (unsigned __int8)MessageTable[(unsigned __int16)v4];
    v16 = gapfnScSendMessage[v15];
    v17 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v12) + 19928) + 552LL);
    return ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, HWND, struct tagDRAWITEMSTRUCT *, _QWORD, __int64, int, _QWORD))v16)(
             a1,
             v4,
             a3,
             v8,
             0LL,
             v17,
             1,
             0LL);
  }
  else
  {
    if ( (unsigned int)v12 >= 0x400 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v12) + 19928) + 744LL);
      return SfnDWORD((_DWORD)a1, v4, (_DWORD)a3, (_DWORD)v8, 0LL, v13);
    }
    v18 = (unsigned __int8)MessageTable[(unsigned __int16)v4];
    v19 = gapfnScSendMessage[v18];
    v20 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v12) + 19928) + 744LL);
    return ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, HWND, struct tagDRAWITEMSTRUCT *, _QWORD, __int64, _DWORD, _QWORD))v19)(
             a1,
             v4,
             a3,
             v8,
             0LL,
             v20,
             0,
             0LL);
  }
}
