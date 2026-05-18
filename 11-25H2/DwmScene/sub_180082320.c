/*
 * XREFs of sub_180082320 @ 0x180082320
 * Callers:
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_1800151A0 @ 0x1800151A0 (sub_1800151A0.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180075918 @ 0x180075918 (sub_180075918.c)
 *     sub_180081F40 @ 0x180081F40 (sub_180081F40.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180082320(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]

  *(_DWORD *)(a1 + 96) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(a2 + 16);
  v7 = (_QWORD *)(a1 + 112);
  if ( a1 + 112 != a2 + 16 )
  {
    sub_180075918(a1 + 112);
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
  }
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 40);
  sub_1800151A0((_QWORD *)(a1 + 160), a3);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    sub_1800346A8(*(_QWORD *)(a1 + 72), &v14);
    v8 = 0;
    v9 = v14;
    if ( (v15 - v14) >> 4 )
    {
      v10 = 0LL;
      do
      {
        unknown_libname_81(&v12, (_QWORD *)(v9 + 16 * v10));
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) )
          sub_180081F40(a1, &v12);
        if ( v13 )
          sub_18001050C(v13);
        ++v8;
        v9 = v14;
        v10 = v8;
      }
      while ( v8 < (unsigned __int64)((v15 - v14) >> 4) );
    }
    sub_1800130E0((__int64)&v14);
  }
  return sub_180075918((__int64)v6);
}
