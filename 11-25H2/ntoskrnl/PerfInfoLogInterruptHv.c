/*
 * XREFs of PerfInfoLogInterruptHv @ 0x14044A590
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1406A5F60 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406A6010 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

int __fastcall PerfInfoLogInterruptHv(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+44h] [rbp-2Ch]
  __int64 v13; // [rsp+48h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+54h] [rbp-1Ch]
  __int64 *v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]

  v12 = 0;
  v18 = 0;
  v16 = &v10;
  LODWORD(v4) = EtwpHostSiloState;
  v10 = a1;
  v11 = a2;
  v17 = 12;
  v5 = *(_DWORD *)(EtwpHostSiloState + 4248);
  while ( _BitScanForward((unsigned int *)&v7, v5) )
  {
    v5 &= v5 - 1;
    v4 = EtwpHostSiloState + 32LL * (unsigned int)v7 + 4284;
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 4) & 0x4000) != 0 )
      {
        v8 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v7 + 4233);
        v15 = 0;
        v14 = 8;
        v13 = a3 + 8 * (v8 - 1);
        LODWORD(v4) = EtwpLogKernelEvent(
                        (struct _KTHREAD *)&v13,
                        EtwpHostSiloState,
                        *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v7 + 4232),
                        2u,
                        0xF43u,
                        0x500A02u);
      }
    }
  }
  return v4;
}
