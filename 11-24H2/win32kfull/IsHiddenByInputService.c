/*
 * XREFs of IsHiddenByInputService @ 0x140154910
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x140154700 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHiddenByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x2000) != 0 || (v1 & 0x4000) != 0 || (v1 & 0x10000) != 0;
}
