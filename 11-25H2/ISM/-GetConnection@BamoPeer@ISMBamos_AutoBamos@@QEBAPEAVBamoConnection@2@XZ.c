/*
 * XREFs of ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ @ 0x18002EFA0
 * Callers:
 *     ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x18002E44C (-CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAt.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18002E510 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18002ECAC (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 *     ??0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z @ 0x18002EE58 (--0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z.c)
 *     ?CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverClientProxy@@@Z @ 0x180135E3C (-CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverCli.c)
 *     ?CreateSystemContextEndpointProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemContextEndpointProxy@@@Z @ 0x18013E84C (-CreateSystemContextEndpointProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemContextE.c)
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18015418C (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18015A76C (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?CreateDeviceDockClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDeviceDockClientProxy@@@Z @ 0x180180D3C (-CreateDeviceDockClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDeviceDockClientPro.c)
 * Callees:
 *     <none>
 */

struct ISMBamos_AutoBamos::BamoConnection *__fastcall ISMBamos_AutoBamos::BamoPeer::GetConnection(
        ISMBamos_AutoBamos::BamoPeer *this)
{
  __int64 v1; // rcx
  struct ISMBamos_AutoBamos::BamoConnection *result; // rax

  v1 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
  result = 0LL;
  if ( *(int *)(v1 + 8) > 0 )
    return *(struct ISMBamos_AutoBamos::BamoConnection **)(v1 + 16);
  return result;
}
