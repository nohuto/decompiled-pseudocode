/*
 * XREFs of FsRtlGetFileNameInformation @ 0x140A01AB0
 * Callers:
 *     EtwpCancelTraceImageUnloadApc @ 0x140642410 (EtwpCancelTraceImageUnloadApc.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlGetFileNameInformation(__int64 a1)
{
  if ( FltMgrCallbacks )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 3221225659LL;
}
