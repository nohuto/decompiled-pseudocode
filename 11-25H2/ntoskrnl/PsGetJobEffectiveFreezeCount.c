/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x1405D936C
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1408A8F50 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14098D0EC (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 1064);
}
