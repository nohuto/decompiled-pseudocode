/*
 * XREFs of ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E860
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E320 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ @ 0x14000E8DC (-Release@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CAPOProcessNode::SetLeftFormat(CAPOProcessNode *this, struct IUnknown *a2)
{
  struct IUnknown **v2; // rbx

  v2 = (struct IUnknown **)((char *)this + 8);
  ATL::CComPtrBase<IAudioMediaType>::Release((char *)this + 8);
  if ( *v2 != a2 )
    ATL::AtlComPtrAssign(v2, a2);
}
