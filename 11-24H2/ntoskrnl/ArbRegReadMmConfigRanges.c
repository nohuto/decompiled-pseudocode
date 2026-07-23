/*
 * XREFs of ArbRegReadMmConfigRanges @ 0x140703C6C
 * Callers:
 *     ArbLibraryInitialize @ 0x140703640 (ArbLibraryInitialize.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ArbpGetRegistryValue @ 0x1407045E4 (ArbpGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 ArbRegReadMmConfigRanges()
{
  unsigned int v0; // ebx
  int RegistryValue; // eax
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // rsi
  int v5; // eax
  ULONG_PTR v6; // r14
  void *Pool2; // rax
  _DWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  const wchar_t *v10; // [rsp+28h] [rbp-48h]
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+38h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h]

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v9[1] = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v10 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v9;
  v11 = 0LL;
  v9[0] = 7733366;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0
    || (LODWORD(v11) = 2228258,
        *((_QWORD *)&v11 + 1) = L"ReservedResources",
        ObjectAttributes.RootDirectory = KeyHandle,
        ObjectAttributes.Length = 48,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) < 0) )
  {
    v0 = 0;
  }
  else
  {
    P = 0LL;
    RegistryValue = ArbpGetRegistryValue(Handle);
    v2 = (char *)P;
    v0 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 10 )
      {
        v4 = *((unsigned int *)P + 2);
        v5 = *(_DWORD *)((char *)P + v4 + 36);
        if ( v5 )
        {
          v6 = (unsigned int)(32 * v5 + 8);
          Pool2 = (void *)ExAllocatePool2(0x40uLL, v6, 0x4E627241u);
          ArbMmConfigRange = (__int64)Pool2;
          if ( Pool2 )
            memmove(Pool2, &v2[v4 + 32], (unsigned int)v6);
          else
            v0 = -1073741670;
        }
      }
      else
      {
        v0 = -1073741811;
      }
    }
    else
    {
      v3 = 0;
      if ( v0 == -1073741670 )
        v3 = -1073741670;
      v0 = v3;
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
