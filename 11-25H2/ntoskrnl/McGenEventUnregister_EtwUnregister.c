/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1405FB2D8
 * Callers:
 *     CarCleanup @ 0x14060A53C (CarCleanup.c)
 * Callees:
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
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
