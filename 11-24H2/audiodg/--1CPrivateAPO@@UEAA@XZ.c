/*
 * XREFs of ??1CPrivateAPO@@UEAA@XZ @ 0x14000D018
 * Callers:
 *     ??_ECPrivateAPO@@UEAAPEAXI@Z @ 0x14000CFC0 (--_ECPrivateAPO@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CPrivateAPO::~CPrivateAPO(CPrivateAPO *this)
{
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>(this);
}
