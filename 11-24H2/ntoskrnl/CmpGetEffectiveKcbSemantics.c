/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1409145A0
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140913E28 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140915490 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKcbSemantics(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ecx

  if ( a2 && *(__int16 *)(a1 + 66) == *(unsigned __int16 *)(a2 + 4) )
  {
    v3 = *(unsigned __int8 *)(a1 + 65);
    result = 2LL;
    if ( (_BYTE)v3 )
      return v3;
  }
  else if ( *(_WORD *)(a1 + 66) )
  {
    return *(unsigned __int8 *)(a1 + 65);
  }
  else
  {
    return 0LL;
  }
  return result;
}
