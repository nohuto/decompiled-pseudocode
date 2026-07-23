/*
 * XREFs of SeAuditingFileOrGlobalEvents @ 0x140791DF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SepRmGlobalSaclFind @ 0x14088DDC4 (SepRmGlobalSaclFind.c)
 */

BOOLEAN __stdcall SeAuditingFileOrGlobalEvents(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  BOOLEAN v5; // bl
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int16 v10; // ax
  __int64 v11; // rax
  char *v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  UNICODE_STRING v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v19 = 0LL;
  v18 = 0LL;
  RtlInitUnicodeString(&v18, L"File");
  LOBYTE(v7) = 1;
  if ( (unsigned int)SepRmGlobalSaclFind(&v19, 0LL, &v18, v7) != -1073741772 )
    goto LABEL_9;
  v10 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v10 & 0x10) == 0 )
    return 0;
  if ( v10 < 0 )
  {
    v11 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v11 )
    {
      v12 = (char *)SecurityDescriptor + v11;
      goto LABEL_7;
    }
    return 0;
  }
  v12 = (char *)*((_QWORD *)SecurityDescriptor + 3);
LABEL_7:
  if ( !v12 )
    return 0;
LABEL_9:
  LOBYTE(v8) = AccessGranted;
  LOBYTE(v9) = AccessGranted == 0;
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(117LL, v8, v9, SubjectSecurityContext) )
    return 1;
  LOBYTE(v15) = AccessGranted == 0;
  LOBYTE(v14) = AccessGranted;
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(130LL, v14, v15, SubjectSecurityContext) )
    return 1;
  LOBYTE(v17) = AccessGranted == 0;
  LOBYTE(v16) = AccessGranted;
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(3LL, v16, v17, SubjectSecurityContext) )
    return 1;
  return v5;
}
