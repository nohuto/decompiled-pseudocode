/*
 * XREFs of RtlpLookupLowBox @ 0x1404320FC
 * Callers:
 *     RtlQueryAtomsInAtomTable @ 0x140780A18 (RtlQueryAtomsInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140935920 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x140935BE0 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140935CB0 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x1404322A0 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x1404323F0 (RtlpAllowsLowBoxAccess.c)
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
