/*
 * XREFs of IsMiPEnabledForThread @ 0x1C007FB08
 * Callers:
 *     xxxCapture @ 0x1C00117EC (xxxCapture.c)
 *     IsMiPActive @ 0x1C007FAB8 (IsMiPActive.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C01535B0 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C01D8250 (NtUserPromoteMouseInPointer.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FF260 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForThread(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 824LL) & 4) != 0 || (*(_DWORD *)(a1 + 1272) & 0x6000000) != 0;
}
