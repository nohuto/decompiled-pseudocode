/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::_scalar_deleting_destructor_ @ 0x1801DA6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::_CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___ @ 0x1801DA174 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::_CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
