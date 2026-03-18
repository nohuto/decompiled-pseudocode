/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140719480
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
