/*
 * XREFs of NtOpenKeyEx @ 0x140AD3490
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     KeExpandKernelStackAndCallout @ 0x140489A50 (KeExpandKernelStackAndCallout.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x14065BF30 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  HANDLE *v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // r8
  unsigned int v7; // r9d
  NTSTATUS v8; // r8d
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 Parameter; // [rsp+40h] [rbp-40h] BYREF
  HANDLE *v12; // [rsp+48h] [rbp-38h]
  unsigned int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  __int64 v15; // [rsp+58h] [rbp-28h]
  unsigned int v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+64h] [rbp-1Ch]
  __int64 v18; // [rsp+68h] [rbp-18h]
  char PreviousMode; // [rsp+70h] [rbp-10h]
  int v20; // [rsp+71h] [rbp-Fh]
  __int16 v21; // [rsp+75h] [rbp-Bh]
  char v22; // [rsp+77h] [rbp-9h]

  HIDWORD(Parameter) = 0;
  v14 = 0;
  v17 = 0;
  v10 = 0LL;
  LOWORD(v20) = 0;
  BYTE2(v20) = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v10);
  Parameter = 0LL;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v12 = v4;
  v13 = v5;
  v15 = v6;
  v16 = v7;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
    KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmOpenKeyCallout, &Parameter, 0x4800uLL);
  else
    LODWORD(Parameter) = CmOpenKey(v12, v13, v15, v16, v18, PreviousMode);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v10);
  return v8;
}
