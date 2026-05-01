/*
 * XREFs of ?GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180215A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetListeners(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  return AgileRegistrationList::GetCallbackArray(this + 26, a2);
}
