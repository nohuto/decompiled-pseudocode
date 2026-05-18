/*
 * XREFs of sub_180041440 @ 0x180041440
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18007B6F0 @ 0x18007B6F0 (sub_18007B6F0.c)
 */

__int64 __fastcall sub_180041440(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF

  result = sub_1800279D0(a1, (__int64)a2);
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_1800287EC(*a2 + 24LL, v5);
    v6 = unknown_libname_81(v8, a2);
    sub_18007B6F0(v7, v6);
    v9 = *(_DWORD *)(*a2 + 244LL);
    result = sub_18002755C((__int64 *)(a1 + 80), (__int64)v8, &v9);
    *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  }
  return result;
}
