/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x140854730
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     SeOpenObjectAuditAlarm @ 0x140855F10 (SeOpenObjectAuditAlarm.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 *     CmpCheckCreateAccess @ 0x140914774 (CmpCheckCreateAccess.c)
 * Callees:
 *     SepRmAcquireGlobalSaclReadLock @ 0x1402053DC (SepRmAcquireGlobalSaclReadLock.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     SeMaximumAuditMask @ 0x14049EFEC (SeMaximumAuditMask.c)
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140854E70 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140856980 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140856A90 (SepAdtAuditPrivilegeUseWithContext.c)
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 *     SeExamineSacl @ 0x14092EA20 (SeExamineSacl.c)
 *     SepQueryTypeString @ 0x1409837B4 (SepQueryTypeString.c)
 *     SepQueryNameString @ 0x140983F00 (SepQueryNameString.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409851A4 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409858B0 (SepAdtStagingEvent.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140A6A02C (SeMaximumAuditMaskFromGlobalSacl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  BOOLEAN v10; // r13
  int v11; // esi
  unsigned int *v12; // rbx
  int v13; // eax
  PACCESS_TOKEN ClientToken; // r14
  char *AuxData; // r15
  _BOOL8 v16; // r8
  BOOLEAN v17; // r10
  unsigned __int8 i; // al
  char v19; // al
  PVOID v20; // rbx
  const UNICODE_STRING *v21; // rdx
  _DWORD *v22; // rcx
  __int16 v23; // ax
  ACCESS_MASK v24; // r8d
  __int16 v25; // cx
  ACL *v26; // rdx
  ACL *v27; // rcx
  __int16 v28; // ax
  __int64 v29; // rbx
  __int16 v30; // ax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  ACL *v35; // rax
  __int64 v36; // rax
  const UNICODE_STRING *v37; // r13
  PVOID v38; // r14
  PCUNICODE_STRING v39; // r12
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v42; // rcx
  wchar_t *v43; // rax
  int v44; // eax
  GUID *v45; // rax
  PCUNICODE_STRING v46; // rbx
  int v47; // edx
  ACL *v48; // rcx
  BOOLEAN v49; // al
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-51h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+A9h] [rbp-50h] BYREF
  BOOLEAN v52[2]; // [rsp+AAh] [rbp-4Fh] BYREF
  _WORD v53[2]; // [rsp+ACh] [rbp-4Dh] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B0h] [rbp-49h]
  PVOID v55; // [rsp+B8h] [rbp-41h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+C0h] [rbp-39h]
  PACL ResourceSacl; // [rsp+C8h] [rbp-31h]
  PVOID P; // [rsp+D0h] [rbp-29h] BYREF
  const UNICODE_STRING *v59; // [rsp+D8h] [rbp-21h]
  unsigned int *v63; // [rsp+150h] [rbp+57h]

  v63 = (unsigned int *)SecurityDescriptor;
  v10 = 0;
  v11 = 0;
  P = 0LL;
  v12 = (unsigned int *)SecurityDescriptor;
  v55 = 0LL;
  SourceString = 0LL;
  v59 = 0LL;
  v53[0] = 999;
  GenerateAudit = 0;
  GenerateAlarm = 0;
  if ( !AccessMode )
    return;
  v13 = (_DWORD)AccessState + 32;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  AuxData = (char *)AccessState->AuxData;
  if ( !ClientToken )
    ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
  if ( !SecurityDescriptor )
    goto LABEL_25;
  LOBYTE(SecurityDescriptor) = AccessGranted == 0;
  if ( !(unsigned __int8)SepAdtAuditObjectAccessWithContext(
                           (_DWORD)Object,
                           (_DWORD)ObjectTypeName,
                           AccessGranted,
                           (_DWORD)SecurityDescriptor,
                           (__int64)&AccessState->SubjectSecurityContext,
                           1,
                           (__int64)v53) )
    goto LABEL_6;
  v23 = *((_WORD *)v12 + 1);
  v24 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
  v25 = v23 & 0x8000;
  GrantedAccess = v24;
  if ( (v23 & 0x10) != 0 )
  {
    if ( v25 )
    {
      v33 = v12[3];
      if ( (_DWORD)v33 )
        v26 = (ACL *)((char *)v12 + v33);
      else
        v26 = 0LL;
    }
    else
    {
      v26 = (ACL *)*((_QWORD *)v12 + 3);
    }
    if ( v25 )
    {
      v34 = v12[3];
      if ( (_DWORD)v34 )
        v27 = (ACL *)((char *)v12 + v34);
      else
        v27 = 0LL;
    }
    else
    {
      v27 = (ACL *)*((_QWORD *)v12 + 3);
    }
  }
  else
  {
    v26 = 0LL;
    v27 = 0LL;
  }
  SeExamineSacl(v27, v26, ClientToken, v24, AccessGranted, &GenerateAudit, &GenerateAlarm);
  v28 = *((_WORD *)v12 + 1);
  if ( (v28 & 0x10) != 0 )
  {
    if ( v28 >= 0 )
    {
      v35 = (ACL *)*((_QWORD *)v12 + 3);
    }
    else
    {
      v32 = v12[3];
      if ( !(_DWORD)v32 )
      {
        ResourceSacl = 0LL;
        goto LABEL_35;
      }
      v35 = (ACL *)((char *)v12 + v32);
    }
    ResourceSacl = v35;
    goto LABEL_35;
  }
  ResourceSacl = 0LL;
LABEL_35:
  v10 = GenerateAudit;
  if ( !GenerateAudit )
  {
    SepRmAcquireGlobalSaclReadLock();
    v29 = SepRmGlobalSaclHead;
    if ( SepRmGlobalSaclHead )
    {
      while ( v29 )
      {
        if ( !RtlCompareUnicodeStrings(
                ObjectTypeName->Buffer,
                (unsigned __int64)ObjectTypeName->Length >> 1,
                *(PCWCH *)(v29 + 16),
                (unsigned __int64)*(unsigned __int16 *)(v29 + 8) >> 1,
                0) )
        {
          v48 = *(ACL **)(v29 + 24);
          if ( v48 )
          {
            AccessMode = 0;
            v52[0] = 0;
            SeExamineSacl(v48, ResourceSacl, ClientToken, GrantedAccess, AccessGranted, (PBOOLEAN)&AccessMode, v52);
            GenerateAudit = AccessMode != 0;
            v49 = GenerateAlarm || v52[0];
            GenerateAlarm = v49;
          }
          break;
        }
        v29 = *(_QWORD *)v29;
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = GenerateAudit;
    if ( !GenerateAudit )
      goto LABEL_6;
    v12 = v63;
  }
  *GenerateOnClose = 1;
  if ( AccessGranted )
  {
    v30 = *((_WORD *)v12 + 1);
    if ( (v30 & 0x10) != 0 )
    {
      if ( v30 >= 0 )
      {
        v31 = *((_QWORD *)v12 + 3);
      }
      else
      {
        v36 = v12[3];
        if ( (_DWORD)v36 )
          v31 = (__int64)v12 + v36;
        else
          v31 = 0LL;
      }
    }
    else
    {
      v31 = 0LL;
    }
    SeMaximumAuditMask(v31, GrantedAccess, (__int64)ClientToken, (_DWORD *)AuxData + 7);
    SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, GrantedAccess, ClientToken, (PACCESS_MASK)AuxData + 7);
  }
LABEL_6:
  v16 = AccessGranted == 0;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
    v16 = 1LL;
  v17 = 0;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) == 0 )
    v17 = AccessGranted;
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
  if ( v10 )
    goto LABEL_16;
  v13 = (_DWORD)AccessState + 32;
LABEL_25:
  if ( AccessGranted )
  {
    v22 = *(_DWORD **)AuxData;
    if ( *(_QWORD *)AuxData )
    {
      if ( *v22 && (unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)v22, AccessGranted, 0, v13, (__int64)v53) )
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
  if ( AbsoluteObjectName && AbsoluteObjectName->Length )
  {
    v20 = Object;
    SourceString = AbsoluteObjectName;
  }
  else
  {
    v20 = Object;
    if ( Object )
    {
      v11 = SepQueryNameString(Object, &P);
      if ( v11 < 0 )
      {
        v38 = v55;
        goto LABEL_86;
      }
      if ( P )
      {
        v21 = SourceString;
        if ( *((_WORD *)P + 1) != (_WORD)SourceString )
          v21 = (const UNICODE_STRING *)P;
        SourceString = v21;
      }
    }
  }
  if ( ObjectTypeName && ObjectTypeName->Length )
  {
    v37 = ObjectTypeName;
LABEL_72:
    v38 = v55;
LABEL_73:
    if ( AccessGranted )
    {
      v39 = SourceString;
      if ( SourceString )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
        AccessState->ObjectName.Buffer = Pool2;
        if ( Pool2 )
        {
          AccessState->ObjectName.MaximumLength = v39->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v39);
        }
      }
      if ( v37 )
      {
        v42 = AccessState->ObjectTypeName.Buffer;
        if ( v42 )
        {
          ExFreePoolWithTag(v42, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v43 = (wchar_t *)ExAllocatePool2(0x100uLL);
        AccessState->ObjectTypeName.Buffer = v43;
        if ( v43 )
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
      v45 = TransactionId;
      if ( !TransactionId )
        v45 = (GUID *)(AuxData + 32);
      v46 = SourceString;
      SepAdtOpenObjectAuditAlarm(
        v53[0],
        (int)&SeSubsystemName,
        0,
        (int)v37,
        (__int64)SourceString,
        v63,
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
        (__int64)v45,
        (__int64)AccessState);
      SepAdtStagingEvent(
        v53[0],
        v47,
        0,
        (_DWORD)v37,
        (__int64)v46,
        (__int64)AccessState->SubjectSecurityContext.ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        0,
        0LL,
        (__int64)AccessState);
    }
    goto LABEL_86;
  }
  if ( !v20 )
  {
    v37 = v59;
    goto LABEL_72;
  }
  v44 = SepQueryTypeString(v20, &v55);
  v38 = v55;
  v11 = v44;
  if ( v44 >= 0 )
  {
    v37 = v59;
    if ( v55 )
      v37 = (const UNICODE_STRING *)v55;
    goto LABEL_73;
  }
LABEL_86:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  if ( v11 < 0 )
    SepAuditFailed((unsigned int)v11);
}
