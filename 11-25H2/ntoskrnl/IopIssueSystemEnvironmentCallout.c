/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x14070D380
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
