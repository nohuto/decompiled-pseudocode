/*
 * XREFs of RtlpLookupLowBox @ 0x14042463C
 * Callers:
 *     RtlQueryAtomsInAtomTable @ 0x140780948 (RtlQueryAtomsInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1408F42F0 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1408F4840 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1408F4910 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x1404247E0 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x14042492C (RtlpAllowsLowBoxAccess.c)
 */

_QWORD *__fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  int LowBoxId; // ecx
  _QWORD *result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (_QWORD *)(a2 + 16);
  v6 = 0LL;
  v5 = (_QWORD *)(a2 + 16);
  LowBoxId = RtlpQueryLowBoxId();
  if ( !LowBoxId )
    return v5;
  for ( result = (_QWORD *)*v5; result != v5; result = (_QWORD *)*result )
  {
    if ( *((_DWORD *)result + 4) == LowBoxId )
      return result;
  }
  if ( !(unsigned __int8)RtlpAllowsLowBoxAccess(a2) )
    return 0LL;
  if ( !a3 )
    return (_QWORD *)(a2 + 16);
  return (_QWORD *)v6;
}
