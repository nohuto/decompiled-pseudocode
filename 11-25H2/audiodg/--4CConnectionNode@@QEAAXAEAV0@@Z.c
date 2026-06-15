/*
 * XREFs of ??4CConnectionNode@@QEAAXAEAV0@@Z @ 0x14000CE10
 * Callers:
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000CAE8 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ??0CConnectionNode@@QEAA@AEAV0@@Z @ 0x140027A44 (--0CConnectionNode@@QEAA@AEAV0@@Z.c)
 * Callees:
 *     ?Release@CSharedHandle@@AEAAXXZ @ 0x14000D1D8 (-Release@CSharedHandle@@AEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E2F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x14000E34C (--4-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConnectionNode::operator=(__int64 a1, __int64 a2)
{
  struct IUnknown **v4; // rcx
  struct IUnknown *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 *v9; // r14
  __int64 v10; // rcx

  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  v4 = (struct IUnknown **)(a1 + 112);
  v5 = *(struct IUnknown **)(a2 + 112);
  if ( *v4 != v5 )
    ATL::AtlComPtrAssign(v4, v5);
  v6 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 120) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 128) = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator=(a1 + 144, *(_QWORD *)(a2 + 144));
  result = *(_QWORD *)(a2 + 152);
  v9 = (__int64 *)(a2 + 160);
  *(_QWORD *)(a1 + 152) = result;
  if ( a1 + 160 != a2 + 160 )
  {
    CSharedHandle::Release((CSharedHandle *)(a1 + 160));
    result = *v9;
    if ( *v9 )
      _InterlockedIncrement((volatile signed __int32 *)(result + 8));
    *(_QWORD *)(a1 + 160) = result;
  }
  v10 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 136) = v10;
  if ( v10 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return result;
}
