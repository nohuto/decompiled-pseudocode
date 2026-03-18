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

__int64 NtOpenKeyEx()
{
  HANDLE *v0; // r10
  unsigned int v1; // r11d
  __int64 v2; // r8
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  __int128 v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 Parameter; // [rsp+40h] [rbp-40h] BYREF
  HANDLE *v8; // [rsp+48h] [rbp-38h]
  unsigned int v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+54h] [rbp-2Ch]
  __int64 v11; // [rsp+58h] [rbp-28h]
  unsigned int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  __int64 v14; // [rsp+68h] [rbp-18h]
  char PreviousMode; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+71h] [rbp-Fh]
  __int16 v17; // [rsp+75h] [rbp-Bh]
  char v18; // [rsp+77h] [rbp-9h]

  HIDWORD(Parameter) = 0;
  v10 = 0;
  v13 = 0;
  v6 = 0LL;
  LOWORD(v16) = 0;
  BYTE2(v16) = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  Parameter = 0LL;
  v10 = 0;
  v13 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v8 = v0;
  v9 = v1;
  v11 = v2;
  v12 = v3;
  v14 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
    KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmOpenKeyCallout, &Parameter, 0x4800uLL);
  else
    LODWORD(Parameter) = CmOpenKey(v8, v9, v11, v12, v14, PreviousMode);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
