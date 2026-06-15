/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x140027B34
 * Callers:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140027B08 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000E900 (-RemoveAll@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000E964 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EB5C (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 */

void __fastcall CPipeInstance::~CPipeInstance(CPipeInstance *this)
{
  CPipeInstance::Cleanup((struct IAudioProcessor **)this);
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll((__int64 *)this + 31);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 30);
  CoTaskMemFree(*((LPVOID *)this + 24));
  *((_QWORD *)this + 24) = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 23);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 22);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 19);
  ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAll((__int64 *)this + 8);
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)this + 16);
}
