/*
 * XREFs of CcPerfLogScheduleReadAhead @ 0x140453FCC
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall CcPerfLogScheduleReadAhead(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, int a5, char a6, int a7)
{
  __int64 v10; // rbx
  __int64 v12; // rdi
  unsigned int v13; // ecx
  _QWORD *v15; // [rsp+38h] [rbp-41h] BYREF
  int v16; // [rsp+40h] [rbp-39h]
  int v17; // [rsp+44h] [rbp-35h]
  _QWORD v18[3]; // [rsp+48h] [rbp-31h] BYREF
  int v19; // [rsp+60h] [rbp-19h]
  int v20; // [rsp+64h] [rbp-15h]
  int v21; // [rsp+68h] [rbp-11h]
  __int64 v22; // [rsp+70h] [rbp-9h]
  __int64 v23; // [rsp+78h] [rbp-1h]
  char v24; // [rsp+80h] [rbp+7h]
  int v25; // [rsp+84h] [rbp+Bh]
  int v26; // [rsp+88h] [rbp+Fh]
  int v27; // [rsp+8Ch] [rbp+13h]

  v10 = 0LL;
  v12 = 0LL;
  memset_0(v18, 0, 0x48uLL);
  if ( a2 )
  {
    v10 = a2[6];
    v12 = *(_QWORD *)(a2[5] + 8LL);
    v18[1] = a2[3];
  }
  v18[2] = *a3;
  v20 = a5;
  v18[0] = a1;
  v19 = a4;
  v13 = v27 & 0xFFFFFFFE | (a7 == 1);
  v27 = v13;
  if ( v10 )
  {
    v21 = *(_DWORD *)(v10 + 52);
    v22 = *(_QWORD *)(v10 + 56);
    v23 = *(_QWORD *)(v10 + 64);
    v27 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)v10 >> 15)) & 2;
    v25 = *(_DWORD *)(v10 + 48);
  }
  if ( v12 )
    v26 = *(_DWORD *)(v12 + 152);
  v17 = 0;
  v24 = a6;
  v16 = 72;
  v15 = v18;
  return EtwTraceKernelEvent((int)&v15, 1, 0x80020000, 5644, 5249282);
}
