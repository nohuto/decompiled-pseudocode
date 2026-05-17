/*
 * XREFs of KiUserCallbackDispatcher @ 0x180165CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x180161D30 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x180165B30 (KiUserCallForwarder.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax

  KiUserCallForwarder();
  v5 = ZwCallbackReturn();
  RtlRaiseStatus(v5);
}
