/*
 * XREFs of PopReadRegKeyValue @ 0x1404A667C
 * Callers:
 *     PopReadUlongPowerKey @ 0x1405CAB3C (PopReadUlongPowerKey.c)
 *     PopQueryRestrictedStandbyTimeoutSeconds @ 0x1407479B4 (PopQueryRestrictedStandbyTimeoutSeconds.c)
 *     PopDiagTracePerfTrackData @ 0x140A537D4 (PopDiagTracePerfTrackData.c)
 *     PopEsOverrideSetByGroupPolicy @ 0x140AC740C (PopEsOverrideSetByGroupPolicy.c)
 *     PopCheckShutdownMarker @ 0x140C2F7D4 (PopCheckShutdownMarker.c)
 *     PopBatteryReadOscBits @ 0x140C33F90 (PopBatteryReadOscBits.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadRegKeyValue(wchar_t *a1, const WCHAR *a2, size_t a3, int a4, void *a5)
{
  _DWORD *Pool2; // rdi
  size_t v9; // rax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+30h] BYREF

  DestinationString.Buffer = a1;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Pool2 = 0LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( a1 )
  {
    v9 = 2 * wcslen(a1);
    if ( v9 >= 0xFFFE )
      LOWORD(v9) = -4;
    DestinationString.Length = v9;
    DestinationString.MaximumLength = v9 + 2;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v10 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, ResultLength, 0x50455654u);
      if ( !Pool2 )
      {
        v10 = -1073741801;
        goto LABEL_6;
      }
      v10 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              Pool2,
              ResultLength,
              &ResultLength);
    }
    if ( v10 >= 0 )
    {
      if ( !a4 || Pool2[1] == a4 )
      {
        if ( Pool2[2] == a3 )
          memmove(a5, Pool2 + 3, a3);
        else
          v10 = -1073741789;
      }
      else
      {
        v10 = -1073741788;
      }
    }
  }
LABEL_6:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x50455654u);
  return (unsigned int)v10;
}
