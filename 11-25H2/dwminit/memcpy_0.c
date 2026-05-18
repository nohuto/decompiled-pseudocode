/*
 * XREFs of memcpy_0 @ 0x180010DE0
 * Callers:
 *     memcpy_s @ 0x18000A1E4 (memcpy_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
