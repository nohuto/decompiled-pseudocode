/*
 * XREFs of NtConnectPort @ 0x14088AF00
 * Callers:
 *     <none>
 * Callees:
 *     NtSecureConnectPort @ 0x14088AF50 (NtSecureConnectPort.c)
 */

__int64 __fastcall NtConnectPort(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return NtSecureConnectPort(a1, a2, a3, a4, 0LL, a5, a6, a7, a8);
}
