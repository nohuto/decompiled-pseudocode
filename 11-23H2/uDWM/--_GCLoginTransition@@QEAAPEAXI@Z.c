/*
 * XREFs of ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180108BA8
 * Callers:
 *     sub_18007ADF9 @ 0x18007ADF9 (sub_18007ADF9.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180108658 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18002DB6C (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CLoginTransition *__fastcall CLoginTransition::`scalar deleting destructor'(CLoginTransition *this)
{
  *(_QWORD *)this = &CLoginTransition::`vftable';
  CLoginTransition::StopAnimation(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CLoginTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
