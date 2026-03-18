/*
 * XREFs of CmpPopulateKeyNodeStackFromKcbStack @ 0x14097406C
 * Callers:
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x1407D1C8C (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140972C44 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140974020 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14097648C (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpGetEffectiveKcbSemantics @ 0x14086D4B0 (CmpGetEffectiveKcbSemantics.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     CmpGetKcbAtLayerHeight @ 0x140889590 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1409759C0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

_UNKNOWN **__fastcall CmpPopulateKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rdi
  __int16 v9; // dx
  __int64 v10; // rbp
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rcx
  _DWORD *v13; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *(_WORD *)(a2 + 2); i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)i);
    result = (_UNKNOWN **)CmpGetKcbAtLayerHeight(a2, v9);
    v10 = (__int64)result;
    v11 = *((unsigned int *)result + 10);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = (ULONG_PTR)result[4];
      v13 = (_DWORD *)(EntryAtLayerHeight + 24);
      *(_QWORD *)EntryAtLayerHeight = v12;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v11;
      if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
        result = (_UNKNOWN **)HvpGetCellFlat(v12, v11, v13);
      else
        result = (_UNKNOWN **)HvpGetCellPaged(v12, v11, v13);
      *(_QWORD *)(EntryAtLayerHeight + 16) = result;
    }
    if ( a3 )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKcbSemantics(v10, a3);
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
