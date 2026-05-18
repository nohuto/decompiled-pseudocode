/*
 * XREFs of sub_18008FF00 @ 0x18008FF00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180013298 @ 0x180013298 (sub_180013298.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180041794 @ 0x180041794 (sub_180041794.c)
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 *     sub_18007C298 @ 0x18007C298 (sub_18007C298.c)
 *     sub_18007C5C4 @ 0x18007C5C4 (sub_18007C5C4.c)
 *     sub_18007C95C @ 0x18007C95C (sub_18007C95C.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18008FF00(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 a4)
{
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  void *v11; // rax
  __int64 v12; // r8
  _OWORD v14[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-30h] BYREF

  v7 = sub_180041814(a2);
  sub_180017054((__int64)v15, v7);
  v8 = unknown_libname_81(v14, a3);
  sub_18007C5C4(v9, a4, v8);
  if ( a4 == (unsigned __int16)sub_180041794(a2, (__int64)&unk_1801C7DD8, v10)
    && *(_BYTE *)(a2 + 184)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 188) = 1;
  }
  v11 = sub_180013298(v14, (__int64)v15, (__int64)&unk_1801C7CF8);
  sub_18007C298(*(_QWORD *)(a2 + 120), (__int64)v11, 1);
  sub_180011B5C((__int64)v14);
  if ( a4 == (unsigned __int16)sub_180041794(a2, (__int64)&unk_1801C7E18, v12) )
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
    sub_18007C95C(*(_QWORD *)(a2 + 120), (__int64)&unk_1801C7F38, v14);
  }
  return sub_180011B5C((__int64)v15);
}
