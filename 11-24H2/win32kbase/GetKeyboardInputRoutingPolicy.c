/*
 * XREFs of GetKeyboardInputRoutingPolicy @ 0x140108280
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x140108298 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 GetKeyboardInputRoutingPolicy()
{
  return *(unsigned int *)(anonymous_namespace_::GetKeyboardProcessor() + 16);
}
