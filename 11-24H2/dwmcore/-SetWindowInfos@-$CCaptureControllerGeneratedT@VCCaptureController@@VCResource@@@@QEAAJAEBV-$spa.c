/*
 * XREFs of ?SetWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@@Z @ 0x18027A504
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetWindowInfos(
        CResource *a1,
        __int64 a2)
{
  return CCaptureControllerGeneratedT<CCaptureController,CResource>::SetOrAppendWindowInfos(a1, a2, 0);
}
