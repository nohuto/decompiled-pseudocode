/*
 * XREFs of ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ @ 0x14000E8AC (-Release@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140026F00 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 */

void __fastcall CProcessNode::SetRightFormat(CProcessNode *this, struct IAudioMediaType *a2)
{
  ATL::CComPtrBase<IAudioMediaType>::Release((_QWORD *)this + 1);
  ATL::CComPtrBase<IAudioMediaType>::Release((_QWORD *)this + 2);
  ATL::CComPtr<IDeviceGraphObjectCache>::operator=((char *)this + 8, a2);
  ATL::CComPtr<IDeviceGraphObjectCache>::operator=((char *)this + 16, a2);
}
