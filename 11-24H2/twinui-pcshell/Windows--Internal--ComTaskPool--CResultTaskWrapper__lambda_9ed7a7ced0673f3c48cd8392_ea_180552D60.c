/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::_scalar_deleting_destructor_ @ 0x180552D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::_CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___ @ 0x1805524E0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392_ea_1805524E0.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::_CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
