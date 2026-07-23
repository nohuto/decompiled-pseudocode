/*
 * XREFs of MI_IS_PTE_SHADOW_STACK @ 0x14043CB30
 * Callers:
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_IS_PTE_SHADOW_STACK(char a1)
{
  bool result; // al

  result = 0;
  if ( (MiFlags & 0x1000000) != 0 )
    return (a1 & 0x42) == 64;
  return result;
}
