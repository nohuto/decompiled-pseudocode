/*
 * XREFs of CreateMergeLink @ 0x140009B10
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x14000CCA8 (CreateRegistryLinksForMachine.c)
 * Callees:
 *     CreateKeyRecursively @ 0x140009D28 (CreateKeyRecursively.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CreateMergeLink(__int128 *a1, PVOID *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int128 v8; // xmm0
  NTSTATUS v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r9
  NTSTATUS v12; // ebx
  int v13; // eax
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-11h] BYREF
  __int128 v18; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 KeyInformation; // [rsp+88h] [rbp+2Fh] BYREF
  int v20; // [rsp+90h] [rbp+37h]

  KeyInformation = 0LL;
  v20 = 0;
  LOBYTE(a4) = 1;
  ResultLength = 0;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  Handle = 0LL;
  v18 = 0LL;
  result = CreateKeyRecursively(&KeyHandle, a2, a1, a4);
  if ( result != -1073741790 )
  {
    if ( result == -1073741771 )
    {
      v8 = *a1;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      v18 = v8;
      ObjectAttributes.Attributes = 320;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = NtOpenKey(&KeyHandle, 0x3001Fu, &ObjectAttributes);
      if ( result < 0 )
        return result;
      v9 = NtQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength);
      if ( v9 < 0 )
      {
        NtClose(KeyHandle);
        return v9;
      }
      if ( (BYTE4(KeyInformation) & 3) != 2 )
      {
        NtClose(KeyHandle);
        goto LABEL_15;
      }
      v9 = NtDeleteKey(KeyHandle);
      NtClose(KeyHandle);
      if ( v9 < 0 )
        return v9;
      LOBYTE(v11) = 1;
      result = CreateKeyRecursively(&KeyHandle, v10, a1, v11);
    }
    if ( result < 0 )
    {
      if ( result != -1073741771 )
        return result;
    }
    else
    {
      v12 = NtSetValueKey(KeyHandle, &SymbolicLinkValueName, 0, 6u, a2[1], *(unsigned __int16 *)a2);
      NtClose(KeyHandle);
      if ( v12 < 0 )
        return v12;
    }
LABEL_15:
    v13 = CreateKeyRecursively(&Handle, v7, a2, 0LL);
    v12 = v13;
    if ( v13 < 0 )
    {
      if ( v13 == -1073741771 || v13 == -1073741790 )
        return 0;
    }
    else
    {
      NtClose(Handle);
    }
    return v12;
  }
  return result;
}
