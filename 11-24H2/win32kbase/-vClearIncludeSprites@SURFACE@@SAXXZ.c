/*
 * XREFs of ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x14013BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SURFACE::vClearIncludeSprites(__int64 a1)
{
  struct _GRETHREAD *CurrentThread; // rax

  CurrentThread = GreGetCurrentThread(a1);
  if ( CurrentThread )
    *((_DWORD *)CurrentThread + 86) &= ~2u;
}
