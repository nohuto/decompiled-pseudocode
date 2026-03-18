/*
 * XREFs of PsGetProcessJob @ 0x140470690
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1408A8F50 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14098D0EC (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 672);
}
