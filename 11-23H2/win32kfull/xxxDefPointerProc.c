/*
 * XREFs of xxxDefPointerProc @ 0x1C0222404
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     SetMiPPromotion @ 0x1C0150690 (SetMiPPromotion.c)
 *     xxxPromotePointerToMouse @ 0x1C01C4748 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall xxxDefPointerProc(__int64 a1, int a2, unsigned __int16 a3, unsigned __int64 a4)
{
  __int64 v5; // rax

  if ( a3 == 1 )
  {
    SetMiPPromotion(gptiCurrent, a2);
  }
  else if ( a4 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    xxxPromotePointerToMouse(a3, 0x10000000u);
  }
  else
  {
    v5 = SGDGetUserSessionState(a1);
    CTouchProcessor::PromotePointerDataToMouse(*(CTouchProcessor **)(v5 + 3424), a4, 0x10000000u);
  }
  return 0LL;
}
