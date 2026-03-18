/*
 * XREFs of IsMiPEnabledForThread @ 0x14009B4E8
 * Callers:
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x14009AEB0 (xxxMNEndMenuStateInternal.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x14009B3C0 (NtUserAutoPromoteMouseInPointer.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x14009B440 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     NtUserPromoteMouseInPointer @ 0x14029A390 (NtUserPromoteMouseInPointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForThread(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 464) + 816LL) & 4) != 0 || (*(_DWORD *)(a1 + 1360) & 0x6000000) != 0;
}
