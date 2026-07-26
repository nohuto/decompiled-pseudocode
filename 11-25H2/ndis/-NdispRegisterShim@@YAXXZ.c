/*
 * XREFs of ?NdispRegisterShim@@YAXXZ @ 0x140149E00
 * Callers:
 *     NdisDllInitialize @ 0x14009F5C0 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim(void)
{
  KseRegisterShim(&NdisGetVersionShim, 0LL, 0LL);
  KseRegisterShim(&NdisReadConfigShim, 0LL, 0LL);
}
