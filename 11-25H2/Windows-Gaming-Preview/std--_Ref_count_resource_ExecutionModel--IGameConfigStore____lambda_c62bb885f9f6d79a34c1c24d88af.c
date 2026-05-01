/*
 * XREFs of std::_Ref_count_resource_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___::_scalar_deleting_destructor_ @ 0x180014100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_resource_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
