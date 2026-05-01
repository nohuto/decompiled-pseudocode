/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___::_scalar_deleting_destructor_ @ 0x1802586F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___::_CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___ @ 0x180258494 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___::_CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
