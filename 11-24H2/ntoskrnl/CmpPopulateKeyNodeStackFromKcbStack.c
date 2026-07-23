/*
 * XREFs of CmpPopulateKeyNodeStackFromKcbStack @ 0x140908F00
 * Callers:
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x1407E1ABC (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1409077DC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14090804C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140908EB4 (CmpStartKeyNodeStackFromKcbStack.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140908010 (CmpGetEffectiveKcbSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 */

_UNKNOWN **__fastcall CmpPopulateKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rdi
  __int64 v9; // rbp
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // rcx
  _DWORD *v12; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *(_WORD *)(a2 + 2); i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)i);
    result = (_UNKNOWN **)CmpGetKcbAtLayerHeight(a2);
    v9 = (__int64)result;
    v10 = *((unsigned int *)result + 10);
    if ( (_DWORD)v10 != -1 )
    {
      v11 = (ULONG_PTR)result[4];
      v12 = (_DWORD *)(EntryAtLayerHeight + 24);
      *(_QWORD *)EntryAtLayerHeight = v11;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v10;
      if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
        result = (_UNKNOWN **)HvpGetCellFlat(v11, v10, v12);
      else
        result = (_UNKNOWN **)HvpGetCellPaged(v11, v10, v12);
      *(_QWORD *)(EntryAtLayerHeight + 16) = result;
    }
    if ( a3 )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKcbSemantics(v9, a3);
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
