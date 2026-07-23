/*
 * XREFs of PopEnableHiberFile @ 0x140AAE964
 * Callers:
 *     PopNotifyPolicyDevice @ 0x14074E0E0 (PopNotifyPolicyDevice.c)
 *     PopHibernateEvaluation @ 0x140AAE8C4 (PopHibernateEvaluation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     MmGetHighestPhysicalPage @ 0x14046F044 (MmGetHighestPhysicalPage.c)
 *     PopOpenPowerKey @ 0x1404A9304 (PopOpenPowerKey.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopCalculateHiberFileSize @ 0x140745A88 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x140745B84 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14074697C (PopPreallocateHibernateMemory.c)
 *     PopZeroHiberFile @ 0x14074724C (PopZeroHiberFile.c)
 *     MmZeroPageFileAtShutdown @ 0x1407D8444 (MmZeroPageFileAtShutdown.c)
 *     MmReleaseDumpHibernateResources @ 0x1407DD8E8 (MmReleaseDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x140A0FAB8 (PopCheckDisabledReason.c)
 *     PopLogSleepDisabled @ 0x140A0FAF0 (PopLogSleepDisabled.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x140A110A8 (PopRemoveReasonRecordByReasonCode.c)
 *     PopResetCurrentPolicies @ 0x140A65B7C (PopResetCurrentPolicies.c)
 *     MmAllocateDumpHibernateResources @ 0x140A9769C (MmAllocateDumpHibernateResources.c)
 *     MmReturnChargesToLockPagedPool @ 0x140AB6890 (MmReturnChargesToLockPagedPool.c)
 *     EmClientQueryRuleState @ 0x140B584B0 (EmClientQueryRuleState.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
    dword_140F0ADA4 = 1;
    dword_140F0AD84 = 1601;
    byte_140F0ADA1 = 0;
    dword_140F0AE38 = 0;
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
        dword_140F0ADA4 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_140F0ADA4 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      v25 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v11, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140F0AD84 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v23, L"MultiPhaseResumeDisabled");
      v25 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v11, &v23, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_140F0ADA1 = HIDWORD(KeyValueInformation) == 1;
        dword_140F0AE38 |= 0x20u;
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
      *(_QWORD *)&xmmword_140F0AD88 = v4;
      v4 = 0LL;
      *((_QWORD *)&xmmword_140F0AD88 + 1) = v13;
      Pool2 = (void *)ExAllocatePool2(0x40uLL);
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
          dword_140F0AE38 |= 0x10u;
          byte_140F0ADA1 = 1;
        }
        byte_140F0B8D6 = v17[0];
        byte_140F0B8C8 = 1;
        if ( !InitSafeBootMode )
          byte_140F0B8D2 = 1;
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
    PopZeroHiberFile(PopHiberInfo, (__int64)FileObject);
  ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
  ZwClose(PopHiberInfo);
  ExFreePoolWithTag(qword_140F0AD78, 0x72626968u);
  v4 = xmmword_140F0AD88;
  v5 = qword_140F0ADB0;
  v3 = MemoryMap;
  xmmword_140F0AD88 = 0LL;
  byte_140F0B8C8 = 0;
  byte_140F0B8D6 = 0;
  byte_140F0B8D2 = 0;
  qword_140F0AD98 = 0LL;
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
    memset_0(&qword_140F0ADB0, 0, 0x88uLL);
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
