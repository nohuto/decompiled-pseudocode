/*
 * XREFs of CmpLoadLayerVersions @ 0x1407D74E4
 * Callers:
 *     CmpLoadSystemVersionData @ 0x1407D76DC (CmpLoadSystemVersionData.c)
 * Callees:
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpLoadLayerVersion @ 0x1407D7094 (CmpLoadLayerVersion.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpLoadLayerVersions(_QWORD *Base, _DWORD *a2, __int64 a3, void *a4, UNICODE_STRING *a5, int a6)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  ULONG v11; // r14d
  NTSTATUS v12; // eax
  _DWORD *Pool2; // rdi
  int v14; // eax
  __int64 i; // rdi
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v18; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v21; // [rsp+8Ch] [rbp-74h]
  _WORD v22[120]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v18 = 0LL;
  memset_0(KeyInformation, 0, 0x100uLL);
  *a2 = 0;
  ObjectAttributes.RootDirectory = a4;
  ObjectAttributes.ObjectName = a5;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  v10 = result;
  if ( result >= 0 )
  {
    v11 = 0;
    while ( *a2 < 0x10u )
    {
      v12 = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength);
      v10 = v12;
      if ( v12 == -2147483622 )
      {
        v10 = 0;
        break;
      }
      if ( v12 < 0 )
        goto LABEL_14;
      v22[(unsigned __int64)v21 >> 1] = 0;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x328uLL, 0x64764D43u);
      if ( !Pool2 )
      {
        v10 = -1073741670;
        goto LABEL_14;
      }
      v18.Length = v21;
      v18.MaximumLength = v21 + 2;
      v18.Buffer = v22;
      v10 = CmpLoadLayerVersion(Pool2, KeyHandle, &v18, a6);
      if ( v10 >= 0 )
        Base[(*a2)++] = Pool2;
      else
        ExFreePoolWithTag(Pool2, 0x64764D43u);
      ++v11;
    }
    qsort(Base, (unsigned int)*a2, 8uLL, CmpCompareLayerDescriptors);
LABEL_14:
    ZwClose(KeyHandle);
    if ( *a2 )
    {
      if ( v10 < 0 )
      {
        v14 = *a2 - 1;
        for ( i = v14; i >= 0; Base[i--] = 0LL )
          ExFreePoolWithTag((PVOID)Base[i], 0x64764D43u);
        *a2 = 0;
      }
      return v10;
    }
    else
    {
      return -2147483614;
    }
  }
  return result;
}
