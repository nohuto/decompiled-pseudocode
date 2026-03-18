/*
 * XREFs of ?GetTotalGlobalSharedFence@VIDMM_PROCESS_FENCE_STORAGE@@SAI_N@Z @ 0x140045788
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1400B3E4C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::GetTotalGlobalSharedFence(char a1)
{
  __int64 result; // rax

  result = VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedMonitoredFence;
  if ( a1 )
    return VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedNativeFence;
  return result;
}
