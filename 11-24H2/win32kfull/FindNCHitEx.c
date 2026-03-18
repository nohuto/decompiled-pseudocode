/*
 * XREFs of FindNCHitEx @ 0x140180090
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?FindNCMNItemHitEx@@YAHPEAUtagWND@@HAEBUtagPOINT@@@Z @ 0x140180110 (-FindNCMNItemHitEx@@YAHPEAUtagWND@@HAEBUtagPOINT@@@Z.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x140180384 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 */

int __fastcall FindNCHitEx(struct tagWND *a1, int a2, struct tagPOINT a3)
{
  struct tagPOINT v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  if ( a2 == 5 )
  {
    if ( *((_QWORD *)a1 + 21) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) != 0 )
      return FindNCMNItemHitEx(a1, 5, &v4);
    return a2;
  }
  if ( a2 == 7 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 2) != 0 )
      return (unsigned __int16)HitTestScrollBar(a1, 1, a3) | 0x10000;
    return a2;
  }
  if ( a2 != 6 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 4) == 0 )
    return a2;
  return (unsigned __int16)HitTestScrollBar(a1, 0, a3);
}
