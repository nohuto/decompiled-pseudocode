/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_732b9d0d4e46444a8cf28034daf59b80___ @ 0x180447B1C
 * Callers:
 *     ?UnboostPriority@UwpWindowWrapperBase@@UEAAJXZ @ 0x1801E7D80 (-UnboostPriority@UwpWindowWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_732b9d0d4e46444a8cf28034daf59b80___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_732b9d0d4e46444a8cf28034daf59b80____0(
           v3,
           CurrentThreadId,
           a1);
}
