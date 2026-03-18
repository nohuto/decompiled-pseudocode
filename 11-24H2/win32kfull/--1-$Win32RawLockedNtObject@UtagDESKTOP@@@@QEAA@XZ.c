/*
 * XREFs of ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628
 * Callers:
 *     NtUserfnIMECONTROL @ 0x14003CED0 (NtUserfnIMECONTROL.c)
 *     NtUserfnPOWERBROADCAST @ 0x14003E140 (NtUserfnPOWERBROADCAST.c)
 *     NtUserQueryInformationThread @ 0x14003E400 (NtUserQueryInformationThread.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14003EBCC (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserfnINDEVICECHANGE @ 0x140047020 (NtUserfnINDEVICECHANGE.c)
 *     NtUserCreateWindowEx @ 0x14004AF20 (NtUserCreateWindowEx.c)
 *     NtUserRegisterRawInputDevices @ 0x14012F7B0 (NtUserRegisterRawInputDevices.c)
 *     zzzSetDesktop @ 0x14023D170 (zzzSetDesktop.c)
 *     NtUserGetClipboardData @ 0x1402418A0 (NtUserGetClipboardData.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserCtxDisplayIOCtl @ 0x140293830 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1402940D0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetClassInfoEx @ 0x140295740 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x14029A770 (NtUserRegisterClassExWOW.c)
 *     NtUserResolveDesktopForWOW @ 0x14029BF60 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1402A2200 (NtUserfnINLPHLPSTRUCT.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    result = PopAndFreeW32ThreadLock(a1);
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
