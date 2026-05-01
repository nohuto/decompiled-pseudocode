/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___::_CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___ @ 0x1802068C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4efd027938208ec783bf057b80dc7741___::_scalar_deleting_destructor_ @ 0x1802090D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4efd027938208ec783bf057b80dc7741___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___::_scalar_deleting_destructor_ @ 0x180209210 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___--_scala.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___::_CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___(
        __int64 a1)
{
  __int64 result; // rax

  result = std::wstring::_Tidy_deallocate(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
