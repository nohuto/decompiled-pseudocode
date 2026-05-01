/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___::_scalar_deleting_destructor_ @ 0x180217D30
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___::_CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___ @ 0x180217D6C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___::_CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
