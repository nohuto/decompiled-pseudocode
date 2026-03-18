/*
 * XREFs of ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E1A18
 * Callers:
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1400955B4 (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400E119C (-PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4C3C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011144C (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::InvalidateOneAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  int v5; // eax
  signed __int32 v6[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v7[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 7648;
  }
  if ( *((_BYTE *)a2 + 41) == 1 )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 7665;
  }
  else
  {
    DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
    *((_BYTE *)a2 + 41) = 1;
    _InterlockedOr(v6, 0);
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 17);
    if ( (**((_DWORD **)a2 + 47) & 0x40000000) != 0 )
    {
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
        return VIDMM_GLOBAL::CleanupPrimaryAllocation(this, a2);
      memset(v7, 0, 0x58uLL);
      v5 = *((_DWORD *)a2 + 6) & 0x3F;
      LODWORD(v7[0]) = 103;
      HIDWORD(v7[0]) = v5;
      v7[5] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v7);
    }
  }
  return 0;
}
