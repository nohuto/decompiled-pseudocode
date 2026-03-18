/*
 * XREFs of FreePointerMessageParams @ 0x1C01529B6
 * Callers:
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x1C00126A0 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00794C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C011923C (DelQEntry.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C012AFD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

void __fastcall FreePointerMessageParams(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r8

  if ( *(_DWORD *)(a1 + 24) != 595 )
  {
    if ( *(_DWORD *)(a1 + 96) )
    {
      v2 = SGDGetUserSessionState(a1);
      v3 = 3LL;
    }
    else
    {
      v2 = SGDGetUserSessionState(a1);
      v3 = 2LL;
    }
    CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v2 + 3424), *(_QWORD *)(a1 + 40), v3, a1);
  }
}
