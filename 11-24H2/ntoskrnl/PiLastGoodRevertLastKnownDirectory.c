/*
 * XREFs of PiLastGoodRevertLastKnownDirectory @ 0x140C257A0
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x140C259E4 (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     ZwDeleteFile @ 0x1406A8F10 (ZwDeleteFile.c)
 *     ZwDeleteKey @ 0x1406A8F30 (ZwDeleteKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopFileUtilClearAttributes @ 0x1407336FC (IopFileUtilClearAttributes.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x140C28590 (IopFileUtilWalkDirectoryTreeTopDown.c)
 */

void __fastcall PiLastGoodRevertLastKnownDirectory(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  __int64 Pool2; // rbx
  __int64 v6; // r8
  ULONG v7; // edx
  int v8; // edi
  unsigned int v9; // eax
  char *v10; // rcx
  __int64 v11; // rdx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES v16; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v18[26]; // [rsp+C0h] [rbp-40h] BYREF
  char v19; // [rsp+DAh] [rbp-26h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Destination = 0LL;
  Source = 0LL;
  memset(&v16, 0, 44);
  memset_0(v18, 0, 0x218uLL);
  ResultLength = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x21CuLL, 0x674C7050uLL);
  if ( Pool2 )
  {
    IopFileUtilWalkDirectoryTreeTopDown(a1, v4, v6, a1);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      v7 = 0;
      v8 = 1;
      while ( ZwEnumerateValueKey(KeyHandle, v7, KeyValueFullInformation, (PVOID)Pool2, 0x21Cu, &ResultLength) >= 0 )
      {
        if ( ResultLength
          && *(_DWORD *)(Pool2 + 4) == 4
          && *(_DWORD *)(Pool2 + 12) == 4
          && (unsigned __int8)*(_DWORD *)(*(unsigned int *)(Pool2 + 8) + Pool2) == 1 )
        {
          *(_DWORD *)&Destination.Length = 35127296;
          Destination.Buffer = (wchar_t *)v18;
          Source.Buffer = (wchar_t *)(Pool2 + 20);
          Source.Length = *(_WORD *)(Pool2 + 16);
          Source.MaximumLength = Source.Length;
          RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          v9 = Destination.Length >> 1;
          if ( v9 > 0xD )
          {
            v10 = &v19;
            v11 = v9 - 13;
            do
            {
              if ( *(_WORD *)v10 == 47 )
                *(_WORD *)v10 = 92;
              v10 += 2;
              --v11;
            }
            while ( v11 );
          }
          IopFileUtilClearAttributes(&Destination);
          v16.Length = 48;
          v16.ObjectName = &Destination;
          v16.RootDirectory = 0LL;
          *(_OWORD *)&v16.SecurityDescriptor = 0LL;
          v16.Attributes = 576;
          ZwDeleteFile(&v16);
        }
        v7 = v8++;
      }
      ZwDeleteKey(KeyHandle);
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag((PVOID)Pool2, 0x674C7050u);
  }
}
