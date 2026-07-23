/*
 * XREFs of BiUnloadHiveByName @ 0x140A249A0
 * Callers:
 *     BiUnloadHiveByHandle @ 0x140A24908 (BiUnloadHiveByHandle.c)
 *     BiAddStoreFromFile @ 0x140A25948 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1405006D0 (swprintf_s.c)
 *     ZwUnloadKey @ 0x14069EC80 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14069ECA0 (ZwUnloadKey2.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByName(__int64 a1, int a2, char a3)
{
  unsigned __int64 v5; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  int v8; // ebx
  NTSTATUS v10; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  *(&TargetKey.Attributes + 1) = 0;
  v13 = 0LL;
  *(&TargetKey.Length + 1) = 0;
  DestinationString = 0LL;
  v5 = (unsigned int)(a2 + 38);
  Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
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
    v8 = BiAcquirePrivilege(18LL, &v13);
    if ( v8 >= 0 )
    {
      if ( a3 )
        v10 = ZwUnloadKey2(&TargetKey, 1u);
      else
        v10 = ZwUnloadKey(&TargetKey);
      v8 = v10;
      BiReleasePrivilege(&v13);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
