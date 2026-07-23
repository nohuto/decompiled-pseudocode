/*
 * XREFs of KiUserCallbackDispatcher @ 0x180164060
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1801600F0 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x180163EF0 (KiUserCallForwarder.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  __int64 v7; // [rsp+20h] [rbp+20h]

  v5 = KiUserCallForwarder(v7, (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)(unsigned int)a5);
  v6 = ZwCallbackReturn(0LL, 0, v5);
  RtlRaiseStatus(v6);
}
