/*
 * XREFs of ObNormalizeHandleValue @ 0x140984D80
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140780E64 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1409842A0 (SeOperationAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409847B8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140984A0C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409851A4 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409858B0 (SepAdtStagingEvent.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140985C34 (SepAdtCloseObjectAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x140985E58 (SeAuditHandleDuplication.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ObNormalizeHandleValue(unsigned __int64 a1)
{
  bool v1; // dl
  unsigned __int64 v2; // rax

  v1 = (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
  v2 = a1 ^ 0xFFFFFFFF80000000uLL;
  if ( !v1 )
    v2 = a1;
  return v2 & 0xFFFFFFFFFFFFFFFCuLL;
}
