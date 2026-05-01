/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___::_scalar_deleting_destructor_ @ 0x1802E09E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___::_CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___ @ 0x1802E0618 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___::_CTaskWrapper__lambda_f9dd93da017f51df52d336b0499d655e___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
