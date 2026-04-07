/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800F4DE0
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800F4F44 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  if ( !byte_180129BB0 )
    byte_180129BB0 = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_180129BB4, 2u, 0LL) >= 0;
  return (unsigned __int8)byte_180129BB4;
}
