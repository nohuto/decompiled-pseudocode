/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x180226E04
 * Callers:
 *     ??0CRenderThreadWaitTick@@QEAA@PEC_K@Z @ 0x18025CCE0 (--0CRenderThreadWaitTick@@QEAA@PEC_K@Z.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x1802AE6A4 (DebugInspectSysMemSurface_NoOpt.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1802B4C14 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1803F9760;
  if ( !(_BYTE)word_1803F9760 )
    return 0;
  v1 = HIBYTE(word_1803F9760);
  v2 = 1;
  if ( HIBYTE(word_1803F9760) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1803F9760, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1803F9760);
      v0 = word_1803F9760;
    }
    else
    {
      v0 = 1;
      word_1803F9760 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
