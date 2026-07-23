/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x1407964B0
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x1407965B0 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140C3D2A8 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x140A24630 (SepRegQueryValue.c)
 */

char SepAdtInitializePrivilegeAuditing()
{
  __int64 **v0; // rax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !SepAdtRegNotifyHandle || (SepRegQueryValue(SepAdtRegNotifyHandle, &v2), v0 = SepFilterPrivilegesShort, !v2) )
    v0 = SepFilterPrivilegesLong;
  SepFilterPrivileges = v0;
  return 1;
}
