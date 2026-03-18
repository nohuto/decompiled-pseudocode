/*
 * XREFs of PopEtStringSet @ 0x1409052BC
 * Callers:
 *     PopEtEnergyContextSetState @ 0x140904E6C (PopEtEnergyContextSetState.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140905B7C (RtlInternEntryDereference.c)
 *     PopEtStringReference @ 0x140905D18 (PopEtStringReference.c)
 */

__int64 __fastcall PopEtStringSet(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *a1;
  if ( *a1 )
    result = RtlInternEntryDereference(PopEtGlobals + 56);
  *a1 = a2;
  if ( a2 )
    return PopEtStringReference(a2, v5, a3);
  return result;
}
