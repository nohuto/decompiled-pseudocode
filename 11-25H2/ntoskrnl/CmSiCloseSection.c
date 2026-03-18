/*
 * XREFs of CmSiCloseSection @ 0x14049F444
 * Callers:
 *     BiDeleteRegistryValue @ 0x140804BEC (BiDeleteRegistryValue.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140969DB4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 *     HvpViewMapCleanup @ 0x140A46144 (HvpViewMapCleanup.c)
 *     BiCreateKey @ 0x140A644B0 (BiCreateKey.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
