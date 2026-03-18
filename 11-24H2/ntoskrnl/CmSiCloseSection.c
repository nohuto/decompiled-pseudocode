/*
 * XREFs of CmSiCloseSection @ 0x14049E2AC
 * Callers:
 *     BiDeleteRegistryValue @ 0x140814764 (BiDeleteRegistryValue.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiCreateKey @ 0x14085DB5C (BiCreateKey.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 *     HvpViewMapCleanup @ 0x140A4A184 (HvpViewMapCleanup.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
