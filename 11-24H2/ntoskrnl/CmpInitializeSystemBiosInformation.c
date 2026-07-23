/*
 * XREFs of CmpInitializeSystemBiosInformation @ 0x140C49C60
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4B660 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpBuildRegMultiSz @ 0x140C47EE0 (CmpBuildRegMultiSz.c)
 */

void __fastcall CmpInitializeSystemBiosInformation(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  __int64 Pool2; // rax
  __int64 v6; // rdx
  char *v7; // rbx
  const void *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  KeyHandle = (HANDLE)-1LL;
  memset(&ObjectAttributes, 0, 44);
  v2 = *(unsigned __int16 *)(v1 + 2752);
  v3 = *(unsigned __int16 *)(v1 + 2768);
  v4 = *(unsigned __int16 *)(v1 + 2784);
  Pool2 = ExAllocatePool2(0x100uLL, v3 + v4 + v2 + 8, 0x20204D43uLL);
  v7 = (char *)Pool2;
  if ( Pool2 )
  {
    v8 = *(const void **)(v1 + 2760);
    v13 = 0;
    CmpBuildRegMultiSz(Pool2, v6, &v13, v8, v2);
    CmpBuildRegMultiSz((__int64)v7, v9, &v13, *(const void **)(v1 + 2776), v3);
    CmpBuildRegMultiSz((__int64)v7, v10, &v13, *(const void **)(v1 + 2792), v4);
    v11 = v13;
    *(_WORD *)&v7[v13] = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpSystemBiosVersionString, 0, 7u, v7, v11 + 2);
    ExFreePoolWithTag(v7, 0);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
}
