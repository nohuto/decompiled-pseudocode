/*
 * XREFs of EtwpInvokeEventCallback @ 0x1404AB500
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x14030FA90 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14064325C (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeIsTraceCallbackAllowed @ 0x14030CD3C (KeIsTraceCallbackAllowed.c)
 *     EtwpGetNextEventOffsetType @ 0x1404AB580 (EtwpGetNextEventOffsetType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpInvokeEventCallback(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r10d
  __int64 result; // rax
  char v5; // r9
  __int64 v6; // r10
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *((_DWORD *)a2 + 4);
  v7 = 0;
  result = EtwpGetNextEventOffsetType(v2, v3, &v7);
  if ( (_DWORD)result )
  {
    result = KeIsTraceCallbackAllowed(v5);
    if ( (_DWORD)result )
      return guard_dispatch_icall_no_overrides(v2 + v6, v7);
  }
  return result;
}
