/*
 * XREFs of PsGetProcessJob @ 0x1404696D0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x14089032C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x14089A470 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 672);
}
