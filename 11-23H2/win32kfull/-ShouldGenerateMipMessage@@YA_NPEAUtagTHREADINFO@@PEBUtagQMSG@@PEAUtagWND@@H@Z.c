/*
 * XREFs of ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x1C01501B2
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsMiPActive @ 0x1C007FAB8 (IsMiPActive.c)
 *     IsMiPEnabledForWindow @ 0x1C01505CA (IsMiPEnabledForWindow.c)
 */

bool __fastcall ShouldGenerateMipMessage(struct tagTHREADINFO *a1, const struct tagQMSG *a2, struct tagWND *a3)
{
  __int64 v3; // r10
  int v4; // r9d

  return a2 && (unsigned int)IsMiPActive((__int64)a1, (__int64)a2) && ((unsigned int)IsMiPEnabledForWindow(v3) || v4);
}
