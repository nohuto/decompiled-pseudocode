/*
 * XREFs of NtAlpcConnectPortEx @ 0x140A2E0B0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x140916470 (AlpcpConnectPort.c)
 */

__int64 __fastcall NtAlpcConnectPortEx(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        int a5,
        void *a6,
        char *a7,
        unsigned __int64 *a8,
        __int64 a9,
        int *a10,
        LARGE_INTEGER *a11)
{
  return AlpcpConnectPort(a1, 0LL, a2, a3, a4, a5, a6, 0LL, a7, a8, a9, a10, a11);
}
