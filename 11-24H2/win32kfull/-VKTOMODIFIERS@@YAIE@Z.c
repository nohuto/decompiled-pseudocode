/*
 * XREFs of ?VKTOMODIFIERS@@YAIE@Z @ 0x140131CB8
 * Callers:
 *     EditionUpdateSASModifiers @ 0x140131C20 (EditionUpdateSASModifiers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VKTOMODIFIERS(char a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a1 - 16) <= 2u )
    return 4 >> (a1 - 16);
  result = 8LL;
  if ( a1 != 91 && a1 != 92 )
    return 0LL;
  return result;
}
