/*
 * XREFs of ??1CStreamInstance@@QEAA@XZ @ 0x14001CA44
 * Callers:
 *     ??1?$CComObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x14004055C (--1-$CComObject@VCStreamInstance@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x14005C024 (--1-$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CC70 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x1400277DC (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CStreamInstance::~CStreamInstance(CStreamInstance *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 136);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 16);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 15);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 13);
  ATL::CAutoPtr<CPipeInstance>::Free((char *)this + 80);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CStreamInstance *)((char *)this + 32));
}
