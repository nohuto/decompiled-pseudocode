/*
 * XREFs of SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarm @ 0x14088E160 (SeOpenObjectForDeleteAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14079190C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14084EFE0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x14088DC88 (SeExamineGlobalSacl.c)
 *     SepQueryTypeString @ 0x140913780 (SepQueryTypeString.c)
 *     SepQueryNameString @ 0x140914194 (SepQueryNameString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall SeOpenObjectForDeleteAuditAlarmWithTransaction(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        GUID *TransactionId,
        PBOOLEAN GenerateOnClose)
{
  PUNICODE_STRING v11; // rax
  PVOID v12; // r10
  BOOLEAN v13; // r15
  BOOLEAN v14; // r12
  PVOID v15; // r13
  UNICODE_STRING *v16; // rdi
  UNICODE_STRING *v17; // r14
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  int *v19; // rcx
  ACL *v20; // rdx
  __int16 v21; // ax
  __int16 v22; // cx
  ACL *v23; // rdx
  ACL *v24; // rcx
  PACCESS_TOKEN v25; // r15
  BOOLEAN v26; // r12
  __int16 v27; // ax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 *v32; // rax
  GUID *v33; // r15
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v36; // rcx
  wchar_t *v37; // rax
  int v38; // [rsp+40h] [rbp-91h]
  int v39; // [rsp+58h] [rbp-79h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-29h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-28h] BYREF
  unsigned __int16 v42[2]; // [rsp+ACh] [rbp-25h] BYREF
  signed int v43; // [rsp+B0h] [rbp-21h]
  int **AuxData; // [rsp+B8h] [rbp-19h]
  PVOID v45; // [rsp+C0h] [rbp-11h] BYREF
  PVOID P; // [rsp+C8h] [rbp-9h] BYREF
  PACCESS_TOKEN Token; // [rsp+D0h] [rbp-1h]
  ACCESS_MASK AccessModea; // [rsp+150h] [rbp+7Fh]

  v11 = ObjectTypeName;
  v12 = Object;
  v13 = 0;
  GenerateAudit = 0;
  v14 = 0;
  GenerateAlarm[0] = 0;
  v15 = 0LL;
  P = 0LL;
  v16 = 0LL;
  v45 = 0LL;
  v17 = 0LL;
  v43 = 0;
  v42[0] = 999;
  if ( AccessMode )
  {
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    AuxData = (int **)AccessState->AuxData;
    Token = AccessState->SubjectSecurityContext.ClientToken;
    if ( !Token )
      Token = AccessState->SubjectSecurityContext.PrimaryToken;
    if ( ObjectTypeName && ObjectTypeName->Length )
    {
      v17 = ObjectTypeName;
    }
    else if ( v12 )
    {
      v29 = SepQueryTypeString(v12, &v45);
      v15 = v45;
      v43 = v29;
      if ( v29 < 0 )
        goto LABEL_70;
      v11 = ObjectTypeName;
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      v12 = Object;
      if ( v45 )
        v17 = (UNICODE_STRING *)v45;
    }
    if ( !SecurityDescriptor
      || !SepAdtAuditObjectAccessWithContext(
            (__int64)v12,
            &v11->Length,
            AccessGranted,
            AccessGranted == 0,
            p_SubjectSecurityContext,
            1,
            v42) )
    {
      goto LABEL_8;
    }
    v21 = *((_WORD *)SecurityDescriptor + 1);
    v22 = v21 & 0x8000;
    AccessModea = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    if ( (v21 & 0x10) != 0 )
    {
      if ( v22 )
      {
        v30 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v30 )
          v23 = (ACL *)((char *)SecurityDescriptor + v30);
        else
          v23 = 0LL;
      }
      else
      {
        v23 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      if ( !v22 )
      {
        v24 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        goto LABEL_22;
      }
      v31 = *((unsigned int *)SecurityDescriptor + 3);
      if ( (_DWORD)v31 )
      {
        v24 = (ACL *)((char *)SecurityDescriptor + v31);
        goto LABEL_22;
      }
    }
    else
    {
      v23 = 0LL;
    }
    v24 = 0LL;
LABEL_22:
    v25 = Token;
    v26 = AccessGranted;
    SeExamineSacl(
      v24,
      v23,
      Token,
      AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess,
      AccessGranted,
      &GenerateAudit,
      GenerateAlarm);
    v27 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v27 & 0x10) == 0 )
      goto LABEL_15;
    if ( v27 >= 0 )
    {
      v20 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_16;
    }
    v28 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v28 )
      v20 = (ACL *)((char *)SecurityDescriptor + v28);
    else
LABEL_15:
      v20 = 0LL;
LABEL_16:
    SeExamineGlobalSacl(ObjectTypeName, v20, v25, AccessModea, AccessGranted, &GenerateAudit, GenerateAlarm);
    v13 = GenerateAudit;
    if ( GenerateAudit )
    {
      *GenerateOnClose = 1;
LABEL_46:
      AccessState->GenerateAudit = 1;
      if ( AbsoluteObjectName && AbsoluteObjectName->Length )
      {
        v16 = AbsoluteObjectName;
        goto LABEL_53;
      }
      if ( !Object )
      {
LABEL_53:
        if ( v26 )
        {
          v33 = (GUID *)AuxData;
          SepAdtOpenObjectForDeleteAuditAlarm(
            v42[0],
            (__int64)p_SubjectSecurityContext,
            (__int64)AbsoluteObjectName,
            &v17->Length,
            &v16->Length,
            (__int64)AccessState->SubjectSecurityContext.ClientToken,
            (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
            v38,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            v39,
            (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
            (__int128 *)TransactionId);
          if ( v16 )
          {
            Buffer = AccessState->ObjectName.Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0);
              AccessState->ObjectName.Length = 0;
              AccessState->ObjectName.MaximumLength = 0;
            }
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v16->MaximumLength, 0x20206553u);
            AccessState->ObjectName.Buffer = Pool2;
            if ( Pool2 )
            {
              AccessState->ObjectName.MaximumLength = v16->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectName, v16);
            }
            v33 = (GUID *)AuxData;
          }
          if ( v17 )
          {
            v36 = AccessState->ObjectTypeName.Buffer;
            if ( v36 )
            {
              ExFreePoolWithTag(v36, 0);
              AccessState->ObjectTypeName.Length = 0;
              AccessState->ObjectTypeName.MaximumLength = 0;
            }
            v37 = (wchar_t *)ExAllocatePool2(0x100uLL, v17->MaximumLength, 0x20206553u);
            AccessState->ObjectTypeName.Buffer = v37;
            if ( v37 )
            {
              AccessState->ObjectTypeName.MaximumLength = v17->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectTypeName, v17);
            }
          }
          if ( TransactionId )
            v33[2] = *TransactionId;
        }
        else
        {
          v32 = (__int128 *)TransactionId;
          if ( !TransactionId )
            v32 = (__int128 *)(AuxData + 4);
          SepAdtOpenObjectAuditAlarm(
            v42[0],
            &SeSubsystemName,
            0LL,
            &v17->Length,
            &v16->Length,
            (__int16 *)SecurityDescriptor,
            (_QWORD *)AccessState->SubjectSecurityContext.ClientToken,
            (_QWORD *)AccessState->SubjectSecurityContext.PrimaryToken,
            AccessState->OriginalDesiredAccess,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            0,
            (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
            2,
            0LL,
            0,
            0LL,
            v32,
            (__int64)AccessState);
        }
        goto LABEL_70;
      }
      v43 = SepQueryNameString(Object, &P);
      if ( v43 >= 0 )
      {
        if ( P )
          v16 = (UNICODE_STRING *)P;
        goto LABEL_53;
      }
LABEL_70:
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
LABEL_13:
      if ( v43 < 0 )
        SepAuditFailed(v43);
      return;
    }
    v14 = GenerateAlarm[0];
LABEL_8:
    if ( AccessGranted )
    {
      v19 = *AuxData;
      if ( *AuxData )
      {
        if ( *v19
          && SepAdtAuditPrivilegeUseWithContext(
               (unsigned int *)v19,
               AccessGranted,
               0,
               &AccessState->SubjectSecurityContext,
               v42) )
        {
          v13 = 1;
          AccessState->AuditPrivileges = 1;
        }
      }
    }
    if ( !v13 && !v14 )
      goto LABEL_13;
    v26 = AccessGranted;
    goto LABEL_46;
  }
}
