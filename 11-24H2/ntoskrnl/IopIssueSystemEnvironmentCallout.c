/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140717010
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
