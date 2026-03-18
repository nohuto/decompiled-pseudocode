/*
 * XREFs of ?OnPointerCursorOperation@@YAXXZ @ 0x140092370
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14004A50C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     _anonymous_namespace_::RenderCursor @ 0x140091F44 (_anonymous_namespace_--RenderCursor.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x140092420 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140092D78 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 */

void OnPointerCursorOperation(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v7, "PointerCursorOperation", 0LL);
  anonymous_namespace_::HandlePointerCursorSideOp();
  v3 = (unsigned int *)_InterlockedExchange64(*(volatile __int64 **)(W32GetUserSessionState(v1, v0) + 36368), 0LL);
  if ( v3 )
  {
    anonymous_namespace_::RenderCursor(v3, v2);
    v6 = (unsigned __int64)v3 - *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36368) - 8;
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)(*(_QWORD *)(W32GetUserSessionState(
                                                v6,
                                                (v6 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64)
                                            + 36368)
                                + 8 * (v6 / 0xC)
                                + 48),
      (signed __int64)v3,
      0LL);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
}
