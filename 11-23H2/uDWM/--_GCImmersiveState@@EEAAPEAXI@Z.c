/*
 * XREFs of ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x180004140
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveState@@EEAA@XZ @ 0x180004264 (--1CImmersiveState@@EEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

CImmersiveState *__fastcall CImmersiveState::`scalar deleting destructor'(CImmersiveState *this, char a2)
{
  CImmersiveState::~CImmersiveState(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CImmersiveState *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
