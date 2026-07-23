/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C
 * Callers:
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140861BC0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepIsAclEqual @ 0x140863BB4 (SepIsAclEqual.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     SepQueryTypeString @ 0x140913780 (SepQueryTypeString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v5; // rdi
  unsigned __int16 *v6; // r14
  void *v7; // rsi
  _QWORD **PrimaryToken; // r13
  __int64 v11; // r15
  int v12; // r9d
  signed int v13; // ebx
  int v14; // r9d
  int v15; // eax
  int v16; // eax
  void *v17; // [rsp+58h] [rbp-61h] BYREF
  PVOID P; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _OWORD v20[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-11h]
  _OWORD v22[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+17h]
  void *v24; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+128h] [rbp+6Fh]

  v25 = a3;
  v24 = 0LL;
  P = 0LL;
  v21 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  v7 = 0LL;
  memset(v20, 0, sizeof(v20));
  v17 = 0LL;
  memset(v22, 0, sizeof(v22));
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
      v16 = SepQueryTypeString(a2, &v24);
      v5 = v24;
      v13 = v16;
      if ( v16 < 0 )
        goto LABEL_17;
      if ( v24 )
        v6 = (unsigned __int16 *)v24;
    }
    LOBYTE(v20[0]) = 1;
    if ( SWORD1(v20[0]) < 0 )
      goto LABEL_30;
    v21 = 0LL;
    if ( a4 )
      v21 = a4;
    LOBYTE(v12) = 1;
    WORD1(v20[0]) = WORD1(v20[0]) & 0xFFF3 | 4;
    v13 = SeCaptureSecurityDescriptor((unsigned int)v20, 0, 1, v12, (__int64)&P);
    if ( v13 < 0 )
      goto LABEL_17;
    LOBYTE(v22[0]) = 1;
    if ( SWORD1(v22[0]) < 0 )
    {
LABEL_30:
      v13 = -1073741703;
    }
    else
    {
      v23 = 0LL;
      if ( v11 )
        v23 = v11;
      LOBYTE(v14) = 1;
      WORD1(v22[0]) = WORD1(v22[0]) & 0xFFF3 | 4;
      v15 = SeCaptureSecurityDescriptor((unsigned int)v22, 0, 1, v14, (__int64)&v17);
      v7 = v17;
      v13 = v15;
      if ( v15 >= 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          v6,
          0LL,
          v25,
          *PrimaryToken[19],
          (__int64)P,
          4u,
          (__int64)v17);
    }
LABEL_17:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v13 < 0 )
      SepAuditFailed(v13);
    goto LABEL_5;
  }
  SepAuditFailed(-1073741700);
}
