/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___::_scalar_deleting_destructor_ @ 0x180361EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___::_CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___ @ 0x180361DC4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___::_CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
