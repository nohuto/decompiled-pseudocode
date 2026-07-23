/*
 * XREFs of SepCopyTokenIntegrity @ 0x140409240
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1403239D8 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeQueryTokenIntegrity @ 0x140409224 (SeQueryTokenIntegrity.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     SepAdjustPrivileges @ 0x140984FA0 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
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
