/*
 * XREFs of NtGdiDdDestroyFullscreenSprite @ 0x1C026F940
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02657B0 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDdDestroyFullscreenSprite(HDC a1, void *a2)
{
  return SpDdDestroyFullscreenSprite(a1, a2);
}
