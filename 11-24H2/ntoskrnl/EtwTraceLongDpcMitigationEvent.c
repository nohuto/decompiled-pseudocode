/*
 * XREFs of EtwTraceLongDpcMitigationEvent @ 0x14064C1BC
 * Callers:
 *     KiEnterLongDpcProcessing @ 0x1402A7594 (KiEnterLongDpcProcessing.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceLongDpcMitigationEvent(__int64 a1, __int64 a2, char a3, char a4, char a5, char a6)
{
  int v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+34h] [rbp-2Ch]
  char v9; // [rsp+38h] [rbp-28h]
  char v10; // [rsp+39h] [rbp-27h]
  char v11; // [rsp+3Ah] [rbp-26h]
  char v12; // [rsp+3Bh] [rbp-25h]
  int *v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+4Ch] [rbp-14h]

  v7 = *(_DWORD *)(a1 + 1296);
  if ( a2 )
    v8 = *(_DWORD *)(a2 + 1296);
  else
    v8 = -1;
  v15 = 0;
  v11 = a5;
  v12 = a6;
  v9 = a3;
  v10 = a4;
  v13 = &v7;
  v14 = 12;
  return EtwTraceKernelEvent((int)&v13, 1, 0x20040000u, 3959, 5245442);
}
