/*
 * XREFs of _except1 @ 0x180128A50
 * Callers:
 *     fabs @ 0x180122A50 (fabs.c)
 * Callees:
 *     _errno @ 0x180108440 (_errno.c)
 *     _handle_exc @ 0x180128BE0 (_handle_exc.c)
 *     _raise_exc_ex @ 0x180128F30 (_raise_exc_ex.c)
 *     _umatherr @ 0x180129270 (_umatherr.c)
 *     _ctrlfp @ 0x1801295C0 (_ctrlfp.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

double __fastcall except1(__int64 a1, int a2, double a3, double a4, __int64 a5)
{
  __int64 v5; // rdi
  int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  int v10; // ecx
  double result; // xmm0_8
  int v12; // ecx
  double v13; // [rsp+40h] [rbp-A8h] BYREF
  double v14; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v15[7]; // [rsp+50h] [rbp-98h] BYREF

  v5 = a5;
  v14 = a3;
  v13 = a4;
  v7 = a1;
  if ( !(unsigned int)handle_exc(a1, &v13, a5) )
  {
    memset(v15, 0, sizeof(v15));
    raise_exc_ex((unsigned int)v15, (unsigned int)&a5, v7, a2, (__int64)&v14, (__int64)&v13, 0);
    v5 = a5;
  }
  if ( (v7 & 0x20) != 0 )
  {
    v10 = 5;
  }
  else if ( (v7 & 8) != 0 )
  {
    v10 = 1;
  }
  else if ( (v7 & 4) != 0 )
  {
    v10 = 2;
  }
  else if ( (v7 & 1) != 0 )
  {
    v10 = 3;
  }
  else
  {
    v10 = 2 * (v7 & 2);
  }
  if ( matherr_flag )
  {
    v12 = v10 - 1;
    if ( v12 )
    {
      if ( (unsigned int)(v12 - 1) <= 1 )
        *errno() = 34;
    }
    else
    {
      *errno() = 33;
    }
  }
  else if ( v10 )
  {
    result = v13;
    umatherr(v10, a2, v8, v9, *(__int64 *)&v13, v5);
    return result;
  }
  ctrlfp(v5, 65472LL);
  return v13;
}
