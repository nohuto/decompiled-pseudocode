/*
 * XREFs of ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x1802F1D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x180046A4C (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CImmersiveMode::v_UnregisterModeNotification(RTL_SRWLOCK *this, int a2)
{
  AgileRegistrationList::Unregister(this + 17, a2);
  return 0LL;
}
