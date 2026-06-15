/*
 * XREFs of std::_Ref_count_resource_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::_scalar_deleting_destructor_ @ 0x140048690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_resource_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
