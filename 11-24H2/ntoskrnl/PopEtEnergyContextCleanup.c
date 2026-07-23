/*
 * XREFs of PopEtEnergyContextCleanup @ 0x14099B510
 * Callers:
 *     PoEnergyContextCleanup @ 0x1408FFAB0 (PoEnergyContextCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x14099BEA8 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x14099C800 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtEnergyContextCleanup(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 456);
  if ( v2 )
  {
    result = PopEtAppIdDereference(v2);
    *(_QWORD *)(a1 + 456) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 464) )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    *(_QWORD *)(a1 + 464) = 0LL;
  }
  return result;
}
