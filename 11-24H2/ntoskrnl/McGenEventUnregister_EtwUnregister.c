/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x140607618
 * Callers:
 *     CarCleanup @ 0x1406164FC (CarCleanup.c)
 * Callees:
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !EtwProvider_Context )
    return 0;
  result = EtwUnregister(EtwProvider_Context);
  EtwProvider_Context = 0LL;
  return result;
}
