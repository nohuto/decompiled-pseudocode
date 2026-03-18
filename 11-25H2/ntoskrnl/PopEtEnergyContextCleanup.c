/*
 * XREFs of PopEtEnergyContextCleanup @ 0x14096127C
 * Callers:
 *     PoEnergyContextCleanup @ 0x1408E11B4 (PoEnergyContextCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140961FE0 (RtlInternEntryDereference.c)
 *     PopEtAppIdDereference @ 0x1409626B4 (PopEtAppIdDereference.c)
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
