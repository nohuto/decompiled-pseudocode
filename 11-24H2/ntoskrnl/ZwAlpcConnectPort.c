/*
 * XREFs of ZwAlpcConnectPort @ 0x1406A7370
 * Callers:
 *     DifZwAlpcConnectPortWrapper @ 0x14063BC30 (DifZwAlpcConnectPortWrapper.c)
 *     SepRmLsaConnectRequest @ 0x140A52AA4 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140A852C4 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
