/*
 * XREFs of PopEtAppIdDereference @ 0x140905224
 * Callers:
 *     PopEtEnergyContextCleanup @ 0x14090488C (PopEtEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x1409051DC (PopEtAggregateKeyCleanup.c)
 *     PopEtGetProcessAppId @ 0x14090754C (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140905B7C (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}
