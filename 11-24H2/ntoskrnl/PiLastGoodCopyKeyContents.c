/*
 * XREFs of PiLastGoodCopyKeyContents @ 0x140C25504
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x140C259E4 (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1406A8F30 (ZwDeleteKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiLastGoodCopyKeyContents(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  __int64 Pool2; // rbx
  NTSTATUS v6; // edi
  HANDLE v7; // rcx
  ULONG v8; // esi
  NTSTATUS v9; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES v14; // [rsp+98h] [rbp+17h] BYREF
  ULONG Disposition; // [rsp+F8h] [rbp+77h] BYREF
  ULONG ResultLength; // [rsp+100h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&v14.Length + 1) = 0;
  *(&v14.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  Disposition = 0;
  ValueName = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL, 0x418uLL, 0x674C7050uLL);
  if ( !Pool2 )
    return 3221225626LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v14.Length = 48;
    v14.RootDirectory = 0LL;
    v14.Attributes = 576;
    v14.ObjectName = a2;
    *(_OWORD *)&v14.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&Handle, 0xF003Fu, &v14, 0, 0LL, 0, &Disposition);
    if ( v6 >= 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = ZwEnumerateValueKey(KeyHandle, v8++, KeyValueFullInformation, (PVOID)Pool2, 0x418u, &ResultLength);
        v6 = v9;
        if ( v9 < 0 )
          break;
        ValueName.Buffer = (wchar_t *)(Pool2 + 20);
        ValueName.Length = *(_WORD *)(Pool2 + 16);
        ValueName.MaximumLength = ValueName.Length;
        v6 = ZwSetValueKey(
               Handle,
               &ValueName,
               0,
               *(_DWORD *)(Pool2 + 4),
               (PVOID)(Pool2 + *(unsigned int *)(Pool2 + 8)),
               *(_DWORD *)(Pool2 + 12));
        if ( v6 < 0 )
          goto LABEL_12;
      }
      if ( v9 == -2147483622 )
      {
        v6 = 0;
        ZwDeleteKey(KeyHandle);
      }
LABEL_12:
      ZwClose(KeyHandle);
      v7 = Handle;
    }
    else
    {
      v7 = KeyHandle;
    }
    ZwClose(v7);
  }
  ExFreePoolWithTag((PVOID)Pool2, 0x674C7050u);
  return (unsigned int)v6;
}
