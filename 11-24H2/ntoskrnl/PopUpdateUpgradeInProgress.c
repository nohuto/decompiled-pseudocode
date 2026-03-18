/*
 * XREFs of PopUpdateUpgradeInProgress @ 0x140749A30
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1406A8870 (ZwNotifyChangeKey.c)
 *     PopLogSleepDisabled @ 0x1409B80F8 (PopLogSleepDisabled.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1409B9950 (PopRemoveReasonRecordByReasonCode.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

int __fastcall PopUpdateUpgradeInProgress(void *a1)
{
  int result; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  HANDLE KeyHandle; // [rsp+50h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+37h] BYREF
  int v10; // [rsp+B0h] [rbp+47h]

  ResultLength = 0;
  v10 = 0;
  KeyHandle = a1;
  memset(&ObjectAttributes, 0, 44);
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  if ( !a1 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( result < 0 )
      goto LABEL_12;
  }
  RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || !HIDWORD(KeyValueInformation) )
  {
    if ( a1 )
    {
      PopAcquirePolicyLock(v4, v3);
      PopRemoveReasonRecordByReasonCode(15LL);
      result = PopReleasePolicyLock();
    }
    goto LABEL_12;
  }
  if ( !a1 && (result = PopLogSleepDisabled(15LL, 8LL, 0LL, 0LL), result < 0)
    || (*(_QWORD *)PopSetupInProgressUpdateWorkItem = 0LL,
        qword_140F0E290 = (__int64)PopUpdateUpgradeInProgress,
        qword_140F0E298 = (__int64)KeyHandle,
        result = ZwNotifyChangeKey(
                   KeyHandle,
                   0LL,
                   PopSetupInProgressUpdateWorkItem,
                   (PVOID)1,
                   &PopSetupInProgressStatusBlock,
                   4u,
                   0,
                   0LL,
                   0,
                   1u),
        result < 0) )
  {
LABEL_12:
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
