/*
 * XREFs of memmove_0 @ 0x14001EF93
 * Callers:
 *     BasepGetFileNameInformation @ 0x14001AE8C (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14001AFB0 (BasepGetObjectNTName.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001B0E4 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     GetFinalPathNameByHandleW @ 0x14001B934 (GetFinalPathNameByHandleW.c)
 *     GetLongPathNameW @ 0x14001CE70 (GetLongPathNameW.c)
 *     InternalFindFirstFileExW @ 0x14001DDF8 (InternalFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
