/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x14047FCA8
 * Callers:
 *     FsRtlUninitializeOplock @ 0x1404E0250 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1388 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E3964 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140580814 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x1405813CC (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070B5DC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14070B734 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     FsRtlpDoBoost @ 0x14047FDA8 (FsRtlpDoBoost.c)
 */

void __fastcall FsRtlpModifyThreadPriorities(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int CurrentThread; // ebp
  __int64 v6; // rcx
  int v7; // r9d
  _QWORD *i; // rdi

  if ( (_BYTE)a3 )
  {
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = a1 + 144;
    }
    else if ( !a2 || (v6 = *(_QWORD *)(a2 + 40), v7 = a2 + 48, !v6) )
    {
      for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
        FsRtlpDoBoost(i[5], CurrentThread, a1 + 32, (_DWORD)i + 48, a1);
      return;
    }
    FsRtlpDoBoost(v6, CurrentThread, a1 + 32, v7, a1);
    return;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
    {
      LOBYTE(a3) = 1;
      PsBoostThreadIoEx(*(_QWORD *)(a2 + 40), 1, a3, a1);
      *(_DWORD *)(a2 + 48) &= ~0x20u;
    }
  }
  else if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 )
  {
    LOBYTE(a3) = 1;
    PsBoostThreadIoEx(*(_QWORD *)(a1 + 24), 1, a3, a1);
    *(_DWORD *)(a1 + 144) &= ~0x20u;
  }
}
