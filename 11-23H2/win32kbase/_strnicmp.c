/*
 * XREFs of _strnicmp @ 0x1C00CE388
 * Callers:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00A5F20 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     rimLoadImage @ 0x1C00A831C (rimLoadImage.c)
 *     ivrLoadImage @ 0x1C01EEE44 (ivrLoadImage.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1C00CE324 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
