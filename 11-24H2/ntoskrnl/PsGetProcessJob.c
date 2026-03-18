/*
 * XREFs of PsGetProcessJob @ 0x14046EFC0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x14088D0AC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140890E80 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 672);
}
