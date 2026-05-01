/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ead4271fd9f01e26050a849b037d7c96___ @ 0x1804485D8
 * Callers:
 *     ?get_WindowTitle@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801FECB0 (-get_WindowTitle@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ead4271fd9f01e26050a849b037d7c96___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ead4271fd9f01e26050a849b037d7c96____0(
           v3,
           CurrentThreadId,
           a1);
}
