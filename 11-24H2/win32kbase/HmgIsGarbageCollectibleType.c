/*
 * XREFs of HmgIsGarbageCollectibleType @ 0x140173FA0
 * Callers:
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HmgIsGarbageCollectibleType(char a1)
{
  return a1 == 5 || a1 == 7 || a1 == 8 || a1 == 9 || a1 == 16;
}
