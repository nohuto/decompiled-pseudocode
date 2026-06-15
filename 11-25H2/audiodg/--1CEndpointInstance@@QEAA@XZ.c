/*
 * XREFs of ??1CEndpointInstance@@QEAA@XZ @ 0x140039CCC
 * Callers:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140039CA0 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CEndpointInstance::~CEndpointInstance(CEndpointInstance *this)
{
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this);
}
