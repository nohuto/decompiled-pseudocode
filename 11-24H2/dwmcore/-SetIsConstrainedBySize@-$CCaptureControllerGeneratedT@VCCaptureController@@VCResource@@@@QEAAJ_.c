/*
 * XREFs of ?SetIsConstrainedBySize@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJ_N@Z @ 0x1802262FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetIsConstrainedBySize(
        __int64 a1,
        char a2)
{
  __int64 *v4; // r9
  __int64 *i; // rdx
  __int64 v6; // rcx

  if ( a2 != *(_BYTE *)(a1 + 84) )
  {
    *(_BYTE *)(a1 + 84) = a2;
    v4 = *(__int64 **)(a1 + 160);
    for ( i = *(__int64 **)(a1 + 152); i != v4; ++i )
    {
      v6 = *i;
      *(_BYTE *)(v6 + 2942) = *(_BYTE *)(a1 + 84);
    }
  }
  return 0LL;
}
