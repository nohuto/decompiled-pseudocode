/*
 * XREFs of WdipSemSqmAddToStream @ 0x1407A35D4
 * Callers:
 *     WdipSemSqmLogTimeoutDataPoints @ 0x1407A385C (WdipSemSqmLogTimeoutDataPoints.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140A3D790 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140A7DEF4 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemSqmAddToStream(_DWORD *a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v11[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 *v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+5Ch] [rbp-A4h]
  int *v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+68h] [rbp-98h]
  int v17; // [rsp+6Ch] [rbp-94h]
  int *v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  int v20; // [rsp+7Ch] [rbp-84h]
  int *v21; // [rsp+80h] [rbp-80h]
  int i; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+8Ch] [rbp-74h]
  int v24; // [rsp+260h] [rbp+160h] BYREF

  v24 = (int)a1;
  v9 = a2;
  v10 = 1;
  v11[0] = 48;
  v8 = 11;
  if ( !a3 || a2 - 1 > 8 )
    return 3221225485LL;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  v3 = 0;
  v23 = 0;
  v12 = WinSqmGlobalSession;
  v15 = &v24;
  v18 = &v8;
  v21 = (int *)&v9;
  v13 = 16;
  v16 = 4;
  v19 = 4;
  for ( i = 4; v3 < a2; *(&v13 + 2 * v5) = 4 )
  {
    v4 = 2LL * (3 * v3 + 4);
    *(&v14 + 2 * v4) = 0;
    (&v12)[v4] = (__int64 *)&v10;
    *(&v13 + 2 * v4) = 4;
    v5 = 6LL * (v3 + 2);
    v6 = 2LL * (3 * v3++ + 5);
    *(&v14 + 2 * v6) = 0;
    (&v12)[v6] = a3;
    a3 = (__int64 *)((char *)a3 + 4);
    *(&v13 + 2 * v6) = 4;
    a1 = v11;
    *(&v14 + 2 * v5) = 0;
    (&v12)[v5] = (__int64 *)v11;
  }
  return WdipSemWriteEvent(a1, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM, 0LL, 3 * a2 + 4, &v12);
}
