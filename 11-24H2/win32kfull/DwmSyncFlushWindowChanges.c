/*
 * XREFs of DwmSyncFlushWindowChanges @ 0x14010AAB0
 * Callers:
 *     xxxSynchronizeDWMWindowChanges @ 0x14021A598 (xxxSynchronizeDWMWindowChanges.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x14010B4C0 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x14010B8E0 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 */

__int64 __fastcall DwmSyncFlushWindowChanges(PVOID Object, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rbp

  v4 = -1073741823;
  v5 = *(_QWORD *)(W32GetSessionState(Object, a2, a3) + 96);
  v6 = *(_QWORD *)(v5 + 4648);
  if ( Object )
  {
    v4 = DwmSyncLPCAllowed();
    if ( v4 < 0 || *(_QWORD *)(v5 + 4656) == v6 )
    {
      ObfDereferenceObject(Object);
    }
    else
    {
      v4 = DwmSyncFlushForceRenderAndWaitForBatch(Object);
      *(_QWORD *)(v5 + 4656) = v6;
    }
  }
  return (unsigned int)v4;
}
