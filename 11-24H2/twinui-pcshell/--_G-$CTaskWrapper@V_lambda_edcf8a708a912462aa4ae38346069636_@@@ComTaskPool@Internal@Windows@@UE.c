/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180215000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1802C4B00 (--1-$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@UEA.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_edcf8a708a912462aa4ae38346069636_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_edcf8a708a912462aa4ae38346069636_>::~CTaskWrapper<_lambda_edcf8a708a912462aa4ae38346069636_>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
