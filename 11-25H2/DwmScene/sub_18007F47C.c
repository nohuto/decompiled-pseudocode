/*
 * XREFs of sub_18007F47C @ 0x18007F47C
 * Callers:
 *     sub_18007F330 @ 0x18007F330 (sub_18007F330.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_180037060 @ 0x180037060 (sub_180037060.c)
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_18007F930 @ 0x18007F930 (sub_18007F930.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007F47C(__int64 *a1, _QWORD *a2)
{
  __int64 *v4; // r14
  unsigned int *v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 *v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 *v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  _BYTE v18[16]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF

  sub_1800279D0((__int64)a1, (__int64)a2);
  (*(void (__fastcall **)(__int64 *, __int64 **, _QWORD))(*a1 + 56))(a1, &v16, *a2);
  v4 = v16;
  v5 = (unsigned int *)a1[14];
  if ( v5 )
  {
    v6 = v5[5];
    v7 = v5[6];
    v8 = v5[4];
    v9 = v5[2];
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
  }
  v10 = a1[17];
  v11 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64, unsigned int, unsigned int))(*v16 + 48))(
                     v16,
                     &v19,
                     v9,
                     v8,
                     v7,
                     v6);
  sub_180037060(v4 + 12, v11);
  sub_180037090(&v19);
  (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 56))(v4, v10);
  v12 = *(_DWORD *)(*a2 + 244LL);
  LODWORD(v19) = v12;
  v13 = sub_180050140(a1 + 15, (__int64)v18, &v19);
  sub_180011010((_QWORD *)(*(_QWORD *)v13 + 40LL), (__int64 *)&v16);
  v14 = a1[14];
  if ( v14 && *(_DWORD *)(v14 + 24) == 2 )
    sub_18007F930(a1, *a2);
  LODWORD(v19) = v12;
  result = sub_18002755C(a1 + 10, (__int64)v18, &v19);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  if ( v17 )
    return sub_18001050C(v17);
  return result;
}
