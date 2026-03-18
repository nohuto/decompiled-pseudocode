/*
 * XREFs of ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A61294
 * Callers:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407B6DD0 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140A61150 (ExpWnfAcquirePermanentDataStoreHandle.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     RtlLengthSidAsUnicodeString @ 0x140917060 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x140917220 (RtlConvertSidToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfGetPermanentPerUserDataStoreHandle(unsigned __int8 *Sid, PHANDLE KeyHandle)
{
  __int64 result; // rax
  unsigned __int16 v5; // di
  unsigned __int16 v6; // si
  wchar_t *Pool2; // rax
  wchar_t *v8; // rbx
  NTSTATUS v9; // edi
  UNICODE_STRING Destination; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  int v13; // [rsp+D0h] [rbp+77h] BYREF

  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, 44);
  v13 = 0;
  result = RtlLengthSidAsUnicodeString(Sid, &v13);
  if ( (int)result >= 0 )
  {
    v5 = v13;
    v6 = v13 + 100;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)&Destination.Length = 0LL;
      Destination.MaximumLength = v6;
      Destination.Buffer = Pool2;
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\");
      UnicodeString.Length = 0;
      UnicodeString.MaximumLength = v5;
      UnicodeString.Buffer = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
      v9 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
      if ( v9 >= 0 )
      {
        Destination.Length += UnicodeString.Length;
        RtlAppendUnicodeToString(&Destination, L"\\Software\\Classes\\NotificationData");
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      }
      ExFreePoolWithTag(v8, 0x20666E57u);
      return (unsigned int)v9;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
