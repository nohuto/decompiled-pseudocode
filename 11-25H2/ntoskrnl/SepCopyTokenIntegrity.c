/*
 * XREFs of SepCopyTokenIntegrity @ 0x14041C6A0
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x140368DE8 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeQueryTokenIntegrity @ 0x14041C680 (SeQueryTokenIntegrity.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     SepAdjustPrivileges @ 0x1409353B0 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140A2AC34 (SeIsTokenAssignableToProcess.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SepCopyTokenIntegrity(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _DWORD *result; // rax

  v2 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v2 == -1 || (result = (_DWORD *)(*(_QWORD *)(a1 + 152) + 16 * v2)) == 0LL )
  {
    result = SeUntrustedMandatorySid;
    *(_QWORD *)a2 = SeUntrustedMandatorySid;
    *(_DWORD *)(a2 + 8) = 96;
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)result;
    *(_DWORD *)(a2 + 8) = result[2];
  }
  return result;
}
