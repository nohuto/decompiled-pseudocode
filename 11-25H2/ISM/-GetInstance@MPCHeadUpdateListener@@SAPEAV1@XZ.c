/*
 * XREFs of ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800735D4
 * Callers:
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z @ 0x180073470 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z.c)
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CDBA8 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800CE2DC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800D56DC (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x18007360C (std--call_once__lambda_a860493e5708769190ef41fba30dc41a___.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPCHeadUpdateListener *MPCHeadUpdateListener::GetInstance(void)
{
  const char *v0; // r9
  struct MPCHeadUpdateListener *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  std::call_once__lambda_a860493e5708769190ef41fba30dc41a___();
  result = MPCHeadUpdateListener::s_instance;
  if ( !MPCHeadUpdateListener::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      v0);
  return result;
}
