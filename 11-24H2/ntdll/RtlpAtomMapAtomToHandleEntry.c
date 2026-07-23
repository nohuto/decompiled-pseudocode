/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x18007B20C
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x180013A80 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x18007AA70 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x18007AC90 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18007AD34 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x18007B560 (RtlpFreeAllAtom.c)
 *     RtlPinAtomInAtomTable @ 0x18013A2B0 (RtlPinAtomInAtomTable.c)
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
