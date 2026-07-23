/*
 * XREFs of RtlpDereferenceAtom @ 0x18007B248
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18007AC90 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpFreeAllAtom @ 0x18007B560 (RtlpFreeAllAtom.c)
 */

char __fastcall RtlpDereferenceAtom(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( (a2[2] & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != (_BYTE *)(a1 + 12) )
    RtlpSysVolFree(a2);
  RtlpFreeAllAtom(a1, a3);
  return 1;
}
