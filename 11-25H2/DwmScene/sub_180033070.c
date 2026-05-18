/*
 * XREFs of sub_180033070 @ 0x180033070
 * Callers:
 *     sub_18001565C @ 0x18001565C (sub_18001565C.c)
 *     sub_180015780 @ 0x180015780 (sub_180015780.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_1800336B0 @ 0x1800336B0 (sub_1800336B0.c)
 *     sub_18003385C @ 0x18003385C (sub_18003385C.c)
 *     sub_1800340C4 @ 0x1800340C4 (sub_1800340C4.c)
 *     sub_1800356CC @ 0x1800356CC (sub_1800356CC.c)
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18006D5B0 @ 0x18006D5B0 (sub_18006D5B0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180033070(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r10
  void (__fastcall *v11)(__int64, _QWORD, __int64); // r11
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+50h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 912) )
  {
    unknown_libname_81(&v14, a4);
    v7 = unknown_libname_81(v15, a3);
    v9 = sub_18006D5B0(v8 + 376, v7);
    v11(v10, a2, v9);
  }
  v12 = a3[1];
  if ( v12 )
    sub_18001050C(v12);
  v13 = a4[1];
  if ( v13 )
    sub_18001050C(v13);
}
