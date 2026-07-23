/*
 * XREFs of EtwpTraceRegistryTransaction @ 0x140AA4AF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogTxREvent @ 0x1407A9FCC (EtwpLogTxREvent.c)
 */

int __fastcall EtwpTraceRegistryTransaction(unsigned __int8 a1, __int64 a2, __int128 *a3, int a4, int a5, __int64 a6)
{
  _DWORD *v6; // rax
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // r10

  LODWORD(v6) = EtwpHostSiloState;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    v6 = (_DWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v13 + 4556);
    if ( v6 && (*v6 & 0x20000) != 0 )
      LODWORD(v6) = EtwpLogTxREvent(
                      *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4504),
                      a1,
                      a3,
                      a4,
                      a5,
                      (__int64 *)(a2 + 8 * (*(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4505) - 1LL)),
                      a6);
  }
  return (int)v6;
}
