/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::_scalar_deleting_destructor_ @ 0x180054FC0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___::_CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___ @ 0x180054FFC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___::_CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
