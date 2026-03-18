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

__int64 NtOpenKey()
{
  __int64 v0; // r11
  HANDLE *v1; // r9
  unsigned int v2; // r10d
  __int64 v3; // r8
  unsigned int v4; // r8d
  __int128 v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 Parameter; // [rsp+40h] [rbp-40h] BYREF
  HANDLE *v8; // [rsp+48h] [rbp-38h]
  unsigned int v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+54h] [rbp-2Ch]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  char PreviousMode; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+71h] [rbp-Fh]
  __int16 v16; // [rsp+75h] [rbp-Bh]
  char v17; // [rsp+77h] [rbp-9h]

  HIDWORD(Parameter) = 0;
  v10 = 0;
  HIDWORD(v12) = 0;
  v6 = 0LL;
  LOWORD(v15) = 0;
  BYTE2(v15) = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  Parameter = v0;
  v10 = v0;
  v12 = v0;
  v15 = v0;
  v16 = v0;
  v17 = v0;
  v8 = v1;
  v9 = v2;
  v11 = v3;
  v13 = v0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
    KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmOpenKeyCallout, &Parameter, 0x4800uLL);
  else
    LODWORD(Parameter) = CmOpenKey(v8, v9, v11, (unsigned int)v12, v13, PreviousMode);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
