/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1803ED090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1803ED004 (--1-$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_28273f6668f79f5db2d6a9fae521721a_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_28273f6668f79f5db2d6a9fae521721a_>::~CTaskWrapper<_lambda_28273f6668f79f5db2d6a9fae521721a_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
