/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18002CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x180029ED8 (--1-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>::~CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
