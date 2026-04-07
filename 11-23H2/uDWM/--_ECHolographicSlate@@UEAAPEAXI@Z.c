/*
 * XREFs of ??_ECHolographicSlate@@UEAAPEAXI@Z @ 0x1800C1750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CHolographicSlate@@UEAA@XZ @ 0x1800C170C (--1CHolographicSlate@@UEAA@XZ.c)
 */

CHolographicSlate *__fastcall CHolographicSlate::`vector deleting destructor'(CHolographicSlate *this, char a2)
{
  CHolographicSlate::~CHolographicSlate(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CHolographicSlate *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
