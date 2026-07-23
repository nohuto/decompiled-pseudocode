/*
 * XREFs of PerfInfoLogInterrupt @ 0x1403AEB10
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x1403AE8E8 (KiInvokeInterruptServiceRoutine.c)
 *     KiScanInterruptObjectList @ 0x1406ADB20 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406ADC50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ADCF0 (KiInterruptSubDispatchNoLock.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall PerfInfoLogInterrupt(__int64 a1, int a2, __int64 a3)
{
  int v4; // r9d
  __int16 v5; // di
  __int64 *v6; // rax
  unsigned int v7; // ebx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+38h] [rbp-40h]
  int v14; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v15[3]; // [rsp+48h] [rbp-30h] BYREF
  int v16; // [rsp+60h] [rbp-18h]
  int i; // [rsp+64h] [rbp-14h]

  v14 = 0;
  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v12 = *(_QWORD *)(a1 + 32);
      v5 = 3890;
      v4 = 16;
      v14 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      v5 = 3907;
      v12 = *(_QWORD *)(a1 + 24);
      v4 = 12;
    }
  }
  else
  {
    v4 = 12;
    v12 = *(_QWORD *)(a1 + 24);
    v5 = 3935;
  }
  v6 = &v12;
  v13 = a2;
  v15[2] = &v12;
  v16 = v4;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v8 = !_BitScanForward((unsigned int *)&v9, v7);
  for ( i = 0; !v8; v8 = !_BitScanForward((unsigned int *)&v9, v7) )
  {
    v7 &= v7 - 1;
    v6 = (__int64 *)(EtwpHostSiloState + 32LL * (unsigned int)v9 + 4556);
    if ( v6 && (*((_DWORD *)v6 + 1) & 0x4000) != 0 )
    {
      v10 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v9 + 4505) - 1LL;
      v15[1] = 8LL;
      v15[0] = a3 + 8 * v10;
      LODWORD(v6) = EtwpLogKernelEvent(
                      (__int64)v15,
                      EtwpHostSiloState,
                      *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v9 + 4504),
                      2u,
                      v5,
                      0x500A02u);
    }
  }
  return (int)v6;
}
