/*
 * XREFs of RtlpDereferenceAtom @ 0x180068358
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180067DA0 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpFreeAllAtom @ 0x180068670 (RtlpFreeAllAtom.c)
 */

char __fastcall RtlpDereferenceAtom(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != a1 + 12 )
    RtlpSysVolFree(a2);
  RtlpFreeAllAtom(a1, a3);
  return 1;
}
