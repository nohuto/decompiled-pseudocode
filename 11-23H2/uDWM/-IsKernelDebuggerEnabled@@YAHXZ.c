/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18010DD5C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18010DE7C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1801484CA )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_18014BC84, 2u, 0LL);
    v1 = byte_1801484CA;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1801484CA = v1;
  }
  return (unsigned __int8)byte_18014BC84;
}
