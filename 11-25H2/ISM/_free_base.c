/*
 * XREFs of _free_base @ 0x18009D24E
 * Callers:
 *     __dyn_tls_dtor @ 0x18009E690 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x18009E73C (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
