/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x140010A80
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140010904 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  if ( !byte_14001D44A )
    byte_14001D44A = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_14001D448, 2u, 0LL) >= 0;
  return (unsigned __int8)byte_14001D448;
}
