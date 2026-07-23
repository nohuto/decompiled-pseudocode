/*
 * XREFs of MiLogNonRetpolineImageLoadEvent @ 0x140A7D7A8
 * Callers:
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F0E80 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140A7D73C (MiLogRetpolineImageLoadEvents.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiLogNonRetpolineImageLoadEvent(unsigned __int16 *a1, int a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-59h] BYREF
  int v5; // [rsp+34h] [rbp-55h] BYREF
  __int64 v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v8[32]; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v9; // [rsp+70h] [rbp-19h]
  int v10; // [rsp+78h] [rbp-11h]
  int v11; // [rsp+7Ch] [rbp-Dh]
  _DWORD *v12; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+88h] [rbp-1h]
  int v14; // [rsp+8Ch] [rbp+3h]
  __int64 v15; // [rsp+90h] [rbp+7h]
  _DWORD v16[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A8h] [rbp+1Fh]
  int v19; // [rsp+ACh] [rbp+23h]
  int *v20; // [rsp+B0h] [rbp+27h]
  int v21; // [rsp+B8h] [rbp+2Fh]
  int v22; // [rsp+BCh] [rbp+33h]
  __int64 *v23; // [rsp+C0h] [rbp+37h]
  int v24; // [rsp+C8h] [rbp+3Fh]
  int v25; // [rsp+CCh] [rbp+43h]

  if ( **(_DWORD **)&qword_140E37658 > 5u
    && (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 16LL) & 0x400000000000LL) != 0
    && (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 0x400000000000LL) == *(_QWORD *)(*(_QWORD *)&qword_140E37658
                                                                                         + 24LL) )
  {
    v11 = 0;
    v14 = 0;
    v16[1] = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v9 = &v6;
    v12 = v16;
    v15 = *((_QWORD *)a1 + 1);
    v16[0] = *a1;
    v17 = &v4;
    v20 = &v5;
    v7 = 2164260864LL;
    v23 = &v7;
    v4 = a2;
    v18 = 4;
    v21 = 4;
    v6 = 1LL;
    v10 = 8;
    v13 = 2;
    v5 = a3;
    v24 = 8;
    tlgWriteAgg(*(__int64 *)&qword_140E37658, (unsigned __int8 *)&dword_14005751C, a3, 8u, (__int64)v8);
  }
}
