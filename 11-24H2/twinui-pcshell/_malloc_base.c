/*
 * XREFs of _malloc_base @ 0x1802D24C2
 * Callers:
 *     __tlregdtor @ 0x1802DA63C (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
