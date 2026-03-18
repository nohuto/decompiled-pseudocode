/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1802328E4
 * Callers:
 *     ??0CRenderThreadWaitTick@@QEAA@PEC_K@Z @ 0x180266C50 (--0CRenderThreadWaitTick@@QEAA@PEC_K@Z.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x1802B8294 (DebugInspectSysMemSurface_NoOpt.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1802BE264 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1804057E0;
  if ( !(_BYTE)word_1804057E0 )
    return 0;
  v1 = HIBYTE(word_1804057E0);
  v2 = 1;
  if ( HIBYTE(word_1804057E0) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1804057E0, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1804057E0);
      v0 = word_1804057E0;
    }
    else
    {
      v0 = 1;
      word_1804057E0 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
