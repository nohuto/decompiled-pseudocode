/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x140982C90
 * Callers:
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x140856980 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14092E1B0 (SeReleaseSecurityDescriptor.c)
 *     SepIsAclEqual @ 0x140982EF4 (SepIsAclEqual.c)
 *     SepQueryTypeString @ 0x1409837B4 (SepQueryTypeString.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140984A0C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v5; // rdi
  int v6; // r14d
  void *v7; // rsi
  _QWORD **PrimaryToken; // r13
  __int64 v11; // r15
  signed int v12; // ebx
  int v13; // eax
  int v14; // eax
  void *v15; // [rsp+58h] [rbp-61h] BYREF
  void *v16; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _OWORD v18[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-11h]
  _OWORD v20[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+17h]
  void *v22; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v23; // [rsp+128h] [rbp+6Fh]

  v23 = a3;
  v22 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = 0LL;
  v6 = 0;
  v21 = 0LL;
  v7 = 0LL;
  memset(v18, 0, sizeof(v18));
  v15 = 0LL;
  memset(v20, 0, sizeof(v20));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    if ( !SepAdtAuditThisEventWithContext(142LL, 1, 0, &SubjectContext)
      || (v11 = a5, (unsigned __int8)SepIsAclEqual(a4, a5)) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v14 = SepQueryTypeString(a2, &v22);
      v5 = v22;
      v12 = v14;
      if ( v14 < 0 )
        goto LABEL_17;
      if ( v22 )
        v6 = (int)v22;
    }
    LOBYTE(v18[0]) = 1;
    if ( SWORD1(v18[0]) < 0 )
      goto LABEL_30;
    v19 = 0LL;
    if ( a4 )
      v19 = a4;
    WORD1(v18[0]) = WORD1(v18[0]) & 0xFFF3 | 4;
    v12 = SeCaptureSecurityDescriptor((__int64)v18, 0, 1, 1, &v16);
    if ( v12 < 0 )
      goto LABEL_17;
    LOBYTE(v20[0]) = 1;
    if ( SWORD1(v20[0]) < 0 )
    {
LABEL_30:
      v12 = -1073741703;
    }
    else
    {
      v21 = 0LL;
      if ( v11 )
        v21 = v11;
      WORD1(v20[0]) = WORD1(v20[0]) & 0xFFF3 | 4;
      v13 = SeCaptureSecurityDescriptor((__int64)v20, 0, 1, 1, &v15);
      v7 = v15;
      v12 = v13;
      if ( v13 >= 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v6,
          0,
          v23,
          *PrimaryToken[19],
          (__int64)v16,
          4,
          (__int64)v15);
    }
LABEL_17:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v16 )
      SeReleaseSecurityDescriptor(v16, 0, 1);
    if ( v7 )
      SeReleaseSecurityDescriptor(v7, 0, 1);
    if ( v12 < 0 )
      SepAuditFailed(v12);
    goto LABEL_5;
  }
  SepAuditFailed(-1073741700);
}
