/*
 * XREFs of AdtpDbInitializePrivilegeObject @ 0x140697430
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1408119A0 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 */

__int64 AdtpDbInitializePrivilegeObject()
{
  __int64 v0; // rbx
  const WCHAR **v1; // rsi
  _QWORD *v2; // rdi
  const WCHAR *v3; // rdx

  v0 = 0LL;
  AdtpWellKnownPrivilegeMaxLen = 0;
  v1 = (const WCHAR **)off_14000BDD0;
  v2 = &AdtpKnownPrivilege;
  do
  {
    v3 = *v1;
    v2[2] = (int)v0 + 2;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)&AdtpKnownPrivilege + 24 * v0), v3);
    if ( (unsigned __int16)AdtpWellKnownPrivilegeMaxLen < *(_WORD *)v2 )
      AdtpWellKnownPrivilegeMaxLen = *(_WORD *)v2;
    v0 = (unsigned int)(v0 + 1);
    ++v1;
    v2 += 3;
  }
  while ( (unsigned int)v0 < 0x23 );
  return 0LL;
}
