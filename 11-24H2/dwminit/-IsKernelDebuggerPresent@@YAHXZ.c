/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18000F3D8
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18000F228 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_18001A328;
  if ( !(_BYTE)word_18001A328 )
    return 0;
  v1 = HIBYTE(word_18001A328);
  v2 = 1;
  if ( HIBYTE(word_18001A328) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_18001A328, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_18001A328);
      v0 = word_18001A328;
    }
    else
    {
      v0 = 1;
      word_18001A328 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
