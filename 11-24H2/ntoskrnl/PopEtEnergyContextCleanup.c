/*
 * XREFs of PopEtEnergyContextCleanup @ 0x14090488C
 * Callers:
 *     PoEnergyContextCleanup @ 0x1408A9850 (PoEnergyContextCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x140905224 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140905B7C (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtEnergyContextCleanup(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 456) )
  {
    result = PopEtAppIdDereference();
    *(_QWORD *)(a1 + 456) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 464) )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    *(_QWORD *)(a1 + 464) = 0LL;
  }
  return result;
}
