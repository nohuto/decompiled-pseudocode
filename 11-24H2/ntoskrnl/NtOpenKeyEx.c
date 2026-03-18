/*
 * XREFs of NtOpenKeyEx @ 0x140A4A0B0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 *     RtlInitFunctionalityCache @ 0x14077CF38 (RtlInitFunctionalityCache.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B73B0 (ExpWatchLicenseInfoWork.c)
 *     AdtpObjsInitialize @ 0x1408114B8 (AdtpObjsInitialize.c)
 *     NtOpenKey @ 0x140A4A090 (NtOpenKey.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x14027BAB0 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 */

__int64 __fastcall NtOpenKeyEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r11d
  __int64 v5; // r10
  int v6; // r9d
  unsigned int v7; // r8d
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  _QWORD Parameter[4]; // [rsp+38h] [rbp-38h] BYREF
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+68h] [rbp-8h]

  v10 = 0LL;
  HIDWORD(Parameter[0]) = 0;
  v9 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v9);
  Parameter[2] = v4;
  v13 = 0;
  v14 = 0LL;
  Parameter[0] = 0LL;
  v15 = 0LL;
  Parameter[1] = v5;
  Parameter[3] = a3;
  v12 = v6;
  LOBYTE(v15) = KeGetCurrentThread()->PreviousMode;
  KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmOpenKeyCallout, Parameter, 0x4800uLL);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v9);
  return v7;
}
