/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a977afc9c59ce0858e320274f367b95a___ @ 0x1804482EC
 * Callers:
 *     ?WindowAdded@UwpWindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@UWindowId@3456@W4WindowCreatedType@@@Z @ 0x180201FE0 (-WindowAdded@UwpWindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a977afc9c59ce0858e320274f367b95a___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a977afc9c59ce0858e320274f367b95a____0(
           v3,
           CurrentThreadId,
           a1);
}
