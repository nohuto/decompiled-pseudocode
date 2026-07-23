/*
 * XREFs of MIDL_user_allocate @ 0x140A40E80
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return (void *)ExAllocatePool2(0x100uLL, size, 0x6370726Bu);
}
