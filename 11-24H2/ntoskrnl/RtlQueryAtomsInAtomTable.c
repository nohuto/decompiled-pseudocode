/*
 * XREFs of RtlQueryAtomsInAtomTable @ 0x140780948
 * Callers:
 *     NtQueryInformationAtom @ 0x1408F45F0 (NtQueryInformationAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x14042463C (RtlpLookupLowBox.c)
 *     RtlpLockAtomTable @ 0x1408F4C90 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x1408F4D0C (RtlpUnlockAtomTable.c)
 */

__int64 __fastcall RtlQueryAtomsInAtomTable(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 i; // rsi
  __int64 j; // r15

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v8 = 0;
  v9 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 28); i = (unsigned int)(i + 1) )
  {
    for ( j = *(_QWORD *)(a1 + 8 * i + 32); j; j = *(_QWORD *)j )
    {
      if ( RtlpLookupLowBox(a1, j, 0) )
      {
        if ( (unsigned int)v9 >= a2 )
          v8 = -1073741820;
        else
          *(_WORD *)(a4 + 2 * v9) = *(_WORD *)(j + 10);
        v9 = (unsigned int)(v9 + 1);
      }
    }
  }
  *a3 = v9;
  RtlpUnlockAtomTable(a1);
  return v8;
}
