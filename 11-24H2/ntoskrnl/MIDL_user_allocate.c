/*
 * XREFs of MIDL_user_allocate @ 0x140A4A160
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return (void *)ExAllocatePool2(0x100uLL);
}
