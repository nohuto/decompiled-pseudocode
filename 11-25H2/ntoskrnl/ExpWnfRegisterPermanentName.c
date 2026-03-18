/*
 * XREFs of ExpWnfRegisterPermanentName @ 0x14091C378
 * Callers:
 *     NtCreateWnfStateName @ 0x1408973D0 (NtCreateWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14091BE1C (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x14091BEE8 (ExpWnfComposeValueName.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfRegisterPermanentName(unsigned __int64 a1, __int64 a2)
{
  NTSTATUS NameStoreRegistryRoot; // ebx
  ULONG v6; // eax
  __int64 v7; // rbx
  ULONG v8; // edx
  ULONG DataSize; // ebp
  char *Pool2; // rax
  char *Data; // rdi
  _OWORD *v12; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v15;
  ExpWnfComposeValueName(a1, &ValueName);
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    v6 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 16));
    v7 = v6;
    v8 = v6 + 20;
    if ( !*(_QWORD *)(a2 + 8) )
      v8 = v6 + 4;
    DataSize = v8;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    Data = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *(const void **)(a2 + 16), (unsigned int)v7);
      *(_DWORD *)&Data[v7] = *(_DWORD *)a2;
      v12 = *(_OWORD **)(a2 + 8);
      if ( v12 )
        *(_OWORD *)&Data[v7 + 4] = *v12;
      NameStoreRegistryRoot = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, DataSize);
      ExFreePoolWithTag(Data, 0x20666E57u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)NameStoreRegistryRoot;
}
