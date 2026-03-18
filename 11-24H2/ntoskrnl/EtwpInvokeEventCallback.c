/*
 * XREFs of EtwpInvokeEventCallback @ 0x1404AC9C0
 * Callers:
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x140346CD0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14064F1FC (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeIsTraceCallbackAllowed @ 0x1403282EC (KeIsTraceCallbackAllowed.c)
 *     EtwpGetNextEventOffsetType @ 0x1404ACA40 (EtwpGetNextEventOffsetType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpInvokeEventCallback(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v5; // r10d
  __int64 result; // rax
  char v7; // r9
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  v5 = *((_DWORD *)a2 + 4);
  v10 = 0;
  result = EtwpGetNextEventOffsetType(v3, v5, &v10);
  if ( (_DWORD)result )
  {
    result = KeIsTraceCallbackAllowed(v7);
    if ( (_DWORD)result )
      return guard_dispatch_icall_no_overrides(v3 + v9, v10, a3, v8);
  }
  return result;
}
