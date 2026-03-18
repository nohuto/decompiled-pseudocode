/*
 * XREFs of ?SetContentSize@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJUD2D_SIZE_F@@@Z @ 0x1802833A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnContentSizeChanged@CCaptureController@@IEAAXXZ @ 0x18029F04C (-OnContentSizeChanged@CCaptureController@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetContentSize(__int64 a1, __int64 a2)
{
  if ( *(float *)&a2 != *(float *)(a1 + 76) || *((float *)&a2 + 1) != *(float *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 76) = a2;
    CCaptureController::OnContentSizeChanged((CCaptureController *)a1);
  }
  return 0LL;
}
