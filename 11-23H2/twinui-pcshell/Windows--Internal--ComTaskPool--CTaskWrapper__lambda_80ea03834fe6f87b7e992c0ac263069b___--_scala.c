/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___::_scalar_deleting_destructor_ @ 0x1801D0CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___::_CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___ @ 0x1801D0750 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___::_CTaskWrapper__lambda_80ea03834fe6f87b7e992c0ac263069b___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
