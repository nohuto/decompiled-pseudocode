/*
 * XREFs of IsMiPActive @ 0x140170128
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMiPActive(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( *(_QWORD *)(a1 + 648)
    || (*(_BYTE *)(*(_QWORD *)(a1 + 464) + 816LL) & 4) == 0 && (*(_DWORD *)(a1 + 1360) & 0x6000000) == 0 )
  {
    return 0LL;
  }
  if ( !a2 )
    return 1LL;
  v2 = *(_DWORD *)(a2 + 100);
  if ( (v2 & 0x20) != 0 )
    return 0LL;
  return (~v2 & 0x8000000u) >> 27;
}
