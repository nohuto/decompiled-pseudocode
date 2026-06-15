/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x140039E0C
 * Callers:
 *     ??1CAPOProcessNode@@UEAA@XZ @ 0x14003776C (--1CAPOProcessNode@@UEAA@XZ.c)
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x140039BDC (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x140039C5C (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??_ECProcessNode@@UEAAPEAXI@Z @ 0x140039DD0 (--_ECProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  *(_QWORD *)this = &CProcessNode::`vftable';
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 1);
}
