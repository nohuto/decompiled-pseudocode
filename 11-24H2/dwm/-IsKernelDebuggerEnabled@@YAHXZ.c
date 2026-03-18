/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x14000F0A0
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000EF24 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  if ( !byte_14001C36A )
    byte_14001C36A = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_14001C368, 2u, 0LL) >= 0;
  return (unsigned __int8)byte_14001C368;
}
