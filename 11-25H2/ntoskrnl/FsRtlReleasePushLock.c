/*
 * XREFs of FsRtlReleasePushLock @ 0x140205F3C
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x1402058E0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerStreamContext @ 0x1402A20A0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1402A21D0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x14099F8D0 (FsRtlTeardownPerStreamContexts.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

void __fastcall FsRtlReleasePushLock(signed __int64 *BugCheckParameter2)
{
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  signed __int64 v4; // rcx

  _m_prefetchw(BugCheckParameter2);
  v2 = *BugCheckParameter2;
  v3 = *BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *BugCheckParameter2 - 16;
  if ( v3 <= 0x10 )
    v4 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(BugCheckParameter2, v4, v2) )
    ExfReleasePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
