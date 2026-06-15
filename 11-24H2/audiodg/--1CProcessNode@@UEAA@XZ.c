/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x140039B0C
 * Callers:
 *     ??1CAPOProcessNode@@UEAA@XZ @ 0x14003746C (--1CAPOProcessNode@@UEAA@XZ.c)
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x1400398DC (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x14003995C (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??_ECProcessNode@@UEAAPEAXI@Z @ 0x140039AD0 (--_ECProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  *(_QWORD *)this = &CProcessNode::`vftable';
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 1);
}
