/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x140604C20
 * Callers:
 *     CarCleanup @ 0x140614ABC (CarCleanup.c)
 * Callees:
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
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
