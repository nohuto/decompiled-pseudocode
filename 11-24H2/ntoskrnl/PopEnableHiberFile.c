/*
 * XREFs of PopEnableHiberFile @ 0x140AAE8C0
 * Callers:
 *     PopNotifyPolicyDevice @ 0x140758DA0 (PopNotifyPolicyDevice.c)
 *     PopHibernateEvaluation @ 0x140AAE820 (PopHibernateEvaluation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     MmGetHighestPhysicalPage @ 0x1404684E4 (MmGetHighestPhysicalPage.c)
 *     PopOpenPowerKey @ 0x1404A48FC (PopOpenPowerKey.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopCalculateHiberFileSize @ 0x14074FE78 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x14074FF70 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x140750D6C (PopPreallocateHibernateMemory.c)
 *     PopZeroHiberFile @ 0x14075165C (PopZeroHiberFile.c)
 *     MmZeroPageFileAtShutdown @ 0x1407E88D4 (MmZeroPageFileAtShutdown.c)
 *     MmReleaseDumpHibernateResources @ 0x1407EDD58 (MmReleaseDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x14099E710 (PopCheckDisabledReason.c)
 *     PopLogSleepDisabled @ 0x14099E748 (PopLogSleepDisabled.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14099FFA0 (PopRemoveReasonRecordByReasonCode.c)
 *     PopResetCurrentPolicies @ 0x140A61C7C (PopResetCurrentPolicies.c)
 *     MmAllocateDumpHibernateResources @ 0x140A9873C (MmAllocateDumpHibernateResources.c)
 *     MmReturnChargesToLockPagedPool @ 0x140AB5BF0 (MmReturnChargesToLockPagedPool.c)
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1)
{
  int v1; // ebx
  PVOID v3; // r15
  unsigned __int64 v4; // rsi
  PVOID v5; // r12
  unsigned int v6; // r14d
  int v7; // ecx
  char v8; // al
  char v9; // r11
  char v10; // di
  HANDLE v11; // rbx
  __int64 DumpHibernateResources; // rax
  unsigned __int64 v13; // rdi
  int HiberFile; // eax
  void *Pool2; // rax
  char v17[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v23; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v25; // [rsp+98h] [rbp+27h]

  v1 = 0;
  v18 = 0LL;
  v17[0] = 0;
  ResultLength = 0;
  v25 = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  PopRemoveReasonRecordByReasonCode(6LL);
  PopRemoveReasonRecordByReasonCode(8LL);
  PopRemoveReasonRecordByReasonCode(22LL);
  PopRemoveReasonRecordByReasonCode(23LL);
  PopRemoveReasonRecordByReasonCode(24LL);
  PopRemoveReasonRecordByReasonCode(25LL);
  v6 = (unsigned __int64)MmGetHighestPhysicalPage(0) >= 0x100000000LL ? 8 : 0;
  if ( !PopCheckDisabledReason() && !PopCheckDisabledReason() )
    PopCheckDisabledReason();
  if ( PopCheckDisabledReason() )
  {
    v7 = -1073741637;
    v1 = -1073741637;
    LODWORD(v18) = -1073741637;
    goto LABEL_13;
  }
  v8 = PopCheckDisabledReason();
  v10 = v9;
  if ( v8 )
    v10 = 1;
  if ( a1 )
  {
    if ( FileObject )
      goto LABEL_54;
    dword_140F0BBC4 = 1;
    dword_140F0BBA4 = 1601;
    byte_140F0BBC1 = 0;
    dword_140F0BC58 = 0;
    if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
      v11 = KeyHandle;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140F0BBC4 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_140F0BBC4 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      v25 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v11, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140F0BBA4 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v23, L"MultiPhaseResumeDisabled");
      v25 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v11, &v23, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_140F0BBC1 = HIDWORD(KeyValueInformation) == 1;
        dword_140F0BC58 |= 0x20u;
      }
      ZwClose(v11);
    }
    PopHiberEnabled = 1;
    if ( v10 )
    {
      v7 = -1073741637;
LABEL_41:
      v1 = v7;
      LODWORD(v18) = v7;
      goto LABEL_45;
    }
    DumpHibernateResources = MmAllocateDumpHibernateResources(0x13000uLL);
    v4 = DumpHibernateResources;
    if ( !DumpHibernateResources )
    {
      v6 = 23;
LABEL_40:
      v7 = -1073741670;
      goto LABEL_41;
    }
    v13 = DumpHibernateResources + 0x200000;
    if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
      v13 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    if ( v13 - DumpHibernateResources >= 0xA000 )
      v13 = DumpHibernateResources;
    PopCalculateHiberFileSize(&v18, (unsigned __int8 *)v17);
    HiberFile = PopCreateHiberFile(v18);
    LODWORD(v18) = HiberFile;
    v1 = HiberFile;
    if ( HiberFile >= 0 )
    {
      *(_QWORD *)&xmmword_140F0BBA8 = v4;
      v4 = 0LL;
      *((_QWORD *)&xmmword_140F0BBA8 + 1) = v13;
      Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x1F0uLL, 0x70616D48u);
      v3 = Pool2;
      if ( !Pool2 )
      {
        v6 = 24;
        goto LABEL_40;
      }
      MemoryMap = Pool2;
      v3 = 0LL;
      HiberFile = PopPreallocateHibernateMemory();
      LODWORD(v18) = HiberFile;
      v1 = HiberFile;
      if ( HiberFile >= 0 )
      {
        LODWORD(v18) = 1;
        EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &v18);
        if ( (_DWORD)v18 == 2 )
        {
          dword_140F0BC58 |= 0x10u;
          byte_140F0BBC1 = 1;
        }
        byte_140F0B676 = v17[0];
        byte_140F0B668 = 1;
        if ( !InitSafeBootMode )
          byte_140F0B672 = 1;
        if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) == 0 )
          PopClearHiberFileSignature();
        PopResetCurrentPolicies();
        v1 = 0;
        goto LABEL_54;
      }
      v6 = 25;
    }
    else
    {
      v6 = 6;
    }
    v7 = HiberFile;
LABEL_45:
    if ( (PopSimulateHiberBugcheck & 0x800) != 0 )
      KeBugCheckEx(0xA0u, 9uLL, v7, 0xFFFFFFFFFFFFFFFFuLL, v6);
    goto LABEL_55;
  }
  PopHiberEnabled = 0;
  if ( !FileObject )
  {
LABEL_54:
    LODWORD(v18) = 0;
    goto LABEL_55;
  }
  if ( (unsigned int)MmZeroPageFileAtShutdown() )
    PopZeroHiberFile(PopHiberInfo, FileObject);
  ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
  ZwClose(PopHiberInfo);
  ExFreePoolWithTag(qword_140F0BB98, 0x72626968u);
  v4 = xmmword_140F0BBA8;
  v5 = qword_140F0BBD0;
  v3 = MemoryMap;
  xmmword_140F0BBA8 = 0LL;
  byte_140F0B668 = 0;
  byte_140F0B676 = 0;
  byte_140F0B672 = 0;
  qword_140F0BBB8 = 0LL;
  v1 = PopResetCurrentPolicies();
  LODWORD(v18) = v1;
  v7 = v1;
  if ( v1 < 0 )
  {
LABEL_13:
    if ( !a1 )
      goto LABEL_55;
    goto LABEL_45;
  }
LABEL_55:
  if ( v6 )
  {
    PopLogSleepDisabled(v6, 8, &v18, 4uLL);
    v1 = v18;
  }
  if ( v4 )
    MmReleaseDumpHibernateResources(v4);
  if ( v5 )
  {
    MmReturnChargesToLockPagedPool(v5, Length);
    ExFreePoolWithTag(v5, 0);
    memset_0(&qword_140F0BBD0, 0, 0x88uLL);
  }
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x70616D48u);
    MemoryMap = 0LL;
  }
  if ( !a1 )
    memset_0(&PopHiberInfo, 0, 0xE8uLL);
  return (unsigned int)v1;
}
