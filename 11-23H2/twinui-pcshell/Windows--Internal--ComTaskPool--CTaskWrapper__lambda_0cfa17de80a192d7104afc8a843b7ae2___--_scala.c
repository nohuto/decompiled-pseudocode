/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___::_scalar_deleting_destructor_ @ 0x180208F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___::_CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___ @ 0x1802067F8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___::_CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
