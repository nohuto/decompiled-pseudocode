/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::Run @ 0x180203040
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::Run(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = std::_Atomic_storage<bool,1>::load(*(_QWORD *)(a1 + 16) + 32LL);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 24LL) + 56LL))(
             *(_QWORD *)(*(_QWORD *)(v2 + 16) + 24LL),
             *(_QWORD *)(v2 + 40),
             2LL);
  return result;
}
