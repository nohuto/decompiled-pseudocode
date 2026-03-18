/*
 * XREFs of HmgRemoveGarbageCollectible @ 0x14014EA50
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall HmgRemoveGarbageCollectible(struct HOBJ__ *a1, char a2, unsigned int *a3)
{
  return HmgRemoveObjectImpl(a1, 0, 1, 2, a2, a3);
}
