/*
 * XREFs of EtwpEnumerateKeyProviders @ 0x140A953C0
 * Callers:
 *     EtwpEnableKeyProviders @ 0x1407AF1DC (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     RtlNtStatusToDosError @ 0x14086B8C0 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1409B6290 (RtlWriteRegistryValue.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A741F0 (EtwpEnableAutoLoggerProvider.c)
 */

int __fastcall EtwpEnumerateKeyProviders(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        __int64 a4,
        unsigned int *KeyInformation,
        BOOLEAN NewElement,
        PRTL_AVL_TABLE Table,
        int a8)
{
  int result; // eax
  ULONG v12; // ebx
  int v13; // r12d
  int v14; // eax
  unsigned __int64 v15; // rcx
  const WCHAR *v16; // rdx
  ULONG ValueData; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-4Ch] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  ValueData = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ResultLength = 0;
  NewElement = 0;
  RtlInitUnicodeString(&DestinationString, a3);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v12 = 0;
    v13 = a8;
    while ( 1 )
    {
      v14 = ZwEnumerateKey(KeyHandle, v12, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
      v15 = KeyInformation[3];
      if ( v15 >= 0x108 )
      {
        v14 = -2147483643;
        goto LABEL_11;
      }
      if ( v14 < 0 )
        break;
      *((_WORD *)KeyInformation + (v15 >> 1) + 8) = 0;
      RtlInsertElementGenericTableAvl(Table, KeyInformation + 4, KeyInformation[3] + 2, &NewElement);
      if ( NewElement )
        EtwpEnableAutoLoggerProvider(a1, a2, (const WCHAR *)KeyInformation + 8, (__int64)a3, a4, v13);
      ++v12;
    }
    if ( v14 == -2147483622 )
      return ZwClose(KeyHandle);
LABEL_11:
    ValueData = RtlNtStatusToDosError(v14);
    v16 = (const WCHAR *)a4;
    if ( !a4 )
      v16 = a3;
    RtlWriteRegistryValue(0, v16, L"EnableStatus", 4u, &ValueData, 4u);
    return ZwClose(KeyHandle);
  }
  return result;
}
