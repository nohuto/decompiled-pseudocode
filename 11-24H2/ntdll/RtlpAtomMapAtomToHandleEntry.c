/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1800AEA2C
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x1800329C0 (RtlLookupAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1800AE4B0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800AE554 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x1800AED80 (RtlpFreeAllAtom.c)
 *     RtlQueryAtomInAtomTable @ 0x1801191C0 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x18013C0C0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 40) + (unsigned int)(a2 * *(_DWORD *)(a1 + 20));
  if ( v2
    && v2 >= *(_QWORD *)(a1 + 40)
    && v2 < *(_QWORD *)(a1 + 48)
    && ((*(_DWORD *)(a1 + 20) - 1) & (unsigned int)v2) == 0
    && (*(_BYTE *)v2 & 1) != 0 )
  {
    return *(_QWORD *)(v2 + 8);
  }
  else
  {
    return 0LL;
  }
}
