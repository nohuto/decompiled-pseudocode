/*
 * XREFs of ??0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z @ 0x1401360B0
 * Callers:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400C939C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

NetSetupPropertyBag *__fastcall NetSetupPropertyBag::NetSetupPropertyBag(NetSetupPropertyBag *this, struct KRegKey *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
