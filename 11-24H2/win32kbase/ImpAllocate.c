/*
 * XREFs of ImpAllocate @ 0x140131414
 * Callers:
 *     ImpRpcAsyncInit @ 0x1401344E0 (ImpRpcAsyncInit.c)
 *     MIDL_user_allocate @ 0x14023D600 (MIDL_user_allocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImpAllocate(__int64 a1, char a2)
{
  return ExAllocatePool2(a2 != 0 ? 256LL : 64LL, a1, 1836084809LL);
}
