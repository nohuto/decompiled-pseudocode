/*
 * XREFs of ??1CStreamProcessNode@@UEAA@XZ @ 0x14003995C
 * Callers:
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140039920 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 *     ??_ECBridgeSourceProcessNode@@UEAAPEAXI@Z @ 0x14006C420 (--_ECBridgeSourceProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400399A0 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

void __fastcall CStreamProcessNode::~CStreamProcessNode(CStreamProcessNode *this, unsigned int a2)
{
  CEndpointInstance *v3; // rcx

  *(_QWORD *)this = &CStreamProcessNode::`vftable';
  v3 = (CEndpointInstance *)*((_QWORD *)this + 4);
  if ( v3 )
    CEndpointInstance::`scalar deleting destructor'(v3, a2);
  *((_QWORD *)this + 4) = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 6);
  CProcessNode::~CProcessNode(this);
}
