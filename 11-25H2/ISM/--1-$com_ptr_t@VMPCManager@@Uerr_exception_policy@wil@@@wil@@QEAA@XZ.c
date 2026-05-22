/*
 * XREFs of ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7FC0
 * Callers:
 *     ??1MPCManagerConnection@@UEAA@XZ @ 0x1800B81D4 (--1MPCManagerConnection@@UEAA@XZ.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DC4E0 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800DC620 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DC6F0 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ??1SystemContextEndpointProxy@@UEAA@XZ @ 0x18013E7E4 (--1SystemContextEndpointProxy@@UEAA@XZ.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x180188D28 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 *     _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1801CE873 (_PenDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _PenInterface::UpdateTransducerProperties_::_1_::dtor$0 @ 0x1801CE8A9 (_PenInterface--UpdateTransducerProperties_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1801CE8BB (_PenDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 8LL))(v1 + 16);
  return result;
}
