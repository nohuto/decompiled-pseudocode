/*
 * XREFs of HasCapture @ 0x140062F70
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 */

char __fastcall HasCapture(__int64 a1)
{
  __int64 MouseProcessor; // rax
  char v2; // cl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1);
  if ( !MouseProcessor )
    return 0;
  v2 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3904), 1, 1) )
    return 0;
  return v2;
}
