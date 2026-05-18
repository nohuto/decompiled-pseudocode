/*
 * XREFs of sub_1800C5BE0 @ 0x1800C5BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18007F624 @ 0x18007F624 (sub_18007F624.c)
 *     sub_1800C2EB0 @ 0x1800C2EB0 (sub_1800C2EB0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_1800C5BE0(__int64 a1, __int64 *a2, unsigned int a3, int a4, ...)
{
  __int64 *v6; // rax
  char v7; // bl
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  char v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h]
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h]
  __int64 v17; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h] BYREF
  int v19; // [rsp+B8h] [rbp+48h] BYREF
  va_list va; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va, a4);
  v19 = a4;
  LODWORD(v17) = 0;
  if ( *a2 )
  {
    v6 = sub_18007F624(*a2, &v15, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v12 = 0LL;
    v6 = (__int64 *)&v11;
    v7 = 2;
    v8 = 0LL;
  }
  v13 = v8;
  v9 = v6[1];
  v14 = v9;
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v12 )
      sub_18001050C(v12);
  }
  if ( (v7 & 1) != 0 && v16 )
    sub_18001050C(v16);
  if ( v8 )
  {
    v17 = *sub_1800C2EB0(v8, &v18);
    sub_18000E854(&v18);
  }
  else
  {
    v17 = 0LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, char *, int *))(**(_QWORD **)(a1 + 144) + 144LL))(
             *(_QWORD *)(a1 + 144),
             a3,
             1LL,
             &v17,
             va,
             &v19);
  if ( v9 )
    return sub_18001050C(v9);
  return result;
}
