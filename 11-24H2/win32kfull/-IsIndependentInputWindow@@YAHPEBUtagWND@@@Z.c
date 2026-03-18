/*
 * XREFs of ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x140195C2C
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1401105D4 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14021985C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1402305F0 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x140237020 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1402686C4 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPostDwmSpeedHitTest @ 0x1402A3910 (EditionPostDwmSpeedHitTest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsIndependentInputWindow(const struct tagWND *a1)
{
  unsigned int v1; // edx
  __int64 v3; // r8
  __int64 v4; // rax

  v1 = 0;
  if ( (*((_DWORD *)a1 + 95) & 0x40000000) != 0 )
  {
    v3 = *((_QWORD *)a1 + 3);
    v4 = 0LL;
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 112);
    if ( *((_QWORD *)a1 + 13) == v4 )
      return 1;
  }
  return v1;
}
