/*
 * XREFs of XilUsbDevice_IsSecureUsbDevice @ 0x14003CD10
 * Callers:
 *     TR_Create @ 0x14008313C (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall XilUsbDevice_IsSecureUsbDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 656);
}
