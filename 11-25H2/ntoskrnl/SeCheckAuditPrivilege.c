/*
 * XREFs of SeCheckAuditPrivilege @ 0x14092D41C
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x140783450 (NtDeleteObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14092DA70 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14092E1E0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14092E4B0 (NtPrivilegeObjectAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0BC10 (NtCloseObjectAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140400B10 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x14092D340 (SepFilterPrivilegeAudits.c)
 */

char __fastcall SeCheckAuditPrivilege(__int64 *a1, char a2)
{
  __int64 v4; // rcx
  char v5; // bp
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // rsi
  PSE_EXPORTS v10; // r14
  unsigned int v11[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h] BYREF
  int v13; // [rsp+50h] [rbp-28h]

  v11[0] = 1;
  v4 = a1[2];
  v11[1] = 1;
  v12 = SeAuditPrivilege;
  v13 = 0;
  v5 = SepPrivilegeCheck(v4, (__int64)&v12, 1u, 1, a2);
  if ( a2 )
  {
    v6 = *a1;
    v7 = *a1;
    if ( !*a1 )
      v7 = a1[2];
    v8 = **(void ***)(v7 + 152);
    if ( !RtlEqualSid(SeLocalSystemSid, v8) )
    {
      if ( (v10 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v8))
        && !RtlEqualSid(v10->SeLocalServiceSid, v8)
        || SepFilterPrivilegeAudits(1, v11) )
      {
        SepAdtPrivilegedServiceAuditAlarm(
          (struct _SECURITY_SUBJECT_CONTEXT *)a1,
          &SeSubsystemName,
          0LL,
          v6,
          a1[2],
          v11,
          v5);
      }
    }
  }
  return v5;
}
