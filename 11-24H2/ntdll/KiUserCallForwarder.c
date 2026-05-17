/*
 * XREFs of KiUserCallForwarder @ 0x180165B30
 * Callers:
 *     KiUserApcDispatcher @ 0x180165B80 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcher @ 0x180165CA0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x1800FAB80 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 KiUserCallForwarder()
{
  __int64 v0; // rdx
  __int64 (__fastcall *v1)(_QWORD, __int64, __int64, __int64); // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  _guard_check_icall_fptr();
  return v1(v1, v0, v2, v3);
}
