/*
 * XREFs of sub_180011598 @ 0x180011598
 * Callers:
 *     sub_180017B70 @ 0x180017B70 (sub_180017B70.c)
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180010FC0 @ 0x180010FC0 (sub_180010FC0.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180011598(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h]
  _BYTE v16[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v17; // [rsp+58h] [rbp-31h]
  _BYTE v18[16]; // [rsp+60h] [rbp-29h] BYREF
  _OWORD v19[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+98h] [rbp+Fh]

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1) )
  {
    if ( a3 < *(_DWORD *)(a1 + 1656) )
      a3 = *(_DWORD *)(a1 + 1656);
    if ( a4 < *(_DWORD *)(a1 + 1660) )
      a4 = *(_DWORD *)(a1 + 1660);
    v8 = *(_DWORD *)(a1 + 1664);
    v9 = a3 + v8 - 1 - (a3 + v8 - 1) % v8;
    v10 = a4 + v8 - 1 - (a4 + v8 - 1) % v8;
    a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    if ( a3 < v9 )
      a3 = v9;
    a4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    if ( a4 < v10 )
      a4 = v10;
    if ( a4 * a3 - v10 * v9 >= (int)(float)((float)(int)(a4 * a3) * *(float *)(a1 + 1668)) )
    {
      a3 = v9;
      a4 = v10;
    }
  }
  else if ( a2 )
  {
    memset(v19, 0, sizeof(v19));
    v20 = 0LL;
    v21 = 0;
    (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a2 + 80LL))(a2, v19);
    a3 = v19[0];
    a4 = DWORD1(v19[0]);
  }
  if ( *(_QWORD *)(a1 + 1648) != a2
    || a3 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1)
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1), a4 != (_DWORD)result) )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v16);
    result = sub_180011B04(v12, &v14);
    if ( v17 )
      result = sub_180010544(v17);
    v13 = v14;
    if ( v14 )
    {
      sub_18002851C(v14 + 24, v18);
      sub_180010FC0((__int64 *)(a1 + 1648), a2);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 144LL))(v13, 0LL);
      result = sub_180010F44((__int64)v18);
    }
    if ( v15 )
      return sub_18001050C(v15);
  }
  return result;
}
