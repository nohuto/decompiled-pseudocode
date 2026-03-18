/*
 * XREFs of _strnicmp @ 0x1401A071C
 * Callers:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x14010204C (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     UserGetLoadedImageInformation @ 0x1401B35F0 (UserGetLoadedImageInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1401A06B8 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
