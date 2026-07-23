/*
 * XREFs of IopDispatchSessionNotifications @ 0x1407132A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopDispatchSessionNotifications(_QWORD *CallbackContext, int *Argument1, PVOID Argument2)
{
  __int64 v4; // rax
  int v6; // edx
  _QWORD *v7; // rcx

  v4 = CallbackContext[6];
  v6 = *((_DWORD *)IopSessionEventType + Argument1[8]);
  v7 = Argument1 + 14;
  if ( (!v4 || v4 == *v7) && (v6 & (_DWORD)CallbackContext[7]) != 0 )
    guard_dispatch_icall_no_overrides(*v7, CallbackContext[5]);
}
