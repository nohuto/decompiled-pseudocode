/*
 * XREFs of CmpAddToHiveFileList @ 0x140A6A4C4
 * Callers:
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwQueryObject @ 0x1406A6610 (ZwQueryObject.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpAddToHiveFileList(__int64 a1)
{
  __int64 Pool; // rdi
  NTSTATUS v3; // ebx
  ULONG v4; // eax
  __int16 *v5; // rcx
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int16 v10; // [rsp+B8h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  ReturnLength = 0;
  DestinationString = 0LL;
  v10 = 0;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  if ( !CmpHiveFileListHandle )
  {
    RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\system\\currentcontrolset\\control\\hivelist");
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( v3 < 0 )
      return (unsigned int)v3;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CmpHiveFileListHandle,
           (signed __int64)KeyHandle,
           0LL) )
    {
      ZwClose(KeyHandle);
    }
  }
  Pool = CmpAllocatePool(0x100uLL);
  if ( !Pool )
    return (unsigned int)-1073741801;
  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 )
  {
    v5 = &v10;
    DataSize = 2;
    goto LABEL_6;
  }
  v3 = ZwQueryObject(*(HANDLE *)(a1 + 1544), ObjectNameInformation, (PVOID)Pool, 0x200u, &ReturnLength);
  v4 = ReturnLength - 16;
  ReturnLength -= 16;
  if ( v3 >= 0 )
  {
    v5 = *(__int16 **)(Pool + 8);
    v5[(unsigned __int64)v4 >> 1] = 0;
    DataSize = ReturnLength + 2;
LABEL_6:
    ReturnLength = DataSize;
    v3 = ZwSetValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(a1 + 1856), 0, 1u, v5, DataSize);
  }
  CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  return (unsigned int)v3;
}
