/*
 * XREFs of ?NdispRegisterShim@@YAXXZ @ 0x14013EF40
 * Callers:
 *     NdisDllInitialize @ 0x140095A10 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim(void)
{
  KseRegisterShim(&NdisGetVersionShim, 0LL, 0LL);
  KseRegisterShim(&NdisReadConfigShim, 0LL, 0LL);
}
