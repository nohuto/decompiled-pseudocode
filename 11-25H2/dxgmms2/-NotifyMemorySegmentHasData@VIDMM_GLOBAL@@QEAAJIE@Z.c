/*
 * XREFs of ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140043E40
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140042DB8 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140043BB0 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400A75A0 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E06B8 (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDM.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_GLOBAL::NotifyMemorySegmentHasData(VIDMM_GLOBAL *this)
{
  return (*((__int64 (__fastcall **)(_QWORD))this + 5009))(*((_QWORD *)this + 5010));
}
