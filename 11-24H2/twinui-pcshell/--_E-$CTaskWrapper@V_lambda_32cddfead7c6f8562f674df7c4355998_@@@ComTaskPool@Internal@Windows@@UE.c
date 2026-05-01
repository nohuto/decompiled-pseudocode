/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_32cddfead7c6f8562f674df7c4355998_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18054DDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_32cddfead7c6f8562f674df7c4355998_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x18054D9FC (--1-$CTaskWrapper@V_lambda_32cddfead7c6f8562f674df7c4355998_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_32cddfead7c6f8562f674df7c4355998_>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_32cddfead7c6f8562f674df7c4355998_>::~CTaskWrapper<_lambda_32cddfead7c6f8562f674df7c4355998_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
