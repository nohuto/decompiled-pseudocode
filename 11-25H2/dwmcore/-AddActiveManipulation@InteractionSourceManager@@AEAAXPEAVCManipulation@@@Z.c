/*
 * XREFs of ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x1801BC8BC
 * Callers:
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1800F650C (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801BC7BC (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ??$_Emplace_front_internal@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAX$$QEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801BC93C (--$_Emplace_front_internal@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$deq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InteractionSourceManager::AddActiveManipulation(
        InteractionSourceManager *this,
        struct CManipulation *a2)
{
  __int64 (__fastcall *v4)(CMILRefCountImpl *); // rax
  struct CManipulation *v5; // [rsp+30h] [rbp+8h] BYREF

  CManipulation::SetCaptureState_RenderThread(a2, 2);
  v5 = a2;
  if ( a2 )
  {
    v4 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
    if ( v4 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(a2);
    else
      v4(a2);
  }
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_front_internal<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
    (char *)this + 72,
    &v5);
  if ( v5 )
    (*(void (__fastcall **)(struct CManipulation *))(*(_QWORD *)v5 + 16LL))(v5);
}
