/*
 * XREFs of _PnpCtxRegSetKeySecurity @ 0x14081797C
 * Callers:
 *     PnpRegCopyKeySecurity @ 0x14072362C (PnpRegCopyKeySecurity.c)
 * Callees:
 *     _RegRtlSetKeySecurity @ 0x1408213BC (_RegRtlSetKeySecurity.c)
 */

__int64 __fastcall PnpCtxRegSetKeySecurity(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  return RegRtlSetKeySecurity(a2, a3, a4);
}
