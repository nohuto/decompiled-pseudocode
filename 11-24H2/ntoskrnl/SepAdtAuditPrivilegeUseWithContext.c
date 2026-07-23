/*
 * XREFs of SepAdtAuditPrivilegeUseWithContext @ 0x14084EFE0
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtCheckPrivilegeForSensitivity @ 0x14047A6B8 (SepAdtCheckPrivilegeForSensitivity.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SepFilterPrivilegeAudits @ 0x140912790 (SepFilterPrivilegeAudits.c)
 */

char __fastcall SepAdtAuditPrivilegeUseWithContext(
        unsigned int *a1,
        char a2,
        char a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        _WORD *a5)
{
  char v9; // bp
  char v10; // al
  char v11; // bl
  char result; // al
  char v13; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v14[39]; // [rsp+21h] [rbp-27h] BYREF

  v13 = 0;
  v14[0] = 0;
  v9 = SepAdtAuditThisEventWithContext(131LL, a2, a3, a4);
  v10 = SepAdtAuditThisEventWithContext(132LL, a2, a3, a4);
  v11 = v10;
  if ( !v9 && !v10 || !(unsigned __int8)SepFilterPrivilegeAudits(0LL, a1) )
    return 0;
  if ( v9 && v11 && a1 && *a1 || (SepAdtCheckPrivilegeForSensitivity(a1, &v13, v14), v9) && v13 )
  {
    result = 1;
    *a5 = 131;
    return result;
  }
  if ( !v11 || !v14[0] )
    return 0;
  result = 1;
  *a5 = 132;
  return result;
}
