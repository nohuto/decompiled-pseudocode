/*
 * XREFs of ?vSetIncludeSprites@SURFACE@@SAXXZ @ 0x14013A070
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SURFACE::vSetIncludeSprites(__int64 a1)
{
  struct _GRETHREAD *CurrentThread; // rax

  CurrentThread = GreGetCurrentThread(a1);
  if ( CurrentThread )
    *((_DWORD *)CurrentThread + 86) |= 2u;
}
