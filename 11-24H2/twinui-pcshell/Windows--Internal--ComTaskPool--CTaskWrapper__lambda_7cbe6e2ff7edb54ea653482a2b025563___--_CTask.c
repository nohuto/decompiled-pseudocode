/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::_CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___ @ 0x1802C5BFC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::_scalar_deleting_destructor_ @ 0x1802C5BC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___--_scala.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::_CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
