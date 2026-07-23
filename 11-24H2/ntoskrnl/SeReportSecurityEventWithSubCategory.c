/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x1403C25D0
 * Callers:
 *     SeReportSecurityEvent @ 0x1406067C0 (SeReportSecurityEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DDDB8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  __int64 v7; // r8
  PUNICODE_STRING v8; // rbx
  USHORT Type; // cx
  unsigned __int8 CurrentIrql; // r13
  __int64 v11; // rdx
  char v12; // cl
  unsigned __int8 *v13; // rdi
  ULONG AuditId; // edx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  ULONG ParameterCount; // ebx
  int Length; // eax
  __int64 v21; // rcx
  unsigned __int8 **v22; // rax
  _QWORD *v23; // r9
  _QWORD SubjectContext[5]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD Src[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+50h] [rbp-B8h]
  __int16 v27; // [rsp+58h] [rbp-B0h]
  USHORT v28; // [rsp+5Ah] [rbp-AEh]
  int v29; // [rsp+5Ch] [rbp-ACh]
  _DWORD v30[6]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 *v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+80h] [rbp-88h]
  int v33; // [rsp+84h] [rbp-84h]
  const int *v34; // [rsp+98h] [rbp-70h]
  int v35; // [rsp+A0h] [rbp-68h]
  int v36; // [rsp+A4h] [rbp-64h]
  PUNICODE_STRING v37; // [rsp+B8h] [rbp-50h]

  v7 = 0LL;
  v8 = SourceName;
  memset(&SubjectContext[1], 0, 32);
  if ( !Flags )
  {
    if ( SourceName )
    {
      if ( SourceName->Buffer )
      {
        if ( SourceName->Length )
        {
          if ( AuditParameters )
          {
            if ( AuditSubcategoryId - 100 <= 0x3B && AuditParameters->ParameterCount <= 0x1C )
            {
              Type = AuditParameters->Type;
              if ( (Type & 0x18) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql < 2u )
                {
                  if ( UserSid )
                  {
                    v13 = (unsigned __int8 *)UserSid;
                  }
                  else
                  {
                    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
                    v7 = 0LL;
                    v21 = SubjectContext[3];
                    if ( SubjectContext[1] )
                      v21 = SubjectContext[1];
                    v22 = *(unsigned __int8 ***)(v21 + 152);
                    Type = AuditParameters->Type;
                    v13 = *v22;
                  }
                  v23 = &SubjectContext[1];
                  if ( v13 == UserSid )
                    v23 = 0LL;
                  LOBYTE(v7) = Type == 16;
                  LOBYTE(SourceName) = Type == 8;
                  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(AuditSubcategoryId, SourceName, v7, v23) )
                  {
LABEL_30:
                    if ( v13 )
                    {
                      if ( v13 != UserSid )
                        SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
                    }
                    return 0;
                  }
                }
                else
                {
                  v11 = 2LL * (AuditSubcategoryId - 100);
                  if ( Type == 8 )
                    v12 = SeAuditingState[v11];
                  else
                    v12 = SeAuditingState[v11 + 1];
                  if ( !v12 )
                    return 0;
                  v13 = (unsigned __int8 *)SeLocalSystemSid;
                  if ( UserSid )
                    v13 = (unsigned __int8 *)UserSid;
                }
                memset_0(Src, 0, 0x418uLL);
                AuditId = AuditParameters->AuditId;
                Src[0] = AuditParameters->CategoryId;
                v28 = AuditParameters->Type;
                v15 = v13[1];
                Src[1] = AuditId;
                v27 = AuditSubcategoryId;
                v30[0] = 4;
                v31 = v13;
                v30[1] = 4 * v15 + 8;
                v34 = &SeSubsystemName;
                v32 = 1;
                v33 = 32;
                v26 = 2;
                if ( AuditSubcategoryId == 123 )
                {
                  v29 |= 6u;
                  Length = v8->Length;
                  v35 = 1;
                  v16 = 3LL;
                  v36 = Length + 16;
                  v37 = v8;
                  v26 = 3;
                }
                else
                {
                  v16 = 2LL;
                  v17 = v29 | 8;
                  v29 |= 8u;
                  if ( AuditId < 0x5FF )
                    v29 = v17 | 2;
                }
                ParameterCount = AuditParameters->ParameterCount;
                memmove(&v30[8 * v16], AuditParameters->Parameters, 32LL * ParameterCount);
                v26 += ParameterCount;
                SepAdtLogAuditRecord(Src);
                if ( CurrentIrql >= 2u )
                  return 0;
                goto LABEL_30;
              }
            }
          }
        }
      }
    }
  }
  return -1073741811;
}
