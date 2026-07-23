/*
 * XREFs of SeCheckAuditPrivilege @ 0x140912648
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x1407926E0 (NtDeleteObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1409134B0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140913820 (NtPrivilegeObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0E0E0 (NtCloseObjectAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x140912790 (SepFilterPrivilegeAudits.c)
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
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v11) )
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
