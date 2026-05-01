/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___::_scalar_deleting_destructor_ @ 0x180410070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___::_CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___ @ 0x18040FB44 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___::_CTaskWrapper__lambda_fc6cce9727cf9f8deae1663544b26742___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1A8);
  return a1;
}
