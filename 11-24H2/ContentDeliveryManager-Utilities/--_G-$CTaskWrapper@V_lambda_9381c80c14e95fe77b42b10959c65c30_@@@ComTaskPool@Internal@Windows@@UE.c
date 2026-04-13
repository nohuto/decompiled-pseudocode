/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180067850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1800671B4 (--1-$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_9381c80c14e95fe77b42b10959c65c30_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_9381c80c14e95fe77b42b10959c65c30_>::~CTaskWrapper<_lambda_9381c80c14e95fe77b42b10959c65c30_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
