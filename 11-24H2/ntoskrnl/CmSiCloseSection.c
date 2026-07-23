/*
 * XREFs of CmSiCloseSection @ 0x1404990AC
 * Callers:
 *     BiDeleteRegistryValue @ 0x140814EA4 (BiDeleteRegistryValue.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     BiCreateKey @ 0x1408598CC (BiCreateKey.c)
 *     BiDeleteKey @ 0x1409A62C4 (BiDeleteKey.c)
 *     HvpViewMapCleanup @ 0x140A40EA4 (HvpViewMapCleanup.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
