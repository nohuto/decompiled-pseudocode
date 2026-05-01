/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___ @ 0x1803A1D10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cbf01a40321e9ff125f683f9a48deaf4___::_scalar_deleting_destructor_ @ 0x1803A1FF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cbf01a40321e9ff125f683f9a48deaf4___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___::_scalar_deleting_destructor_ @ 0x18046F660 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_scalar_deleting_destructor_ @ 0x18046F860 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___--_scala.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___(
        __int64 a1)
{
  std::wstring::_Tidy_deallocate((void **)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
