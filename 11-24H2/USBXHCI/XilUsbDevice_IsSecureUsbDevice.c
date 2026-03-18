/*
 * XREFs of XilUsbDevice_IsSecureUsbDevice @ 0x14003CBFC
 * Callers:
 *     TR_Create @ 0x140082E54 (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall XilUsbDevice_IsSecureUsbDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 664);
}
