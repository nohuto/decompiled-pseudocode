/*
 * XREFs of SeEtwEnableCallback @ 0x1406060B8
 * Callers:
 *     EtwpKernelProvEnableCallback @ 0x1407A8590 (EtwpKernelProvEnableCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall SeEtwEnableCallback(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  SepTokenSidManagementLoggingEnabled = (a4 & 0x40) != 0;
}
