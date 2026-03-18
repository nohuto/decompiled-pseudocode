/*
 * XREFs of AslRegistryGetKey @ 0x1407F8F64
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x1407F15A0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x1407F1944 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsDisabled @ 0x1407F1EEC (SdbpGetMergeSdbsDisabled.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1407F7704 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslpProcessMatchRegNode @ 0x1407FBB08 (AslpProcessMatchRegNode.c)
 * Callees:
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     AslRegistryBuildMachinePath @ 0x1407F8CCC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407F8DB0 (AslRegistryBuildUserPath.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, const WCHAR *a2, ACCESS_MASK a3, int a4)
{
  int v6; // ebx
  const char *v7; // r9
  int v8; // r8d
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  HANDLE v11; // rax
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Destination = 0LL;
  if ( a4 )
  {
    v6 = AslRegistryBuildMachinePath(&Destination, a2);
    if ( v6 < 0 )
    {
      v7 = "AslRegistryBuildMachinePath failed %x for %ws";
      v8 = 1642;
LABEL_4:
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetKey", v8, (_DWORD)v7);
      goto LABEL_11;
    }
  }
  else
  {
    v6 = AslRegistryBuildUserPath(&Destination, a2);
    if ( v6 < 0 )
    {
      v7 = "AslRegistryBuildUserPath failed %x for %ws";
      v8 = 1649;
      goto LABEL_4;
    }
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v11 = KeyHandle;
    v6 = 0;
    KeyHandle = 0LL;
    *a1 = v11;
  }
  else if ( v10 != -1073741772 )
  {
    v7 = "NtOpenKey failed %x for %ws";
    v8 = 1685;
    goto LABEL_4;
  }
LABEL_11:
  if ( Destination.Buffer )
    AslFree(v9);
  return (unsigned int)v6;
}
