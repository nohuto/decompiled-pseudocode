/*
 * XREFs of ??_G?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAPEAXI@Z @ 0x1803ED050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAA@XZ @ 0x1803ECFD4 (--1-$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAA@XZ.c)
 */

void *__fastcall CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::~CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
