/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18000EB98
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18000E9E8 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_180019328;
  if ( !(_BYTE)word_180019328 )
    return 0;
  v1 = HIBYTE(word_180019328);
  v2 = 1;
  if ( HIBYTE(word_180019328) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_180019328, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_180019328);
      v0 = word_180019328;
    }
    else
    {
      v0 = 1;
      word_180019328 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
