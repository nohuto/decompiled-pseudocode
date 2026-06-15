/*
 * XREFs of ??1CConnectionNode@@UEAA@XZ @ 0x14000D13C
 * Callers:
 *     ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x14000D0F0 (--_ECConnectionNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Release@CSharedHandle@@AEAAXXZ @ 0x14000D1D8 (-Release@CSharedHandle@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConnectionNode::~CConnectionNode(CConnectionNode *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CConnectionNode::`vftable';
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 16) = 0LL;
  }
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 17) = 0LL;
  }
  CSharedHandle::Release((CConnectionNode *)((char *)this + 160));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 18);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 14);
}
