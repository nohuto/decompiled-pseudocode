/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x1405E5308
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x14088D0AC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140890E80 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 1064);
}
