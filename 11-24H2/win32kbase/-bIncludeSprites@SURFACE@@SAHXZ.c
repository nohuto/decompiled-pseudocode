/*
 * XREFs of ?bIncludeSprites@SURFACE@@SAHXZ @ 0x140149290
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *__fastcall SURFACE::bIncludeSprites(__int64 a1)
{
  struct _GRETHREAD *result; // rax

  result = GreGetCurrentThread(a1);
  if ( result )
    return (struct _GRETHREAD *)((*((_DWORD *)result + 86) >> 1) & 1);
  return result;
}
