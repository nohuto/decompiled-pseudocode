/*
 * XREFs of sub_1800757A0 @ 0x1800757A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180041E6C @ 0x180041E6C (sub_180041E6C.c)
 *     sub_180045668 @ 0x180045668 (sub_180045668.c)
 *     sub_180048934 @ 0x180048934 (sub_180048934.c)
 *     sub_180048A28 @ 0x180048A28 (sub_180048A28.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800757A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]

  sub_180048934(a2, (__int64)&v9);
  if ( sub_180041E6C(v9, v5, v6) )
  {
    v7 = sub_180032500(*(_QWORD *)(a3 + 3648), 1);
    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C5918, 0LL);
  }
  v8 = (__int64 *)sub_180048A28(a2, &v11);
  sub_180045668(*v8);
  if ( v12 )
    sub_18001060C(v12);
  if ( v10 )
    sub_18001060C(v10);
}
