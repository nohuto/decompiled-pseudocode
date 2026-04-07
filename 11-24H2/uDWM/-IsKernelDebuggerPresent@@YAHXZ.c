/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800F4E2C
 * Callers:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800F4BA0 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800F4F44 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_180125920;
  if ( !(_BYTE)word_180125920 )
    return 0;
  v1 = HIBYTE(word_180125920);
  v2 = 1;
  if ( HIBYTE(word_180125920) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_180125920, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_180125920);
      v0 = word_180125920;
    }
    else
    {
      v0 = 1;
      word_180125920 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
