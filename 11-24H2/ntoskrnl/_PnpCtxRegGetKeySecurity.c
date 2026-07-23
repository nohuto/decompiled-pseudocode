/*
 * XREFs of _PnpCtxRegGetKeySecurity @ 0x14081806C
 * Callers:
 *     PnpRegCopyKeySecurity @ 0x1407211BC (PnpRegCopyKeySecurity.c)
 * Callees:
 *     _RegRtlGetKeySecurity @ 0x140821814 (_RegRtlGetKeySecurity.c)
 */

__int64 __fastcall PnpCtxRegGetKeySecurity(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  return RegRtlGetKeySecurity(a2, a3, a4, a5);
}
