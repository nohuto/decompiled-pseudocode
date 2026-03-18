/*
 * XREFs of GreEnableAppContainerRestriction @ 0x14020253C
 * Callers:
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *__fastcall GreEnableAppContainerRestriction(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct _GRETHREAD *result; // rax

  v2 = a1;
  result = GreGetCurrentThread(a1, a2);
  if ( result )
    *((_DWORD *)result + 86) = *((_DWORD *)result + 86) & 0xFFFFFFFB | (v2 == 0 ? 4 : 0);
  return result;
}
