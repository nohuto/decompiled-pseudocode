/*
 * XREFs of SepVerifyUIAccessChildProcessImage @ 0x140607418
 * Callers:
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1406A9AB0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1406AA110 (ZwQuerySymbolicLinkObject.c)
 *     PsReferenceProcessFilePointer @ 0x140922040 (PsReferenceProcessFilePointer.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     ObQueryNameString @ 0x1409524A0 (ObQueryNameString.c)
 *     SeGetCachedSigningLevel @ 0x140A1AF10 (SeGetCachedSigningLevel.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall SepVerifyUIAccessChildProcessImage(__int64 a1, const UNICODE_STRING *a2)
{
  BOOLEAN v3; // si
  unsigned int v4; // ebx
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  UNICODE_STRING *p_Name; // rbx
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-31h] BYREF
  HANDLE LinkHandle; // [rsp+58h] [rbp-21h] BYREF
  int v12; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp+1Fh] BYREF
  unsigned __int8 v15; // [rsp+F0h] [rbp+77h] BYREF
  ULONG ReturnedLength; // [rsp+F8h] [rbp+7Fh] BYREF

  Object = 0LL;
  ReturnedLength = 0;
  LinkHandle = 0LL;
  v3 = 0;
  *(_QWORD *)&LinkTarget.Length = 0LL;
  DestinationString = 0LL;
  LinkTarget.Buffer = 0LL;
  memset(&ObjectAttributes, 0, 44);
  *(_QWORD *)&Destination.Length = 0LL;
  if ( (int)PsReferenceProcessFilePointer(a1, &Object) >= 0 )
  {
    v12 = 0;
    v15 = 0;
    if ( (int)SeGetCachedSigningLevel((_DWORD)Object, (unsigned int)&v12, (unsigned int)&v15, 0, 0LL, 0LL) >= 0
      && v15 >= 0xCu )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Device\\BootDevice");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0
        && ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength) == -1073741789
        && ReturnedLength )
      {
        LinkTarget.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, ReturnedLength, 0x69536553u);
        if ( !LinkTarget.Buffer )
          goto LABEL_22;
        LinkTarget.MaximumLength = ReturnedLength;
        if ( ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL) >= 0 )
        {
          v4 = a2->Length + LinkTarget.Length + 36;
          if ( v4 <= 0xFFFE )
          {
            Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, v4, 0x69536553u);
            if ( Destination.Buffer )
            {
              Destination.MaximumLength = v4;
              RtlCopyUnicodeString(&Destination, &LinkTarget);
              RtlAppendUnicodeStringToString(&Destination, &stru_14000B820);
              RtlAppendUnicodeStringToString(&Destination, a2);
              if ( ObQueryNameString(Object, 0LL, 0, &ReturnedLength) == -1073741820 )
              {
                if ( ReturnedLength )
                {
                  Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL, ReturnedLength, 0x6E4F6553u);
                  p_Name = &Pool2->Name;
                  if ( Pool2 )
                  {
                    if ( ObQueryNameString(Object, Pool2, ReturnedLength, &ReturnedLength) >= 0 && p_Name->Length )
                      v3 = RtlEqualUnicodeString(p_Name, &Destination, 1u);
                    ExFreePoolWithTag(p_Name, 0);
                  }
                }
              }
              if ( Destination.Buffer )
                ExFreePoolWithTag(Destination.Buffer, 0);
            }
          }
        }
      }
    }
  }
  if ( LinkTarget.Buffer )
    ExFreePoolWithTag(LinkTarget.Buffer, 0);
LABEL_22:
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v3;
}
