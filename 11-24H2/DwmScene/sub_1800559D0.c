/*
 * XREFs of sub_1800559D0 @ 0x1800559D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 *     sub_18006C680 @ 0x18006C680 (sub_18006C680.c)
 *     sub_18006C76C @ 0x18006C76C (sub_18006C76C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800559D0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  int v5; // r8d
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF

  v4 = *(unsigned int *)(a1 + 128);
  if ( (_DWORD)v4 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 440) & 0x100) != 0 )
      v4 = (unsigned int)((*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 280LL))(*a2) != 0) + 2;
    if ( (*(_DWORD *)(a1 + 440) & 0x200) != 0 )
    {
LABEL_11:
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(*(_QWORD *)*a2 + 152LL))(*a2, a2, v4);
      unknown_libname_81(v15, v6);
      v7 = sub_18006C76C(v15[0], v16, 2LL);
      sub_180058A5C(a1, v7);
      v8 = sub_18006C680(v15[0], v16, 2LL);
      sub_1800588F0(a1, v8);
      v9 = v15[1];
      goto LABEL_12;
    }
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a2 + 32LL))(*a2, v16);
    sub_180058A5C(a1, v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a2 + 40LL))(*a2, v16);
    sub_1800588F0(a1, v14);
    return;
  }
  v4 = (unsigned int)(v5 - 1);
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
    {
      if ( !*(_QWORD *)(a1 + 136) && !*(_QWORD *)(a1 + 152) )
      {
        sub_1800138F8(a1 + 24);
        sub_18001CAFC(&stru_1801B9388, 4);
      }
      return;
    }
    goto LABEL_11;
  }
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
  unknown_libname_81(v16, v10);
  v11 = v16[0];
  v12 = unknown_libname_81(v15, (_QWORD *)(v16[0] + 456LL));
  sub_180058A5C(a1, v12);
  unknown_libname_81(v15, (_QWORD *)(v11 + 472));
  sub_1800588F0(a1, v15);
  v9 = v16[1];
LABEL_12:
  if ( v9 )
    sub_18001060C(v9);
}
