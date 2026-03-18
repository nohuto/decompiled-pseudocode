/*
 * XREFs of PopPluginQueryComponentPerfCapabilities @ 0x1405CDA98
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x140742264 (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginQueryComponentPerfCapabilities(__int64 a1, __int64 a2, _DWORD *a3)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 64) )
  {
    result = guard_dispatch_icall_no_overrides(28LL);
    if ( result )
      *a3 = 0;
  }
  return result;
}
