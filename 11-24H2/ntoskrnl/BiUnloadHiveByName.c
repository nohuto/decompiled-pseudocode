/*
 * XREFs of BiUnloadHiveByName @ 0x140A81BF0
 * Callers:
 *     BiAddStoreFromFile @ 0x14085A128 (BiAddStoreFromFile.c)
 *     BiUnloadHiveByHandle @ 0x140A81B58 (BiUnloadHiveByHandle.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     ZwUnloadKey @ 0x1406AAEF0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1406AAF10 (ZwUnloadKey2.c)
 *     BiReleasePrivilege @ 0x1409A7288 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409A72E0 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByName(__int64 a1, int a2, char a3)
{
  ULONG_PTR v5; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  NTSTATUS v8; // ebx
  NTSTATUS v10; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  *(&TargetKey.Attributes + 1) = 0;
  v13 = 0LL;
  *(&TargetKey.Length + 1) = 0;
  DestinationString = 0LL;
  v5 = (unsigned int)(a2 + 38);
  Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL, v5, 0x4B444342u);
  v7 = Pool2;
  if ( Pool2 )
  {
    swprintf_s(Pool2, v5 >> 1, L"%s\\%s", L"\\Registry\\Machine", a1);
    RtlInitUnicodeString(&DestinationString, v7);
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    v8 = BiAcquirePrivilege(0x12u, (__int64)&v13);
    if ( v8 >= 0 )
    {
      if ( a3 )
        v10 = ZwUnloadKey2(&TargetKey, 1u);
      else
        v10 = ZwUnloadKey(&TargetKey);
      v8 = v10;
      BiReleasePrivilege((unsigned int *)&v13);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
