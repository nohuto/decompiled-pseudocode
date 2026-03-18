/*
 * XREFs of VmSetVpHostProcess @ 0x14079EEE0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x14077669C (PsSetVmProcessorHostProcess.c)
 */

NTSTATUS __fastcall VmSetVpHostProcess(_QWORD *a1)
{
  return PsSetVmProcessorHostProcess(a1);
}
