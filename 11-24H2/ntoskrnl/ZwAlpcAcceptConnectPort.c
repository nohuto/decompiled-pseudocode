/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x1406A7330
 * Callers:
 *     DifZwAlpcAcceptConnectPortWrapper @ 0x14063BA40 (DifZwAlpcAcceptConnectPortWrapper.c)
 *     SshpAlpcProcessAlpcMessage @ 0x140767E0C (SshpAlpcProcessAlpcMessage.c)
 *     PopUmpoProcessMessage @ 0x140A23CC8 (PopUmpoProcessMessage.c)
 *     SepRmLsaConnectRequest @ 0x140A52AA4 (SepRmLsaConnectRequest.c)
 *     PopMonitorProcessLoop @ 0x140A7FDF8 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
