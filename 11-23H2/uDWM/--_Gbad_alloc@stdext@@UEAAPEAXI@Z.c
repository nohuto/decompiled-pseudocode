/*
 * XREFs of ??_Gbad_alloc@stdext@@UEAAPEAXI@Z @ 0x18009AB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

stdext::bad_alloc *__fastcall stdext::bad_alloc::`scalar deleting destructor'(stdext::bad_alloc *this, char a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, stdext::bad_alloc *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
