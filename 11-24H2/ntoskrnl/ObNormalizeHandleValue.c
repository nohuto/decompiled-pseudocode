/*
 * XREFs of ObNormalizeHandleValue @ 0x1408F0680
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084D5BC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408F03C0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408F07FC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1408F0A50 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408F1920 (SepAdtStagingEvent.c)
 *     SeAuditHandleDuplication @ 0x140AAE150 (SeAuditHandleDuplication.c)
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
