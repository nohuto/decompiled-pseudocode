/*
 * XREFs of xxxDefPointerProc @ 0x14009AE2C
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetMiPPromotion @ 0x14009B518 (SetMiPPromotion.c)
 *     xxxPromotePointerToMouse @ 0x1400A7304 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall xxxDefPointerProc(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v8; // rax

  v5 = a2;
  if ( a3 == 1 )
  {
    v8 = PtiCurrent(a1, a2);
    SetMiPPromotion(v8, v5);
  }
  else if ( a4 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    xxxPromotePointerToMouse(a3, 0x10000000LL);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    CTouchProcessor::PromotePointerDataToMouse(*(CTouchProcessor **)(UserSessionState + 3264), a4, 0x10000000u);
  }
  return 0LL;
}
