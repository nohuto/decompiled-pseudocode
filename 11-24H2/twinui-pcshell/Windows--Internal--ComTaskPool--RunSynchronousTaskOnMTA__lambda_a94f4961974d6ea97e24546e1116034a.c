/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a94f4961974d6ea97e24546e1116034a___ @ 0x1804481E4
 * Callers:
 *     ?put_IsOccluded@UwpWindowWrapperBase@@UEAAJE@Z @ 0x1802019C0 (-put_IsOccluded@UwpWindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a94f4961974d6ea97e24546e1116034a___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a94f4961974d6ea97e24546e1116034a____0(
           v3,
           CurrentThreadId,
           a1);
}
