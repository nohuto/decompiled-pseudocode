/*
 * XREFs of SepAdtLogAuditRecord @ 0x140348E4C
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140348B90 (SeReportSecurityEventWithSubCategory.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditBootConfiguration @ 0x1407906C4 (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B70 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140790D58 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140790EDC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1407910A0 (SeAuditTransactionStateChange.c)
 *     SepAdtGenerateDiscardAudit @ 0x1407912E0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x1407913D4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1407915CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14079193C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B78 (SepAuditAssignPrimaryToken.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084D5BC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x1408A73CC (SeAuditProcessCreation.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408F03C0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408F07FC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1408F0A50 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408F1920 (SepAdtStagingEvent.c)
 *     SepAdtTokenRightAdjusted @ 0x1409383C4 (SepAdtTokenRightAdjusted.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140A78AA0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditHandleDuplication @ 0x140AAE150 (SeAuditHandleDuplication.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     SepAdtMarshallAuditRecord @ 0x1403490B8 (SepAdtMarshallAuditRecord.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     SepQueueWorkItem @ 0x140349B84 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x140349EEC (SepRmDispatchDataToLsa.c)
 *     SepAuditFailedRaisedIrql @ 0x140609660 (SepAuditFailedRaisedIrql.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SepAdtLogAuditFailureEvent @ 0x1407913D4 (SepAdtLogAuditFailureEvent.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
          KiUnstackDetachProcess((__int64)&ApcState, 0);
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
