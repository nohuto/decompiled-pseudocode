/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4825f127a8d2295f8f183f2ddcdfea56___ @ 0x180416AA4
 * Callers:
 *     ?Shutdown@WindowEventDispatcher@@UEAAJXZ @ 0x180423A40 (-Shutdown@WindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4825f127a8d2295f8f183f2ddcdfea56___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4825f127a8d2295f8f183f2ddcdfea56____0(
           v3,
           CurrentThreadId,
           a1);
}
