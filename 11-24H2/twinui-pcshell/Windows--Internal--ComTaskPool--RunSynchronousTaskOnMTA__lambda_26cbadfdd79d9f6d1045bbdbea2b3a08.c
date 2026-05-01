/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_26cbadfdd79d9f6d1045bbdbea2b3a08___ @ 0x18044743C
 * Callers:
 *     ?get_WindowProperties@UwpWindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18044CAF0 (-get_WindowProperties@UwpWindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Wind.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_26cbadfdd79d9f6d1045bbdbea2b3a08___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_26cbadfdd79d9f6d1045bbdbea2b3a08____0(
           v3,
           CurrentThreadId,
           a1);
}
