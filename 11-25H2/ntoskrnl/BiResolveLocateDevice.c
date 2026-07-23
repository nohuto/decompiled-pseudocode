/*
 * XREFs of BiResolveLocateDevice @ 0x1408028C4
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x140A5F768 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x14069B8E0 (ZwQueryAttributesFile.c)
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiResolveLocateDevice(HANDLE BcdObjectHandle, _DWORD *a2)
{
  const WCHAR *v2; // r14
  WCHAR *v5; // rsi
  int v6; // eax
  ULONG v7; // edx
  unsigned int ElementData; // ebx
  WCHAR *Pool2; // rax
  const WCHAR *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG BufferSize; // [rsp+20h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-31h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+68h] [rbp-1h] BYREF

  v2 = (const WCHAR *)((char *)a2 + (unsigned int)a2[6]);
  BufferSize = 0;
  memset(&FileInformation, 0, sizeof(FileInformation));
  memset(&ObjectAttributes, 0, 44);
  v5 = 0LL;
  Destination = 0LL;
  if ( *(_DWORD *)v2 != 2 )
    goto LABEL_15;
  v6 = a2[5];
  if ( !v6 )
  {
    v7 = a2[7];
    if ( (v7 & 0xF000000) == 0x2000000 )
    {
      ElementData = BcdGetElementData(BcdObjectHandle, v7, 0LL, &BufferSize);
      if ( ElementData != -1073741789 )
        goto LABEL_16;
      Pool2 = (WCHAR *)ExAllocatePool2(0x102uLL);
      v5 = Pool2;
      if ( !Pool2 )
        goto LABEL_6;
      BcdGetElementData(BcdObjectHandle, a2[7], Pool2, &BufferSize);
      v10 = v5;
      goto LABEL_10;
    }
LABEL_15:
    ElementData = -1073741637;
    goto LABEL_16;
  }
  if ( v6 != 1 )
    goto LABEL_15;
  v10 = (const WCHAR *)(a2 + 8);
LABEL_10:
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( v2[v12 + 10] );
  do
    ++v11;
  while ( v10[v11] );
  Destination.MaximumLength = 2 * (v11 + v12 + 1);
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x102uLL);
  if ( !Destination.Buffer )
  {
LABEL_6:
    ElementData = -1073741670;
    goto LABEL_16;
  }
  RtlAppendUnicodeToString(&Destination, v2 + 10);
  RtlAppendUnicodeToString(&Destination, v10);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ElementData = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
LABEL_16:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  return ElementData;
}
