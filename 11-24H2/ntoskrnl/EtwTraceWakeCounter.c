/*
 * XREFs of EtwTraceWakeCounter @ 0x140897E48
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     PspChargeJobWakeCounter @ 0x1409AECC0 (PspChargeJobWakeCounter.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceWakeCounter(__int64 a1, int a2, __int16 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // r10d
  __int16 v9; // r9
  unsigned int v10; // r8d
  __int16 v11; // r9
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+44h] [rbp-34h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  _QWORD *v17; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+5Ch] [rbp-1Ch]

  v7 = a4;
  if ( a4 > 0 )
  {
    v9 = a2 != 0 ? 896 : 816;
LABEL_3:
    v10 = -2147475456;
    goto LABEL_4;
  }
  if ( a4 )
  {
    v9 = a2 != 0 ? 912 : 832;
    goto LABEL_3;
  }
  v10 = -2147483136;
  v9 = a2 != 0 ? 928 : 848;
LABEL_4:
  v11 = a3 + v9;
  v13[0] = a1;
  v13[1] = a7;
  v16 = a5;
  v15 = v7;
  if ( a6 )
    v14 = *(_DWORD *)(a6 + 464);
  else
    v14 = -1;
  v19 = 0;
  v17 = v13;
  v18 = 32;
  return EtwTraceKernelEvent((int)&v17, 1, v10, v11, 6297858);
}
