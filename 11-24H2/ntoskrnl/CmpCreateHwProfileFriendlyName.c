/*
 * XREFs of CmpCreateHwProfileFriendlyName @ 0x1407D3D50
 * Callers:
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     KeGetBugMessageText @ 0x1405AF80C (KeGetBugMessageText.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 */

__int64 __fastcall CmpCreateHwProfileFriendlyName(void *a1, char a2, unsigned int a3, UNICODE_STRING *a4)
{
  unsigned int v8; // edi
  const WCHAR *v9; // rdx
  unsigned __int16 v10; // cx
  wchar_t *Buffer; // rsi
  NTSTATUS v12; // ebx
  int v13; // ecx
  ULONG Length[2]; // [rsp+20h] [rbp-E0h]
  unsigned int Data; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  ANSI_STRING SourceString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v22; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[80]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+160h] [rbp+60h] BYREF

  ResultLength = 0;
  Data = 0;
  KeyHandle = 0LL;
  SourceString = 0LL;
  UnicodeString = 0LL;
  DestinationString = 0LL;
  v22 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a4 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( (a2 & 3) == 3 )
      goto LABEL_9;
    if ( (a2 & 2) != 0 )
    {
      v8 = 1073807362;
      v9 = L"Docked";
      goto LABEL_10;
    }
    if ( (a2 & 1) == 0 )
    {
LABEL_9:
      v9 = L"Unknown";
      v8 = 1073807363;
    }
    else
    {
      v8 = 1073807361;
      v9 = L"Undocked";
    }
LABEL_10:
    RtlInitUnicodeString(&DestinationString, v9);
    if ( KeGetBugMessageText(v8, (__int64)&SourceString)
      && RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
    {
      v10 = UnicodeString.Length;
      Buffer = UnicodeString.Buffer;
      if ( UnicodeString.Length > 4u )
      {
        v10 = UnicodeString.Length - 4;
        UnicodeString.Length = v10;
        UnicodeString.Buffer[(unsigned __int64)v10 >> 1] = 0;
      }
      if ( (unsigned __int64)v10 + 12 <= 0xA0 )
      {
        RtlInitUnicodeString(&v22, L"Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v22;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( v12 >= 0 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && KeyValueInformation[1] == 4 )
          {
            v13 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1;
          }
          else
          {
            v13 = 1;
          }
          Data = v13;
          v12 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
          if ( v12 >= 0 )
          {
            if ( v8 == 1073807363 || Data > 1 )
            {
              Length[0] = Data;
              swprintf_s(Dst, 0x50uLL, L"%s %u", Buffer, *(_QWORD *)Length);
            }
            else
            {
              wcscpy_s(Dst, 0x50uLL, Buffer);
            }
          }
        }
        else
        {
          KeyHandle = 0LL;
        }
      }
      else
      {
        v12 = -1073741823;
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( KeyHandle )
        ZwClose(KeyHandle);
      if ( v12 >= 0 )
        goto LABEL_31;
    }
  }
  Dst[0] = 0;
  swprintf_s(Dst, 0x50uLL, L"%04d", a3);
  v12 = 0;
LABEL_31:
  if ( !RtlCreateUnicodeString(a4, Dst) )
    return (unsigned int)-1073741823;
  return (unsigned int)v12;
}
