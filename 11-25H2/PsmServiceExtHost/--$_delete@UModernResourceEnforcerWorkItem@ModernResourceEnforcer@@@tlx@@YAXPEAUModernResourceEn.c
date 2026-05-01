/*
 * XREFs of ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18001D3E0
 * Callers:
 *     PsmHostStateNotification2 @ 0x18001CD40 (PsmHostStateNotification2.c)
 * Callees:
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18005BEBC (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 */

void *__fastcall tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(
        ModernResourceEnforcer::ModernResourceEnforcerWorkItem *a1,
        unsigned int a2)
{
  void *result; // rax

  if ( a1 )
    return ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(a1, a2);
  return result;
}
