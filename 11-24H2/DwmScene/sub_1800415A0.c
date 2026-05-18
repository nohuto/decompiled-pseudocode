/*
 * XREFs of sub_1800415A0 @ 0x1800415A0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 *     sub_180027B30 @ 0x180027B30 (sub_180027B30.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18007B850 @ 0x18007B850 (sub_18007B850.c)
 */

__int64 __fastcall sub_1800415A0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF

  result = sub_180027B30(a1, (__int64)a2);
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_18002894C(*a2 + 24LL, v5);
    v6 = unknown_libname_81(v8, a2);
    sub_18007B850(v7, v6);
    v9 = *(_DWORD *)(*a2 + 244LL);
    result = sub_1800276BC((__int64 *)(a1 + 80), (__int64)v8, &v9);
    *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  }
  return result;
}
