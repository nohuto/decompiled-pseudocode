/*
 * XREFs of StorKsrUninitialize @ 0x140192B68
 * Callers:
 *     DllUnload @ 0x1400A5120 (DllUnload.c)
 * Callees:
 *     <none>
 */

void StorKsrUninitialize()
{
  if ( StorKsrCallbackHandle )
  {
    ExUnregisterCallback(StorKsrCallbackHandle);
    StorKsrCallbackHandle = 0LL;
  }
}
