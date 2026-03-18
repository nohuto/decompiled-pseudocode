/*
 * XREFs of ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x14009B440
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsMiPEnabledForWindow @ 0x14009B490 (IsMiPEnabledForWindow.c)
 *     IsMiPEnabledForThread @ 0x14009B4E8 (IsMiPEnabledForThread.c)
 */

bool __fastcall ShouldGenerateMipMessage(struct tagTHREADINFO *a1, const struct tagQMSG *a2, struct tagWND *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  bool result; // al
  int v7; // r9d

  result = 0;
  if ( a2 )
  {
    if ( !*((_QWORD *)a1 + 81) )
    {
      if ( (unsigned int)IsMiPEnabledForThread(a1) )
      {
        v5 = *(_DWORD *)(v3 + 100);
        if ( (v5 & 0x20) == 0 && (v5 & 0x8000000) == 0 && ((unsigned int)IsMiPEnabledForWindow(v4) || v7) )
          return 1;
      }
    }
  }
  return result;
}
