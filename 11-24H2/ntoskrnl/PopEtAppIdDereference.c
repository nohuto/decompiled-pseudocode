/*
 * XREFs of PopEtAppIdDereference @ 0x14099BEA8
 * Callers:
 *     PopEtGetProcessAppId @ 0x1408DEC68 (PopEtGetProcessAppId.c)
 *     PopEtEnergyContextCleanup @ 0x14099B510 (PopEtEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x14099BE60 (PopEtAggregateKeyCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x14099C800 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}
