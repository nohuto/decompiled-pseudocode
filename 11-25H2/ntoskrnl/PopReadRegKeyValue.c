/*
 * XREFs of PopReadRegKeyValue @ 0x1404AABEC
 * Callers:
 *     PopReadUlongPowerKey @ 0x1405C8EBC (PopReadUlongPowerKey.c)
 *     PopEsOverrideSetByGroupPolicy @ 0x1406EAC00 (PopEsOverrideSetByGroupPolicy.c)
 *     PopQueryRestrictedStandbyTimeoutSeconds @ 0x14073D674 (PopQueryRestrictedStandbyTimeoutSeconds.c)
 *     PopDiagTracePerfTrackData @ 0x140A598C4 (PopDiagTracePerfTrackData.c)
 *     PopCheckShutdownMarker @ 0x140C1C5B4 (PopCheckShutdownMarker.c)
 *     PopBatteryReadOscBits @ 0x140C20D60 (PopBatteryReadOscBits.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1404FD750 (wcslen.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadRegKeyValue(wchar_t *a1, const WCHAR *a2, size_t a3, int a4, void *a5)
{
  _DWORD *Pool2; // rdi
  NTSTATUS v9; // ebx
  size_t v11; // rax
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
    v11 = 2 * wcslen(a1);
    if ( v11 >= 0xFFFE )
      LOWORD(v11) = -4;
    DestinationString.Length = v11;
    DestinationString.MaximumLength = v11 + 2;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v9 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v9 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        v9 = -1073741801;
        goto LABEL_3;
      }
      v9 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             Pool2,
             ResultLength,
             &ResultLength);
    }
    if ( v9 >= 0 )
    {
      if ( !a4 || Pool2[1] == a4 )
      {
        if ( Pool2[2] == a3 )
          memmove(a5, Pool2 + 3, a3);
        else
          v9 = -1073741789;
      }
      else
      {
        v9 = -1073741788;
      }
    }
  }
LABEL_3:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x50455654u);
  return (unsigned int)v9;
}
