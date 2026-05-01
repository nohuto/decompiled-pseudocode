/*
 * XREFs of AslRegistryGetKey @ 0x18009D8F8
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x180092DBC (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x1800931E0 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsDisabled @ 0x180093994 (SdbpGetMergeSdbsDisabled.c)
 *     AslpProcessMatchRegNode @ 0x1800A5CF0 (AslpProcessMatchRegNode.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslRegistryBuildMachinePath @ 0x18009D724 (AslRegistryBuildMachinePath.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, const WCHAR *a2, ACCESS_MASK a3)
{
  int v5; // ebx
  NTSTATUS v6; // eax
  void *v7; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Destination = 0LL;
  v5 = AslRegistryBuildMachinePath(&Destination, a2);
  if ( v5 < 0 )
    goto LABEL_2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v7 = KeyHandle;
    v5 = 0;
    KeyHandle = 0LL;
    *a1 = v7;
  }
  else if ( v6 != -1073741772 )
  {
LABEL_2:
    AslLogCallPrintf(1LL);
  }
  if ( Destination.Buffer )
    AslFree(NtCurrentPeb()->ProcessHeap, Destination.Buffer);
  return (unsigned int)v5;
}
