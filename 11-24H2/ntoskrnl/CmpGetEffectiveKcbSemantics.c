/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x140908010
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14090789C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140908F00 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
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
