/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14084DE00 (CmpCheckKeyBodyAccess.c)
 *     SeOpenObjectAuditAlarm @ 0x14084E3A0 (SeOpenObjectAuditAlarm.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCheckCreateAccess @ 0x14086BFEC (CmpCheckCreateAccess.c)
 *     ObCheckObjectAccess @ 0x14087E5F0 (ObCheckObjectAccess.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x140458434 (SepRmAcquireGlobalSaclReadLock.c)
 *     SeMaximumAuditMask @ 0x140499CD8 (SeMaximumAuditMask.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14084EFE0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140863120 (SepAdtStagingEvent.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14088E1C0 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepQueryTypeString @ 0x140913780 (SepQueryTypeString.c)
 *     SepQueryNameString @ 0x140914194 (SepQueryNameString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall SeOpenObjectAuditAlarmWithTransaction(
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
  int v10; // r13d
  unsigned int *v11; // r14
  int v12; // eax
  PACCESS_TOKEN ClientToken; // rsi
  char *AuxData; // r12
  BOOLEAN v15; // bl
  _BOOL8 v16; // r8
  BOOLEAN v17; // r10
  unsigned __int8 i; // al
  char v19; // al
  const UNICODE_STRING *v20; // r15
  PVOID v21; // rsi
  _DWORD *v22; // rcx
  __int16 v23; // ax
  ACCESS_MASK v24; // r15d
  __int16 v25; // cx
  ACL *v26; // rdx
  ACL *v27; // rcx
  __int16 v28; // ax
  ACL *v29; // r14
  __int64 v30; // rbx
  __int16 v31; // ax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  const UNICODE_STRING *v37; // r14
  PVOID v38; // rsi
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v41; // rcx
  wchar_t *v42; // rax
  int v43; // eax
  GUID *v44; // rax
  int v45; // edx
  ACL *v46; // rcx
  BOOLEAN v47; // al
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-49h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+A9h] [rbp-48h] BYREF
  BOOLEAN v50[2]; // [rsp+AAh] [rbp-47h] BYREF
  _WORD v51[2]; // [rsp+ACh] [rbp-45h] BYREF
  PVOID v52; // [rsp+B0h] [rbp-41h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+B8h] [rbp-39h]
  PVOID P; // [rsp+C0h] [rbp-31h] BYREF
  const UNICODE_STRING *v55; // [rsp+C8h] [rbp-29h]
  char *v59; // [rsp+140h] [rbp+4Fh]

  v59 = (char *)SecurityDescriptor;
  v10 = 0;
  P = 0LL;
  v11 = (unsigned int *)SecurityDescriptor;
  v52 = 0LL;
  SourceString = 0LL;
  v55 = 0LL;
  v51[0] = 999;
  GenerateAudit = 0;
  GenerateAlarm = 0;
  if ( !AccessMode )
    return;
  v12 = (_DWORD)AccessState + 32;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  AuxData = (char *)AccessState->AuxData;
  if ( !ClientToken )
    ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
  v15 = AccessGranted;
  if ( SecurityDescriptor )
  {
    LOBYTE(SecurityDescriptor) = AccessGranted == 0;
    if ( (unsigned __int8)SepAdtAuditObjectAccessWithContext(
                            (_DWORD)Object,
                            (_DWORD)ObjectTypeName,
                            AccessGranted,
                            (_DWORD)SecurityDescriptor,
                            (__int64)&AccessState->SubjectSecurityContext,
                            1,
                            (__int64)v51) )
    {
      v23 = *((_WORD *)v11 + 1);
      v24 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
      v25 = v23 & 0x8000;
      if ( (v23 & 0x10) != 0 )
      {
        if ( v25 )
        {
          v34 = v11[3];
          v26 = (_DWORD)v34 ? (ACL *)((char *)v11 + v34) : 0LL;
        }
        else
        {
          v26 = (ACL *)*((_QWORD *)v11 + 3);
        }
        if ( v25 )
        {
          v35 = v11[3];
          v27 = (_DWORD)v35 ? (ACL *)((char *)v11 + v35) : 0LL;
        }
        else
        {
          v27 = (ACL *)*((_QWORD *)v11 + 3);
        }
      }
      else
      {
        v26 = 0LL;
        v27 = 0LL;
      }
      SeExamineSacl(v27, v26, ClientToken, v24, AccessGranted, &GenerateAudit, &GenerateAlarm);
      v28 = *((_WORD *)v11 + 1);
      if ( (v28 & 0x10) != 0 )
      {
        if ( v28 >= 0 )
        {
          v29 = (ACL *)*((_QWORD *)v11 + 3);
        }
        else
        {
          v33 = v11[3];
          v29 = (_DWORD)v33 ? (ACL *)&v59[v33] : 0LL;
        }
      }
      else
      {
        v29 = 0LL;
      }
      if ( GenerateAudit )
        goto LABEL_39;
      SepRmAcquireGlobalSaclReadLock();
      v30 = SepRmGlobalSaclHead;
      if ( SepRmGlobalSaclHead )
      {
        while ( v30 )
        {
          if ( !RtlCompareUnicodeStrings(
                  ObjectTypeName->Buffer,
                  (unsigned __int64)ObjectTypeName->Length >> 1,
                  *(PCWCH *)(v30 + 16),
                  (unsigned __int64)*(unsigned __int16 *)(v30 + 8) >> 1,
                  0) )
          {
            v46 = *(ACL **)(v30 + 24);
            v15 = AccessGranted;
            if ( v46 )
            {
              AccessMode = 0;
              v50[0] = 0;
              SeExamineSacl(v46, v29, ClientToken, v24, AccessGranted, (PBOOLEAN)&AccessMode, v50);
              GenerateAudit = AccessMode != 0;
              v47 = GenerateAlarm || v50[0];
              GenerateAlarm = v47;
            }
            goto LABEL_38;
          }
          v30 = *(_QWORD *)v30;
        }
      }
      v15 = AccessGranted;
LABEL_38:
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegionThread();
      if ( GenerateAudit )
      {
LABEL_39:
        *GenerateOnClose = 1;
        if ( v15 )
        {
          v31 = *((_WORD *)v59 + 1);
          if ( (v31 & 0x10) != 0 )
          {
            if ( v31 >= 0 )
            {
              v32 = *((_QWORD *)v59 + 3);
            }
            else
            {
              v36 = *((unsigned int *)v59 + 3);
              if ( (_DWORD)v36 )
                v32 = (__int64)&v59[v36];
              else
                v32 = 0LL;
            }
          }
          else
          {
            v32 = 0LL;
          }
          SeMaximumAuditMask(v32, v24, (__int64)ClientToken, (_DWORD *)AuxData + 7);
          SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v24, ClientToken, (PACCESS_MASK)AuxData + 7);
          v15 = AccessGranted;
        }
      }
    }
    v16 = v15 == 0;
    if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
      v16 = 1LL;
    v17 = 0;
    if ( (AccessState->OriginalDesiredAccess & 0x2000000) == 0 )
      v17 = v15;
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x20u )
      {
        v19 = 0;
        goto LABEL_15;
      }
      if ( *((int *)AccessState->AuxData + i + 22) < 0 )
        break;
    }
    v19 = SepAdtAuditThisEventWithContext(130LL, v17, v16, &AccessState->SubjectSecurityContext);
LABEL_15:
    AuxData[216] = v19;
    if ( GenerateAudit )
      goto LABEL_16;
    v12 = (_DWORD)AccessState + 32;
  }
  if ( v15 )
  {
    v22 = *(_DWORD **)AuxData;
    if ( *(_QWORD *)AuxData )
    {
      if ( *v22 && (unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)v22, v15, 0, v12, (__int64)v51) )
      {
        AccessState->AuditPrivileges = 1;
        goto LABEL_16;
      }
    }
  }
  if ( GenerateAlarm )
  {
LABEL_16:
    AccessState->GenerateAudit = 1;
    goto LABEL_17;
  }
  AccessState->GenerateAudit = 0;
  if ( !AuxData[216] )
    return;
LABEL_17:
  v20 = AbsoluteObjectName;
  if ( AbsoluteObjectName && AbsoluteObjectName->Length )
  {
    v21 = Object;
  }
  else
  {
    v21 = Object;
    if ( Object )
    {
      v10 = SepQueryNameString(Object, &P);
      if ( v10 < 0 )
      {
        v38 = v52;
        goto LABEL_85;
      }
      v20 = SourceString;
      if ( P && *((_WORD *)P + 1) != (_WORD)SourceString )
        v20 = (const UNICODE_STRING *)P;
    }
    else
    {
      v20 = 0LL;
    }
  }
  if ( ObjectTypeName && ObjectTypeName->Length )
  {
    v37 = ObjectTypeName;
LABEL_71:
    v38 = v52;
LABEL_72:
    if ( v15 )
    {
      if ( v20 )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v20->MaximumLength, 0x20206553u);
        AccessState->ObjectName.Buffer = Pool2;
        if ( Pool2 )
        {
          AccessState->ObjectName.MaximumLength = v20->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v20);
        }
      }
      if ( v37 )
      {
        v41 = AccessState->ObjectTypeName.Buffer;
        if ( v41 )
        {
          ExFreePoolWithTag(v41, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v42 = (wchar_t *)ExAllocatePool2(0x100uLL, v37->MaximumLength, 0x20206553u);
        AccessState->ObjectTypeName.Buffer = v42;
        if ( v42 )
        {
          AccessState->ObjectTypeName.MaximumLength = v37->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v37);
        }
      }
      if ( TransactionId )
        *((GUID *)AuxData + 2) = *TransactionId;
    }
    else
    {
      v44 = TransactionId;
      if ( !TransactionId )
        v44 = (GUID *)(AuxData + 32);
      SepAdtOpenObjectAuditAlarm(
        v51[0],
        (int)&SeSubsystemName,
        0,
        (int)v37,
        (__int64)v20,
        v59,
        (__int64)AccessState->SubjectSecurityContext.ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        *(_QWORD *)AuxData,
        0,
        (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
        2,
        0LL,
        0,
        0LL,
        (__int64)v44,
        (__int64)AccessState);
      SepAdtStagingEvent(
        v51[0],
        v45,
        0,
        (_DWORD)v37,
        (__int64)v20,
        (__int64)AccessState->SubjectSecurityContext.ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        0,
        0LL,
        (__int64)AccessState);
    }
    goto LABEL_85;
  }
  if ( !v21 )
  {
    v37 = v55;
    goto LABEL_71;
  }
  v43 = SepQueryTypeString(v21, &v52);
  v38 = v52;
  v10 = v43;
  if ( v43 >= 0 )
  {
    v37 = v55;
    if ( v52 )
      v37 = (const UNICODE_STRING *)v52;
    goto LABEL_72;
  }
LABEL_85:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  if ( v10 < 0 )
    SepAuditFailed((unsigned int)v10);
}
