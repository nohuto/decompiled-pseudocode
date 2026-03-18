/*
 * XREFs of IsInsideMenuLoop @ 0x1C00951F0
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C0039524 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCancelTrackingForThread @ 0x1C01F2250 (xxxCancelTrackingForThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsInsideMenuLoop(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)(a1 + 608);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 8) & 4) != 0;
  return v2;
}
