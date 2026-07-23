/*
 * XREFs of NtOpenKey @ 0x140AD33A0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 *     RtlInitFunctionalityCache @ 0x14076DC08 (RtlInitFunctionalityCache.c)
 *     ExpWatchLicenseInfoWork @ 0x1407A7F10 (ExpWatchLicenseInfoWork.c)
 *     AdtpObjsInitialize @ 0x140801948 (AdtpObjsInitialize.c)
 *     IopProtectSystemPartition @ 0x140C0D254 (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140C303BC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     KeExpandKernelStackAndCallout @ 0x140489A50 (KeExpandKernelStackAndCallout.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x14065BF30 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v3; // r11
  HANDLE *v4; // r9
  unsigned int v5; // r10d
  __int64 v6; // r8
  NTSTATUS v7; // r8d
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 Parameter; // [rsp+40h] [rbp-40h] BYREF
  HANDLE *v11; // [rsp+48h] [rbp-38h]
  unsigned int v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+54h] [rbp-2Ch]
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  char PreviousMode; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+71h] [rbp-Fh]
  __int16 v19; // [rsp+75h] [rbp-Bh]
  char v20; // [rsp+77h] [rbp-9h]

  HIDWORD(Parameter) = 0;
  v13 = 0;
  HIDWORD(v15) = 0;
  v9 = 0LL;
  LOWORD(v18) = 0;
  BYTE2(v18) = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v9);
  Parameter = v3;
  v13 = v3;
  v15 = v3;
  v18 = v3;
  v19 = v3;
  v20 = v3;
  v11 = v4;
  v12 = v5;
  v14 = v6;
  v16 = v3;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
    KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmOpenKeyCallout, &Parameter, 0x4800uLL);
  else
    LODWORD(Parameter) = CmOpenKey(v11, v12, v14, (unsigned int)v15, v16, PreviousMode);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v9);
  return v7;
}
