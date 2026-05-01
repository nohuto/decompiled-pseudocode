/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_::_scalar_deleting_destructor_ @ 0x180541E50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_::_CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x180541BC4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-_--_CTas.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____::_CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
