/*
 * XREFs of IoOpenDriverRegistryKey @ 0x1409B5A60
 * Callers:
 *     DifIoOpenDriverRegistryKeyWrapper @ 0x140628190 (DifIoOpenDriverRegistryKeyWrapper.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     PiCreateServiceStateKey @ 0x1409B569C (PiCreateServiceStateKey.c)
 *     PiGetServiceNameInfo @ 0x1409B595C (PiGetServiceNameInfo.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409B6214 (IopApplyMutableTagToRegistryKey.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoOpenDriverRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  HANDLE v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // r12
  int v12; // eax
  int ServiceNameInfo; // ebx
  int RegistryValue; // eax
  HANDLE v15; // rax
  int v17; // r14d
  __int64 *v18; // r9
  int v19; // eax
  UNICODE_STRING *v20; // r9
  HANDLE KeyHandle; // [rsp+48h] [rbp-31h] BYREF
  _DWORD *v22; // [rsp+50h] [rbp-29h]
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  char v26; // [rsp+D8h] [rbp+5Fh] BYREF

  KeyHandle = 0LL;
  v26 = 0;
  v22 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Handle = 0LL;
  v9 = 0LL;
  if ( !a1 )
    goto LABEL_21;
  v10 = *(_QWORD *)(a1 + 48);
  if ( !v10 )
    goto LABEL_21;
  if ( !*(_QWORD *)(v10 + 32) )
    goto LABEL_21;
  if ( !*(_WORD *)(v10 + 24) )
    goto LABEL_21;
  if ( a4 )
    goto LABEL_21;
  v11 = a5;
  if ( !a5 )
    goto LABEL_21;
  v12 = PipOpenServiceEnumKeys(v10 + 24, 131101LL, &Handle, 0LL, 0);
  v9 = Handle;
  ServiceNameInfo = v12;
  if ( v12 < 0 )
    goto LABEL_22;
  RegistryValue = IopGetRegistryValue(Handle);
  ServiceNameInfo = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_21;
  if ( RegistryValue < 0 )
    goto LABEL_22;
  if ( v22[1] != 4 || v22[3] != 4 )
  {
    ServiceNameInfo = -1073741492;
    goto LABEL_22;
  }
  if ( (*(_DWORD *)((char *)v22 + (unsigned int)v22[2]) & 0xB) == 0 )
    goto LABEL_21;
  if ( !a2 )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xFDFDFFE6 | 0x20019;
    if ( (a3 & 0x7FFDFFE6) == 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyParametersName;
      ObjectAttributes.RootDirectory = v9;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ServiceNameInfo = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      if ( ServiceNameInfo < 0 )
        goto LABEL_22;
      goto LABEL_18;
    }
    ServiceNameInfo = -1073741790;
    goto LABEL_22;
  }
  v17 = a2 - 1;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v26);
      if ( ServiceNameInfo < 0 )
        goto LABEL_22;
      v20 = (UNICODE_STRING *)&PiDriverRegKeySharedStateName;
      if ( v26 )
        v20 = (UNICODE_STRING *)L"\"$";
      v19 = PiCreateServiceStateKey(&DestinationString, v26, v9, v20, a3, 1, &KeyHandle);
      goto LABEL_34;
    }
LABEL_21:
    ServiceNameInfo = -1073741811;
    goto LABEL_22;
  }
  ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v26);
  if ( ServiceNameInfo < 0 )
    goto LABEL_22;
  v18 = &PiDriverRegKeyPersistentStateName;
  if ( v26 )
    v18 = &PiDriverRegKeyUniquePersistentStateName;
  v19 = PiCreateServiceStateKey(&DestinationString, v26, v9, (UNICODE_STRING *)v18, a3, 0, &KeyHandle);
LABEL_34:
  ServiceNameInfo = v19;
  if ( v19 >= 0 )
  {
    v15 = KeyHandle;
    if ( !KeyHandle )
      goto LABEL_19;
    IopApplyMutableTagToRegistryKey(KeyHandle);
LABEL_18:
    v15 = KeyHandle;
LABEL_19:
    KeyHandle = 0LL;
    *v11 = v15;
  }
LABEL_22:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)ServiceNameInfo;
}
