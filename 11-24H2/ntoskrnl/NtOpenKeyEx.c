/*
 * XREFs of NtOpenKeyEx @ 0x140A40DD0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 *     RtlInitFunctionalityCache @ 0x14077CE68 (RtlInitFunctionalityCache.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B7800 (ExpWatchLicenseInfoWork.c)
 *     AdtpObjsInitialize @ 0x140811BF8 (AdtpObjsInitialize.c)
 *     NtOpenKey @ 0x140A40DB0 (NtOpenKey.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140231040 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  unsigned int v5; // r11d
  __int64 v6; // r10
  int v7; // r9d
  NTSTATUS v8; // r8d
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  _QWORD Parameter[4]; // [rsp+38h] [rbp-38h] BYREF
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  __int64 v16; // [rsp+68h] [rbp-8h]

  v11 = 0LL;
  HIDWORD(Parameter[0]) = 0;
  v10 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v10);
  Parameter[2] = v5;
  v14 = 0;
  v15 = 0LL;
  Parameter[0] = 0LL;
  v16 = 0LL;
  Parameter[1] = v6;
  Parameter[3] = ObjectAttributes;
  v13 = v7;
  LOBYTE(v16) = KeGetCurrentThread()->PreviousMode;
  KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmOpenKeyCallout, Parameter, 0x4800uLL);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v10);
  return v8;
}
