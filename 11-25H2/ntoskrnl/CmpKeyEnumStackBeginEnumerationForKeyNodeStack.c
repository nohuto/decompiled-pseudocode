/*
 * XREFs of CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14097561C
 * Callers:
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140973E5C (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140975494 (CmpSubtreeEnumeratorAdvance.c)
 * Callees:
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140975934 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1409759C0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140975C1C (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140975CE8 (CmpKeyEnumStackEntryBegin.c)
 */

__int64 __fastcall CmpKeyEnumStackBeginEnumerationForKeyNodeStack(__int16 *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 i; // bx
  __int64 v6; // rdx
  _QWORD *v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  int v11; // edi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  for ( i = *a1; i >= 0; i += result )
  {
    CmpKeyNodeStackGetEntryAtLayerHeight(a2, (unsigned __int16)i);
    CmpKeyEnumStackGetEntryAtLayerHeight(a1, v6);
    if ( v7[2] )
    {
      result = CmpGetEffectiveKeyNodeSemantics(*v7);
      v11 = result;
      if ( (_DWORD)result == 1 )
        return result;
      result = CmpKeyEnumStackEntryBegin(v10, v9, v8);
      if ( (v11 & 0xFFFFFFFD) != 0 )
        return result;
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0xFFFFLL;
    }
  }
  return result;
}
