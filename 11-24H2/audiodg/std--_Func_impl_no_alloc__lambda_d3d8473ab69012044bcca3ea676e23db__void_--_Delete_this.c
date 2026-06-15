/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Delete_this @ 0x140008930
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d3d8473ab69012044bcca3ea676e23db_::__lambda_d3d8473ab69012044bcca3ea676e23db_ @ 0x140008970 (_lambda_d3d8473ab69012044bcca3ea676e23db_--__lambda_d3d8473ab69012044bcca3ea676e23db_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Delete_this(
        char *Block,
        char a2)
{
  lambda_d3d8473ab69012044bcca3ea676e23db_::__lambda_d3d8473ab69012044bcca3ea676e23db_(Block + 8);
  if ( a2 )
    operator delete(Block);
}
