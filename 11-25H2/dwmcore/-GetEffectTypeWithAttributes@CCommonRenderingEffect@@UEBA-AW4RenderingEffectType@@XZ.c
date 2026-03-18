/*
 * XREFs of ?GetEffectTypeWithAttributes@CCommonRenderingEffect@@UEBA?AW4RenderingEffectType@@XZ @ 0x1801DEDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::GetEffectTypeWithAttributes(__int64 a1)
{
  __int64 result; // rax

  result = 65537LL;
  if ( !*(_BYTE *)(a1 + 70) )
    return 1LL;
  return result;
}
