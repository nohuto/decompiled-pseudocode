/*
 * XREFs of SepAdtLogAuditRecord @ 0x1403D67CC
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1403D6510 (SeReportSecurityEventWithSubCategory.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140780E64 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditBootConfiguration @ 0x140781404 (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x1407818B0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140781A98 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140781C1C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140781DE0 (SeAuditTransactionStateChange.c)
 *     SepAdtGenerateDiscardAudit @ 0x140782020 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x140782114 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14078230C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14078267C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x1407828B8 (SepAuditAssignPrimaryToken.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x1408F435C (SeAuditProcessCreation.c)
 *     SepAdtTokenRightAdjusted @ 0x140936BA8 (SepAdtTokenRightAdjusted.c)
 *     SeOperationAuditAlarm @ 0x1409842A0 (SeOperationAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409847B8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140984A0C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409851A4 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409858B0 (SepAdtStagingEvent.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140985C34 (SepAdtCloseObjectAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x140985E58 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140A76E10 (SeAuditHardLinkCreationWithTransaction.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     SepAdtMarshallAuditRecord @ 0x1403D6A38 (SepAdtMarshallAuditRecord.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     SepQueueWorkItem @ 0x1403D74A8 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x1403D831C (SepRmDispatchDataToLsa.c)
 *     SepAuditFailedRaisedIrql @ 0x1405FD170 (SepAuditFailedRaisedIrql.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SepAdtLogAuditFailureEvent @ 0x140782114 (SepAdtLogAuditFailureEvent.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v3; // rcx
  __int64 Pool2; // rax
  __int64 v5; // rbx
  void *CurrentServerSilo; // rax
  PVOID *v7; // rsi
  int v8; // ebp
  void *v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  void *v12; // rcx
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 64LL;
  if ( CurrentIrql != 2 )
    v3 = 256LL;
  Pool2 = ExAllocatePool2(v3);
  v5 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_DWORD *)(Pool2 + 20) = 1;
    *(_DWORD *)(Pool2 + 32) = 1;
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    *(_QWORD *)(v5 + 56) = CurrentServerSilo;
    if ( CurrentServerSilo )
      ObfReferenceObjectWithTag(CurrentServerSilo, 0x69416553u);
    v7 = (PVOID *)(v5 + 24);
    v8 = SepAdtMarshallAuditRecord(Src);
    if ( v8 < 0 )
    {
      v9 = *(void **)(v5 + 56);
      if ( v9 )
        ObfDereferenceObjectWithTag(v9, 0x69416553u);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_15;
      v10 = (unsigned int)v8;
LABEL_35:
      SepAuditFailedRaisedIrql(v10);
LABEL_15:
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    if ( SepRmAuditingEnabled || (*((_DWORD *)*v7 + 5) & 2) == 0 )
    {
      v11 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v11;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v11 <= 0x1D0 )
        {
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(SepRmLsaCallProcess, &ApcState);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess((__int64)&ApcState, 0LL);
        }
        goto LABEL_15;
      }
      v14[0] = 0;
      if ( (unsigned __int8)SepQueueWorkItem(&SepLsaAuditQueueInfo, v5, v14) )
        goto LABEL_15;
      v13 = *(void **)(v5 + 56);
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x69416553u);
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v14[0] )
        goto LABEL_15;
      v10 = 3221225473LL;
      goto LABEL_35;
    }
    v12 = *(void **)(v5 + 56);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
