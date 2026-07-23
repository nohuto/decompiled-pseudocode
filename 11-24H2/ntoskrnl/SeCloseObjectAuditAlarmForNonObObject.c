/*
 * XREFs of SeCloseObjectAuditAlarmForNonObObject @ 0x1407927F0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtCloseObjectAuditAlarm @ 0x14084987C (SepAdtCloseObjectAuditAlarm.c)
 */

__int64 __fastcall SeCloseObjectAuditAlarmForNonObObject(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( a4 )
    return SepAdtCloseObjectAuditAlarm(a1, a2, a3, 0, 1);
  return result;
}
