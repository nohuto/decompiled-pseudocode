/*
 * XREFs of ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x140103884
 * Callers:
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E06B8 (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDM.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(unsigned int **this)
{
  __int64 v1; // rdx
  unsigned int *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = *((unsigned int *)this + 140);
  if ( (_DWORD)v1 )
  {
LABEL_6:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 59LL, this, v1, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x14010392BLL);
  }
  v2 = this[69];
  if ( v2 )
  {
    v3 = v2[15];
    v4 = v2[14];
    if ( (_DWORD)v4 != (_DWORD)v3 + v2[17] )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 60LL, v2, v4, v3);
      WdLogGlobalForLineNumber = 195;
      goto LABEL_6;
    }
  }
}
