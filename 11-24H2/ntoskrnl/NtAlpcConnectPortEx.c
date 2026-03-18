/*
 * XREFs of NtAlpcConnectPortEx @ 0x140862AD0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x1408645A0 (AlpcpConnectPort.c)
 */

__int64 __fastcall NtAlpcConnectPortEx(
        int a1,
        int a2,
        int a3,
        void *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  return AlpcpConnectPort(a1, 0, a2, a3, a4, a5, a6, 0LL, a7, a8, a9, a10, a11);
}
