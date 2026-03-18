/*
 * XREFs of PopEtAppIdDereference @ 0x1409626B4
 * Callers:
 *     PopEtGetProcessAppId @ 0x14083B8B0 (PopEtGetProcessAppId.c)
 *     PopEtEnergyContextCleanup @ 0x14096127C (PopEtEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x140961640 (PopEtAggregateKeyCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140961FE0 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}
