/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914___ @ 0x180447EE4
 * Callers:
 *     ?SetCustomResourceSet@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18044B930 (-SetCustomResourceSet@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fou.c)
 * Callees:
 *     <none>
 */

__int64 Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914___()
{
  DWORD CurrentThreadId; // eax
  __int64 v1; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914____0(
           v1,
           CurrentThreadId);
}
