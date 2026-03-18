/*
 * XREFs of IopDispatchSessionNotifications @ 0x140715710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopDispatchSessionNotifications(_QWORD *CallbackContext, int *Argument1, PVOID Argument2)
{
  __int64 v3; // r11
  __int64 v4; // rax
  _QWORD *v6; // rcx

  v3 = Argument1[8];
  v4 = CallbackContext[6];
  v6 = Argument1 + 14;
  if ( (!v4 || v4 == *v6) && (*((_DWORD *)IopSessionEventType + v3) & (_DWORD)CallbackContext[7]) != 0 )
    guard_dispatch_icall_no_overrides(*v6, CallbackContext[5], (unsigned int)v3, CallbackContext[8]);
}
