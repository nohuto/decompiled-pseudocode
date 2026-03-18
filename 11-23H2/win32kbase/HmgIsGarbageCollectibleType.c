/*
 * XREFs of HmgIsGarbageCollectibleType @ 0x1C0159298
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00350B8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HmgIsGarbageCollectibleType(char a1)
{
  return a1 == 5 || a1 == 7 || a1 == 8 || a1 == 9 || a1 == 16;
}
