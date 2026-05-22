/*
 * XREFs of ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x180036D1C
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001BE80 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@Win32kInterop.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800386C0 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??1RawMouseTargetingEntry@Win32kInterop@@QEAA@XZ @ 0x1800EE5E0 (--1RawMouseTargetingEntry@Win32kInterop@@QEAA@XZ.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800EE5F0 (--1Win32kInterop@@UEAA@XZ.c)
 *     _ButtonProcessor::OnInputReport_::_1_::dtor$2 @ 0x1801CA788 (_ButtonProcessor--OnInputReport_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::TargetingInfo::~TargetingInfo(Win32kInterop::TargetingInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
