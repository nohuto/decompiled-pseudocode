/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___::_scalar_deleting_destructor_ @ 0x1803981E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___::_CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___ @ 0x180397C30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___::_CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
