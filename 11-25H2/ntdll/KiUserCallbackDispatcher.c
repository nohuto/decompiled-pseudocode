/*
 * XREFs of KiUserCallbackDispatcher @ 0x180167230
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1801632C0 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1801670C0 (KiUserCallForwarder.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax

  KiUserCallForwarder();
  v5 = ZwCallbackReturn();
  RtlRaiseStatus(v5);
}
