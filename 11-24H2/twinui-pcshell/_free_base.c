/*
 * XREFs of _free_base @ 0x1802D2492
 * Callers:
 *     __dyn_tls_dtor @ 0x1802DA590 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x1802DA63C (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
