/*
 * XREFs of BiZwSetSecurityObject @ 0x1404A0958
 * Callers:
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiCreateKey @ 0x140A644B0 (BiCreateKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14069E860 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
