/*
 * XREFs of MIDL_user_allocate @ 0x14023D600
 * Callers:
 *     <none>
 * Callees:
 *     ImpAllocate @ 0x140131414 (ImpAllocate.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return (void *)ImpAllocate(size, 1);
}
