/*
 * XREFs of CmpInitializeRegistryNode @ 0x1407DEF9C
 * Callers:
 *     CmpAddProcessorConfigurationEntry @ 0x1407D5208 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetupConfigurationTree @ 0x140C4CCD0 (CmpSetupConfigurationTree.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlIntegerToChar @ 0x140860A00 (RtlIntegerToChar.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpInitializeRegistryNode(__int64 a1, void *a2, HANDLE *a3, int a4, int a5, __int64 a6)
{
  int *v6; // rbx
  ULONG v10; // esi
  UNICODE_STRING *v11; // rax
  NTSTATUS result; // eax
  __int64 v13; // rax
  unsigned __int16 v14; // dx
  HANDLE v15; // rbx
  NTSTATUS v16; // r14d
  NTSTATUS v17; // ebx
  const void *v18; // rdx
  char *Pool2; // rbx
  size_t v20; // r8
  char *v21; // rcx
  _DWORD *v22; // rcx
  PUNICODE_STRING Class; // [rsp+20h] [rbp-C1h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-A1h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-99h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-91h] BYREF
  UNICODE_STRING v27; // [rsp+60h] [rbp-81h] BYREF
  STRING DestinationString; // [rsp+70h] [rbp-71h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-51h] BYREF
  CHAR String[16]; // [rsp+C0h] [rbp-21h] BYREF
  char v32; // [rsp+D0h] [rbp-11h] BYREF

  v6 = (int *)(a1 + 28);
  v10 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v27 = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  Disposition = 0;
  UnicodeString = 0LL;
  DestinationString = 0LL;
  if ( !*(_DWORD *)(a1 + 24) )
    *v6 = 0;
  v11 = &CmTypeName + *v6;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = v11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result >= 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      v13 = *v6;
      if ( (unsigned int)v13 >= 0x2A )
      {
        v14 = 0;
      }
      else
      {
        v14 = *(_WORD *)(a6 + 2 * v13);
        *(_WORD *)(a6 + 2LL * *v6) = v14 + 1;
      }
      RtlIntegerToChar(v14, 0xAu, 12, String);
      RtlInitAnsiString(&DestinationString, String);
      *(_DWORD *)&v27.Length = 1572864;
      v27.Buffer = (wchar_t *)&v32;
      RtlAnsiStringToUnicodeString(&v27, &DestinationString, 0);
      v15 = KeyHandle;
      ObjectAttributes.ObjectName = &v27;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      ZwClose(v15);
      if ( v16 < 0 )
        return v16;
    }
    RtlInitUnicodeString(&ValueName, L"Component Information");
    v17 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, (PVOID)(a1 + 32), 0x10u);
    if ( v17 < 0 )
      goto LABEL_11;
    if ( *(_DWORD *)(a1 + 52) )
    {
      RtlInitUnicodeString(&ValueName, L"Identifier");
      RtlInitAnsiString(&DestinationString, *(PCSZ *)(a1 + 56));
      v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( v17 < 0 )
        goto LABEL_11;
      v17 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
      RtlFreeAnsiString(&UnicodeString);
      if ( v17 < 0 )
        goto LABEL_11;
    }
    RtlInitUnicodeString(&ValueName, L"Configuration Data");
    v18 = *(const void **)(a1 + 64);
    if ( v18 )
    {
      v10 = *(_DWORD *)(a1 + 48) + 8;
      if ( v10 <= CmpConfigurationAreaSize )
      {
        v20 = *(unsigned int *)(a1 + 48);
        v21 = (char *)CmpConfigurationData + 8;
      }
      else
      {
        Pool2 = (char *)ExAllocatePool2(0x100uLL, v10, 0x20204D43u);
        if ( !Pool2 )
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 64) = 0LL;
          goto LABEL_22;
        }
        CmpConfigurationAreaSize = v10;
        ExFreePoolWithTag(CmpConfigurationData, 0);
        v20 = *(unsigned int *)(a1 + 48);
        v21 = Pool2 + 8;
        v18 = *(const void **)(a1 + 64);
        CmpConfigurationData = Pool2;
      }
      memmove(v21, v18, v20);
    }
LABEL_22:
    if ( !*(_QWORD *)(a1 + 64) )
    {
      v10 = 16;
      *((_QWORD *)CmpConfigurationData + 1) = 0LL;
    }
    v22 = CmpConfigurationData;
    Class = (PUNICODE_STRING)CmpConfigurationData;
    *(_DWORD *)CmpConfigurationData = a4;
    v22[1] = a5;
    v17 = ZwSetValueKey(KeyHandle, &ValueName, 0, 9u, Class, v10);
    if ( v17 >= 0 )
    {
      *a3 = KeyHandle;
      return 0;
    }
LABEL_11:
    ZwClose(KeyHandle);
    return v17;
  }
  return result;
}
