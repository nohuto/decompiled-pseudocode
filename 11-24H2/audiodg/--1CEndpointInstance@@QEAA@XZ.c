/*
 * XREFs of ??1CEndpointInstance@@QEAA@XZ @ 0x1400399CC
 * Callers:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400399A0 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CEndpointInstance::~CEndpointInstance(CEndpointInstance *this)
{
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this);
}
