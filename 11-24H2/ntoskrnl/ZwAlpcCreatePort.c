/*
 * XREFs of ZwAlpcCreatePort @ 0x1406A73B0
 * Callers:
 *     DifZwAlpcCreatePortWrapper @ 0x14063BFF0 (DifZwAlpcCreatePortWrapper.c)
 *     PopUmpoInitializeChannel @ 0x140C32438 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C326B4 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C34404 (SshpAlpcInitialize.c)
 *     SeRmInitPhase1 @ 0x140C6024C (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
