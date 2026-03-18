/*
 * XREFs of MoveSizeReadAndClearMouseMoveBoundHitFlags @ 0x1402130C0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 __fastcall MoveSizeReadAndClearMouseMoveBoundHitFlags(__int64 a1)
{
  __int64 MouseProcessor; // rcx
  __int64 result; // rax

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1);
  result = 0LL;
  if ( MouseProcessor )
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(MouseProcessor + 3664), 0);
  return result;
}
