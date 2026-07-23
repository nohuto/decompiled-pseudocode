/*
 * XREFs of NtCreateKey @ 0x140AD2A50
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     KeExpandKernelStackAndCallout @ 0x140489A50 (KeExpandKernelStackAndCallout.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x14065BF30 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmCreateKey @ 0x140AD24C0 (CmCreateKey.c)
 */

NTSTATUS __cdecl NtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  HANDLE *v7; // r10
  unsigned int v8; // r11d
  ULONG_PTR v9; // r8
  int v10; // r9d
  __int64 v11; // r9
  NTSTATUS v12; // r8d
  __int128 v14; // [rsp+40h] [rbp-21h] BYREF
  __int64 Parameter; // [rsp+50h] [rbp-11h] BYREF
  HANDLE *v16; // [rsp+58h] [rbp-9h]
  unsigned int v17; // [rsp+60h] [rbp-1h]
  int v18; // [rsp+64h] [rbp+3h]
  ULONG_PTR v19; // [rsp+68h] [rbp+7h]
  int v20; // [rsp+70h] [rbp+Fh]
  int v21; // [rsp+74h] [rbp+13h]
  __m128i *v22; // [rsp+78h] [rbp+17h]
  ULONG v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+84h] [rbp+23h]
  PULONG v25; // [rsp+88h] [rbp+27h]
  __int64 v26; // [rsp+90h] [rbp+2Fh]

  v18 = 0;
  HIDWORD(Parameter) = 0;
  v21 = 0;
  v14 = 0LL;
  v24 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v14);
  v22 = (__m128i *)Class;
  v23 = CreateOptions;
  v25 = Disposition;
  Parameter = 0LL;
  v18 = 0;
  v21 = 0;
  v24 = 0;
  v16 = v7;
  v17 = v8;
  v19 = v9;
  v20 = v10;
  v26 = 0LL;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
    KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmCreateKeyCallout, &Parameter, 0x4800uLL);
  else
    LODWORD(Parameter) = CmCreateKey(v16, v17, v19, v11, v22, v23, v25, v26);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v14);
  return v12;
}
