/*
 * XREFs of BcdEnumerateDisks @ 0x1406E95D8
 * Callers:
 *     ExpTranslateNtPath @ 0x140AD1DB8 (ExpTranslateNtPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ExpDiskEnumCallback @ 0x1404F7B54 (ExpDiskEnumCallback.c)
 *     swprintf_s @ 0x1405006D0 (swprintf_s.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14069BC40 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14069DB00 (ZwQueryDirectoryObject.c)
 *     BiIsValidDiskDevice @ 0x140AD62D4 (BiIsValidDiskDevice.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdEnumerateDisks(__int64 a1, __int64 a2)
{
  int DirectoryObject; // ebx
  int i; // edi
  wchar_t **Pool2; // rsi
  wchar_t *v6; // r14
  wchar_t **v7; // rdi
  int *v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int v13; // [rsp+C0h] [rbp+40h] BYREF
  int v14; // [rsp+C4h] [rbp+44h]
  unsigned int v15; // [rsp+D0h] [rbp+50h]
  HANDLE DirectoryHandle; // [rsp+D8h] [rbp+58h] BYREF

  v14 = HIDWORD(a1);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v13 = 0;
  DestinationString = 0LL;
  v15 = 0;
  DirectoryHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DirectoryObject = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( DirectoryObject >= 0 )
  {
    for ( i = 4096; ; i += 4096 )
    {
      Pool2 = (wchar_t **)ExAllocatePool2(0x102uLL);
      if ( !Pool2 )
      {
        DirectoryObject = -1073741801;
        goto LABEL_18;
      }
      v10 = 0LL;
      v9 = &v13;
      v13 = 0;
      DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
      if ( DirectoryObject != 261 )
        break;
      ExFreePoolWithTag(Pool2, 0x4B444342u);
    }
    ZwClose(DirectoryHandle);
    DirectoryHandle = 0LL;
    if ( (int)(DirectoryObject + 0x80000000) < 0 || DirectoryObject == -2147483622 )
    {
      v6 = (wchar_t *)ExAllocatePool2(0x102uLL);
      if ( v6 )
      {
        DirectoryObject = 0;
        if ( *(_WORD *)Pool2 )
        {
          v7 = Pool2 + 1;
          do
          {
            if ( (unsigned __int8)BiIsValidDiskDevice(*v7, v7[2]) )
            {
              swprintf_s(v6, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v7, 0LL, v9, v10);
              if ( ExpDiskEnumCallback(v6, v15, a2) )
                break;
            }
            v7 += 4;
          }
          while ( *((_WORD *)v7 - 4) );
        }
        ExFreePoolWithTag(v6, 0x4B444342u);
      }
      else
      {
        DirectoryObject = -1073741801;
      }
    }
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  }
LABEL_18:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)DirectoryObject;
}
