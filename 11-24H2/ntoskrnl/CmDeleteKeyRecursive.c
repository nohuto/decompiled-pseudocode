/*
 * XREFs of CmDeleteKeyRecursive @ 0x1407D2908
 * Callers:
 *     CmDeleteKeyRecursive @ 0x1407D2908 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4A88 (CmpMoveBiosAliasTable.c)
 *     CmpCreateHardwareProfiles @ 0x140C48538 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x1406A8F30 (ZwDeleteKey.c)
 *     CmDeleteKeyRecursive @ 0x1407D2908 (CmDeleteKeyRecursive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmDeleteKeyRecursive(void *a1, const WCHAR *a2, __int64 a3, int a4, ULONG ResultLength)
{
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  __int64 v10; // rdx
  wchar_t *Pool2; // rax
  wchar_t *v12; // r14
  __int64 v13; // rdx
  NTSTATUS v14; // ebx
  ULONG Length; // [rsp+20h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    do
    {
      v9 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)a3, a4 - 2, &ResultLength);
      if ( v9 < 0 )
        break;
      v10 = -1LL;
      *(_WORD *)(a3 + 2 * ((unsigned __int64)*(unsigned int *)(a3 + 12) >> 1) + 16) = 0;
      do
        ++v10;
      while ( *(_WORD *)(a3 + 2 * v10 + 16) );
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2 * v10 + 2, 0x20204D43u);
      v12 = Pool2;
      if ( !Pool2 )
      {
        v9 = -1073741670;
        break;
      }
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(a3 + 2 * v13 + 16) );
      wcscpy_s(Pool2, v13 + 1, (const wchar_t *)(a3 + 16));
      LOBYTE(Length) = 1;
      v9 = CmDeleteKeyRecursive((int)KeyHandle, (int)v12, a3, a4, Length);
      ExFreePoolWithTag(v12, 0);
    }
    while ( v9 >= 0 );
    v14 = 0;
    if ( v9 != -2147483622 )
      v14 = v9;
    if ( v14 >= 0 )
      v14 = ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v14;
  }
  return result;
}
