/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x140A572E4
 * Callers:
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x1406A9230 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 *     EtwpRegisterKMProvider @ 0x140A57524 (EtwpRegisterKMProvider.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  unsigned int v0; // ebx
  BOOL v1; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  REGHANDLE RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v0 = 0;
  RegHandle = 0LL;
  v1 = 0;
  ZwQueryWnfStateNameInformation((__int64)&WNF_WER_SERVICE_START, 1LL);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( (int)EtwpRegisterKMProvider(
              CurrentServerSiloGlobals[52].Flink,
              (unsigned int)qword_14001A6C8,
              3,
              0,
              0LL,
              retaddr,
              (__int64)&RegHandle) >= 0 )
  {
    EventDescriptor = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) )
      v1 = EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0;
    EtwUnregister(RegHandle);
  }
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
