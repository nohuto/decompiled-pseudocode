/*
 * XREFs of sub_180050AB0 @ 0x180050AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180050AB0(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h]
  _BYTE v13[16]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+80h] [rbp+10h] BYREF

  sub_180034808(*(_QWORD *)(a1 + 72), &v14);
  v4 = 0;
  v5 = v14;
  if ( (v15 - v14) >> 4 )
  {
    v6 = 0LL;
    do
    {
      unknown_libname_81(&v11, (_QWORD *)(v5 + 16 * v6));
      v16 = *(_DWORD *)(v11 + 244);
      v7 = sub_1800502A0((__int64 *)(a1 + 128), (__int64)v13, &v16);
      unknown_libname_81(&v9, (_QWORD *)(*(_QWORD *)v7 + 40LL));
      if ( v9 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, a2);
      if ( v10 )
        sub_18001060C(v10);
      if ( v12 )
        sub_18001060C(v12);
      ++v4;
      v5 = v14;
      v6 = v4;
    }
    while ( v4 < (unsigned __int64)((v15 - v14) >> 4) );
  }
  return sub_1800131E0((__int64)&v14);
}
