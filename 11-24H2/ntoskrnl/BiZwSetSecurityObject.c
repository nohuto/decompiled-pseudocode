/*
 * XREFs of BiZwSetSecurityObject @ 0x14049F890
 * Callers:
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiCreateKey @ 0x14085DB5C (BiCreateKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1406A9B30 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
