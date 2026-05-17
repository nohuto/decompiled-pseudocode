/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x18006831C
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x18005BC50 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180067B90 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180067DA0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067E44 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x180068670 (RtlpFreeAllAtom.c)
 *     RtlPinAtomInAtomTable @ 0x18013D7F0 (RtlPinAtomInAtomTable.c)
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
