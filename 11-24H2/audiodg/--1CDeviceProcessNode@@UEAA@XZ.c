/*
 * XREFs of ??1CDeviceProcessNode@@UEAA@XZ @ 0x1400398DC
 * Callers:
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x1400398A0 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400399A0 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

void __fastcall CDeviceProcessNode::~CDeviceProcessNode(CDeviceProcessNode *this, unsigned int a2)
{
  CEndpointInstance *v3; // rcx

  *(_QWORD *)this = &CDeviceProcessNode::`vftable';
  v3 = (CEndpointInstance *)*((_QWORD *)this + 4);
  if ( v3 )
    CEndpointInstance::`scalar deleting destructor'(v3, a2);
  *((_QWORD *)this + 4) = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 6);
  CProcessNode::~CProcessNode(this);
}
