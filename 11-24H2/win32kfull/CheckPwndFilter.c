/*
 * XREFs of CheckPwndFilter @ 0x140140F10
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1401B9D88 (xxxRetrievePointerInputMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckPwndFilter(__int64 a1, __int64 a2)
{
  if ( !a2 || a2 == a1 || a2 == 1 && !a1 )
    return 1LL;
  while ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    a1 = *(_QWORD *)(a1 + 104);
    if ( a2 == a1 )
      return 1LL;
  }
  return 0LL;
}
