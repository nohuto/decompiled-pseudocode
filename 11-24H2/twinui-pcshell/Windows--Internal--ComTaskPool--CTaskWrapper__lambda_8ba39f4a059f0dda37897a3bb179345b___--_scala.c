/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8ba39f4a059f0dda37897a3bb179345b___::_scalar_deleting_destructor_ @ 0x18034B140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8ba39f4a059f0dda37897a3bb179345b___::_CTaskWrapper__lambda_8ba39f4a059f0dda37897a3bb179345b___ @ 0x180347778 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8ba39f4a059f0dda37897a3bb179345b___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8ba39f4a059f0dda37897a3bb179345b___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8ba39f4a059f0dda37897a3bb179345b___::_CTaskWrapper__lambda_8ba39f4a059f0dda37897a3bb179345b___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
