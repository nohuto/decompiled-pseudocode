/*
 * XREFs of SepAdtLogAuditRecord @ 0x1403C288C
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1403C25D0 (SeReportSecurityEventWithSubCategory.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1407900F4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditBootConfiguration @ 0x140790694 (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x140790B40 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140790D28 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140790EAC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140791070 (SeAuditTransactionStateChange.c)
 *     SepAdtGenerateDiscardAudit @ 0x1407912B0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x1407913A4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14079159C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14079190C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B48 (SepAuditAssignPrimaryToken.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084987C (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140861BC0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140861FFC (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x140862250 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140863120 (SepAdtStagingEvent.c)
 *     SeAuditHandleDuplication @ 0x140863C90 (SeAuditHandleDuplication.c)
 *     SepAdtTokenRightAdjusted @ 0x1408F2A90 (SepAdtTokenRightAdjusted.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140A72DA0 (SeAuditHardLinkCreationWithTransaction.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     SepRmDispatchDataToLsa @ 0x1403C1B1C (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x1403C2AF8 (SepAdtMarshallAuditRecord.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     SepQueueWorkItem @ 0x1403C35C4 (SepQueueWorkItem.c)
 *     SepAuditFailedRaisedIrql @ 0x140607C18 (SepAuditFailedRaisedIrql.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SepAdtLogAuditFailureEvent @ 0x1407913A4 (SepAdtLogAuditFailureEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 64LL;
  if ( CurrentIrql != 2 )
    v3 = 256LL;
  Pool2 = ExAllocatePool2(v3, 0x40uLL, 0x69416553u);
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
          KiUnstackDetachProcess((__int64)&ApcState, 0, v13, v14);
        }
        goto LABEL_15;
      }
      v16[0] = 0;
      if ( (unsigned __int8)SepQueueWorkItem(&SepLsaAuditQueueInfo, v5, v16) )
        goto LABEL_15;
      v15 = *(void **)(v5 + 56);
      if ( v15 )
        ObfDereferenceObjectWithTag(v15, 0x69416553u);
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v16[0] )
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
