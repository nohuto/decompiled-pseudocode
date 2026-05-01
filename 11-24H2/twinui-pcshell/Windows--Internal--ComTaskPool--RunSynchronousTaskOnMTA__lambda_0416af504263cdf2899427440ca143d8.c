/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0416af504263cdf2899427440ca143d8___ @ 0x18041699C
 * Callers:
 *     ?TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1804243A0 (-TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0416af504263cdf2899427440ca143d8___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0416af504263cdf2899427440ca143d8____0(
           v3,
           CurrentThreadId,
           a1);
}
