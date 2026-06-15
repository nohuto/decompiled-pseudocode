/*
 * XREFs of ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E870
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E2F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ @ 0x14000E8AC (-Release@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CAPOProcessNode::SetRightFormat(CAPOProcessNode *this, struct IUnknown *a2)
{
  struct IUnknown **v2; // rbx

  v2 = (struct IUnknown **)((char *)this + 16);
  ATL::CComPtrBase<IAudioMediaType>::Release((char *)this + 16);
  if ( *v2 != a2 )
    ATL::AtlComPtrAssign(v2, a2);
}
