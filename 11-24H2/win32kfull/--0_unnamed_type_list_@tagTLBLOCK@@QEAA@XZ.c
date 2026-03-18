/*
 * XREFs of ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210
 * Callers:
 *     NtUserfnIMECONTROL @ 0x14003CED0 (NtUserfnIMECONTROL.c)
 *     NtUserfnPOWERBROADCAST @ 0x14003E140 (NtUserfnPOWERBROADCAST.c)
 *     NtUserQueryInformationThread @ 0x14003E400 (NtUserQueryInformationThread.c)
 *     NtUserfnINDEVICECHANGE @ 0x140047020 (NtUserfnINDEVICECHANGE.c)
 *     NtUserCreateWindowEx @ 0x14004AF20 (NtUserCreateWindowEx.c)
 *     xxxCancelTracking @ 0x1401195C8 (xxxCancelTracking.c)
 *     NtUserRegisterRawInputDevices @ 0x14012F7B0 (NtUserRegisterRawInputDevices.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z @ 0x140280648 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x14028FC5C (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140291DE0 (EditionCreateWindowStationEntryPointEx.c)
 *     NtUserCtxDisplayIOCtl @ 0x140293830 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1402940D0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetClassInfoEx @ 0x140295740 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x14029A770 (NtUserRegisterClassExWOW.c)
 *     NtUserResolveDesktopForWOW @ 0x14029BF60 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1402A2200 (NtUserfnINLPHLPSTRUCT.c)
 * Callees:
 *     <none>
 */

tagTLBLOCK::_unnamed_type_list_ *__fastcall tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_(
        tagTLBLOCK::_unnamed_type_list_ *this)
{
  tagTLBLOCK::_unnamed_type_list_ *result; // rax

  *(_OWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 2) = -1LL;
  return result;
}
