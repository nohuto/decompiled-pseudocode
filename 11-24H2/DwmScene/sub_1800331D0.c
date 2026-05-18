/*
 * XREFs of sub_1800331D0 @ 0x1800331D0
 * Callers:
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 *     sub_180015880 @ 0x180015880 (sub_180015880.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_1800339BC @ 0x1800339BC (sub_1800339BC.c)
 *     sub_180034224 @ 0x180034224 (sub_180034224.c)
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18006D710 @ 0x18006D710 (sub_18006D710.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800331D0(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
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
    v9 = sub_18006D710(v8 + 376, v7);
    v11(v10, a2, v9);
  }
  v12 = a3[1];
  if ( v12 )
    sub_18001060C(v12);
  v13 = a4[1];
  if ( v13 )
    sub_18001060C(v13);
}
