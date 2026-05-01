/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___::_scalar_deleting_destructor_ @ 0x1804EC270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___::_CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___ @ 0x1804EBD60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___::_CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
