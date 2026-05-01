/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::_scalar_deleting_destructor_ @ 0x18030A390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::_CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___ @ 0x18030990C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::_CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x180);
  return a1;
}
