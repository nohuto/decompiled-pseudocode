/*
 * XREFs of ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B5D80
 * Callers:
 *     ?OnDeviceRemoval@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18008A4B0 (-OnDeviceRemoval@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ??1MPCManagerConnection@@UEAA@XZ @ 0x1800B5F94 (--1MPCManagerConnection@@UEAA@XZ.c)
 *     ?OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z @ 0x1800C9864 (-OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z.c)
 *     ?OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9A24 (-OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 *     ?TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800CA3A8 (-TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF640 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800DF780 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DF850 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DFCA0 (-OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z.c)
 *     ??1SystemContextEndpointProxy@@UEAA@XZ @ 0x1801409B4 (--1SystemContextEndpointProxy@@UEAA@XZ.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x180190848 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 *     ?CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801979D0 (-CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 *     ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801C580C (-CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceQueryRemove@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801C5A30 (-OnDeviceQueryRemove@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     _HapticDeviceCollection::OnDeviceQueryRemove_::_1_::dtor$0 @ 0x1801D5051 (_HapticDeviceCollection--OnDeviceQueryRemove_--_1_--dtor$0.c)
 *     _HapticProcessor::OnMouseRemoval_::_1_::dtor$1 @ 0x1801D5063 (_HapticProcessor--OnMouseRemoval_--_1_--dtor$1.c)
 *     _HapticProcessor::TryAttachHapticMouse_::_1_::dtor$0 @ 0x1801D5087 (_HapticProcessor--TryAttachHapticMouse_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1801D5F20 (_PenDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _PenInterface::UpdateTransducerProperties_::_1_::dtor$0 @ 0x1801D5F56 (_PenInterface--UpdateTransducerProperties_--_1_--dtor$0.c)
 *     _PTPProcessor::OnDeviceRemoval_::_1_::dtor$0 @ 0x1801D5F68 (_PTPProcessor--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _PTPProcessor::OnDeviceQueryRemove_::_1_::dtor$0 @ 0x1801D8D96 (_PTPProcessor--OnDeviceQueryRemove_--_1_--dtor$0.c)
 *     _PTPProcessor::CheckForHapticTouchpadArrival_::_1_::dtor$2 @ 0x1801D9A45 (_PTPProcessor--CheckForHapticTouchpadArrival_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
