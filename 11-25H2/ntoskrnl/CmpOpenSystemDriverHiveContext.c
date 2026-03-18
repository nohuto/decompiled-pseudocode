/*
 * XREFs of CmpOpenSystemDriverHiveContext @ 0x140C51EBC
 * Callers:
 *     CmGetSystemDriverList @ 0x140C51914 (CmGetSystemDriverList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     RtlCreateUnicodeString @ 0x140893990 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpOpenSystemDriverHiveContext(PCUNICODE_STRING Source, __int64 a2)
{
  __int16 v4; // ax
  PVOID v5; // rdi
  int appended; // ebx
  __int64 v7; // r8
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  PVOID v12; // [rsp+B0h] [rbp+40h] BYREF

  v4 = Source->Length + 4;
  *(&Destination.MaximumLength + 2) = 0;
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(CmRegistryMachineName.Length + v4);
  v5 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v12 = 0LL;
  KeyHandle = 0LL;
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, Destination.MaximumLength, 0x20204D43uLL);
  if ( !Destination.Buffer )
  {
    appended = -1073741801;
    goto LABEL_11;
  }
  appended = RtlAppendUnicodeStringToString(&Destination, &CmRegistryMachineName);
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\");
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(&Destination, Source);
      if ( appended >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        appended = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( appended >= 0 )
        {
          appended = CmObReferenceObjectByHandle(KeyHandle, 1u, v7, 0, &v12, 0LL);
          if ( appended < 0 )
          {
LABEL_10:
            v5 = v12;
            goto LABEL_11;
          }
          if ( !RtlCreateUnicodeString((PUNICODE_STRING)(a2 + 16), Source->Buffer) )
          {
            appended = -1073741801;
            goto LABEL_10;
          }
          *(_QWORD *)(a2 + 32) = KeyHandle;
          *(_QWORD *)(a2 + 40) = v12;
          KeyHandle = 0LL;
        }
      }
    }
  }
LABEL_11:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)appended;
}
