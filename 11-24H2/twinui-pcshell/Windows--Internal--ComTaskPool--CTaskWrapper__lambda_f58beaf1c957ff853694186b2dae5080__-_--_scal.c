/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__&_::_scalar_deleting_destructor_ @ 0x18030FA40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__&_::_CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__&_ @ 0x18030F910 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__-_--_CTas.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080____::_CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080____((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
