/*
 * XREFs of sub_18008FDA0 @ 0x18008FDA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013198 @ 0x180013198 (sub_180013198.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180041634 @ 0x180041634 (sub_180041634.c)
 *     sub_1800416B4 @ 0x1800416B4 (sub_1800416B4.c)
 *     sub_18007C138 @ 0x18007C138 (sub_18007C138.c)
 *     sub_18007C464 @ 0x18007C464 (sub_18007C464.c)
 *     sub_18007C7FC @ 0x18007C7FC (sub_18007C7FC.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18008FDA0(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 a4)
{
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  void *v11; // rax
  __int64 v12; // r8
  _OWORD v14[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-30h] BYREF

  v7 = sub_1800416B4(a2);
  sub_180016F54((__int64)v15, v7);
  v8 = unknown_libname_81(v14, a3);
  sub_18007C464(v9, a4, v8);
  if ( a4 == (unsigned __int16)sub_180041634(a2, (__int64)&unk_1801C6DC8, v10)
    && *(_BYTE *)(a2 + 184)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 188) = 1;
  }
  v11 = sub_180013198(v14, (__int64)v15, (__int64)&unk_1801C6CE8);
  sub_18007C138(*(_QWORD *)(a2 + 120), (__int64)v11, 1);
  sub_180011A5C((__int64)v14);
  if ( a4 == (unsigned __int16)sub_180041634(a2, (__int64)&unk_1801C6E08, v12) )
  {
    v14[0] = 0LL;
    if ( *a3 )
    {
      if ( (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
      {
        LODWORD(v14[0]) = 1065353216;
        HIDWORD(v14[0]) = 1065353216;
      }
      else
      {
        DWORD2(v14[0]) = 1051372203;
      }
    }
    sub_18007C7FC(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C6F28, v14);
  }
  return sub_180011A5C((__int64)v15);
}
