/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x1408BA300
 * Callers:
 *     SeCheckPrivilegedObject @ 0x1408BA228 (SeCheckPrivilegedObject.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 */

char __fastcall SePrivilegeObjectAuditAlarm(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int8 a5,
        char a6)
{
  char result; // al

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm(&SeSubsystemName, 0LL, 0LL, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
