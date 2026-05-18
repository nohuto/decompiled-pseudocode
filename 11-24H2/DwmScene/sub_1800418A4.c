/*
 * XREFs of sub_1800418A4 @ 0x1800418A4
 * Callers:
 *     sub_180041130 @ 0x180041130 (sub_180041130.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180040B38 @ 0x180040B38 (sub_180040B38.c)
 *     sub_18005BB20 @ 0x18005BB20 (sub_18005BB20.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800418A4(__int64 a1, _QWORD *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  unsigned __int16 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v8 = sub_180040B38(a1 + 200, (__int64)&v15);
  if ( *a2 )
  {
    *(_DWORD *)(v8 + 32) = 2;
    v9 = (_QWORD *)sub_18005BB20(*(_QWORD *)(a1 + 136), v13);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)*v9 + 56LL))(*v9, a1, a2, a3);
  }
  else
  {
    *(_DWORD *)(v8 + 32) = 3;
    v11 = (_QWORD *)sub_18005BB20(*(_QWORD *)(a1 + 136), v13);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)*v11 + 64LL))(*v11, a1, a4, a3);
  }
  if ( v14 )
    result = sub_18001060C(v14);
  v12 = a2[1];
  if ( v12 )
    return sub_18001060C(v12);
  return result;
}
