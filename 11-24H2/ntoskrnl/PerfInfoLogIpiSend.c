/*
 * XREFs of PerfInfoLogIpiSend @ 0x1404A8470
 * Callers:
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall PerfInfoLogIpiSend(__int64 a1, int a2, __int64 a3, int a4, unsigned __int16 *a5)
{
  int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+38h] [rbp-9h] BYREF
  int v14; // [rsp+40h] [rbp-1h]
  int v15; // [rsp+44h] [rbp+3h]
  int v16; // [rsp+48h] [rbp+7h]
  __int64 v17; // [rsp+50h] [rbp+Fh] BYREF
  int v18; // [rsp+58h] [rbp+17h]
  int v19; // [rsp+5Ch] [rbp+1Bh]
  __int64 *v20; // [rsp+60h] [rbp+1Fh]
  int v21; // [rsp+68h] [rbp+27h]
  int v22; // [rsp+6Ch] [rbp+2Bh]
  unsigned __int16 *v23; // [rsp+70h] [rbp+2Fh]
  int v24; // [rsp+78h] [rbp+37h]
  int v25; // [rsp+7Ch] [rbp+3Bh]

  v22 = 0;
  v14 = a2;
  v13 = a3;
  v6 = *a5;
  v25 = 0;
  v23 = a5 + 4;
  v15 = a4;
  v16 = v6;
  v24 = 8 * v6;
  LODWORD(v7) = EtwpHostSiloState;
  v20 = &v13;
  v21 = 20;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4520);
  while ( _BitScanForward((unsigned int *)&v11, v8) )
  {
    v8 &= v8 - 1;
    v7 = EtwpHostSiloState + 32LL * (unsigned int)v11 + 4556;
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 8) & 0x400000) != 0 )
      {
        v9 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v11 + 4505);
        v19 = 0;
        v18 = 8;
        v17 = a1 + 8 * (v9 - 1);
        LODWORD(v7) = EtwpLogKernelEvent(
                        (__int64)&v17,
                        EtwpHostSiloState,
                        *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v11 + 4504),
                        3u,
                        3952,
                        0x501A02u);
      }
    }
  }
  return v7;
}
