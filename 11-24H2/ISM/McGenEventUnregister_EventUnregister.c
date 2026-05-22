/*
 * XREFs of McGenEventUnregister_EventUnregister @ 0x180084264
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__ @ 0x180082930 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_EtwLogger__.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister_EventUnregister()
{
  ULONG result; // eax

  if ( !MICROSOFT_WINDOWSPHONE_INPUT_Context )
    return 0;
  result = EventUnregister(MICROSOFT_WINDOWSPHONE_INPUT_Context);
  MICROSOFT_WINDOWSPHONE_INPUT_Context = 0LL;
  return result;
}
