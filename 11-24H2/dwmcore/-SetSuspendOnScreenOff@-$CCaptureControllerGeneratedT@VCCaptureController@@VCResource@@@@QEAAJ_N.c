/*
 * XREFs of ?SetSuspendOnScreenOff@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJ_N@Z @ 0x180279F88
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetSuspendOnScreenOff(
        __int64 a1,
        char a2)
{
  __int64 *v3; // r9
  __int64 *i; // rdx
  __int64 v5; // rcx

  if ( a2 != *(_BYTE *)(a1 + 100) )
  {
    *(_BYTE *)(a1 + 100) = a2;
    v3 = *(__int64 **)(a1 + 160);
    for ( i = *(__int64 **)(a1 + 152); i != v3; ++i )
    {
      v5 = *i;
      *(_BYTE *)(v5 + 3160) = *(_BYTE *)(a1 + 100);
    }
  }
  return 0LL;
}
