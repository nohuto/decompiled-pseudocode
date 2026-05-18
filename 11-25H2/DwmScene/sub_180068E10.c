/*
 * XREFs of sub_180068E10 @ 0x180068E10
 * Callers:
 *     sub_180069048 @ 0x180069048 (sub_180069048.c)
 *     sub_18006BDB0 @ 0x18006BDB0 (sub_18006BDB0.c)
 *     sub_18006C520 @ 0x18006C520 (sub_18006C520.c)
 *     sub_180084550 @ 0x180084550 (sub_180084550.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_1800685E8 @ 0x1800685E8 (sub_1800685E8.c)
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_180069108 @ 0x180069108 (sub_180069108.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180068E10(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h]
  __int64 v25; // [rsp+58h] [rbp-29h] BYREF
  __int64 v26; // [rsp+60h] [rbp-21h]
  __int64 v27; // [rsp+68h] [rbp-19h] BYREF
  __int64 v28; // [rsp+70h] [rbp-11h]
  _BYTE v29[32]; // [rsp+88h] [rbp+7h] BYREF

  if ( a6 )
    sub_180027C70((__int64)a1, 1, 1);
  v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v11 = (__int64 *)sub_180069108((unsigned int)&v25, v10, a2, a3, a4, 0, a5);
  result = (__int64)sub_180011010(a1 + 14, v11);
  if ( v26 )
    result = sub_18001050C(v26);
  if ( (a1[5] & 1) != 0 )
  {
    if ( a6 )
    {
      sub_1800685E8(a6, &v23);
      v13 = v23;
      v14 = sub_180027A8C((__int64)a1, (__int64)&v27);
      sub_180027C24(v13, v14);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v23 + 40LL))(v23, a2, a3, a4, a5);
      sub_180068A3C(a1, &v23);
      sub_180027C70((__int64)a1, 2, 0);
      result = sub_180027C70(v16, v15 + 4, v15);
      if ( v24 )
        return sub_18001050C(v24);
    }
    else
    {
      sub_1800346A8(v10, &v27);
      v17 = 0;
      v18 = v27;
      if ( (v28 - v27) >> 4 )
      {
        v19 = 0LL;
        do
        {
          unknown_libname_81(&v25, (_QWORD *)(v18 + 16 * v19));
          v20 = v25;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25) )
          {
            sub_1800685E8(v20, &v23);
            v21 = v23;
            v22 = sub_180027A8C((__int64)a1, (__int64)v29);
            sub_180027C24(v21, v22);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v23 + 40LL))(v23, a2, a3, a4, a5);
            sub_180068A3C(a1, &v23);
            if ( v24 )
              sub_18001050C(v24);
          }
          if ( v26 )
            sub_18001050C(v26);
          ++v17;
          v18 = v27;
          v19 = v17;
        }
        while ( v17 < (unsigned __int64)((v28 - v27) >> 4) );
      }
      return sub_1800130E0((__int64)&v27);
    }
  }
  return result;
}
