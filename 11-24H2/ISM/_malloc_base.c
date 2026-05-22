/*
 * XREFs of _malloc_base @ 0x18009D44E
 * Callers:
 *     __tlregdtor @ 0x18009EA2C (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl malloc_base(size_t Size)
{
  return _malloc_base(Size);
}
