/*
 * XREFs of sub_180075640 @ 0x180075640
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180041D0C @ 0x180041D0C (sub_180041D0C.c)
 *     sub_180045508 @ 0x180045508 (sub_180045508.c)
 *     sub_1800487D4 @ 0x1800487D4 (sub_1800487D4.c)
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180075640(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]

  sub_1800487D4(a2, (__int64)&v9);
  if ( sub_180041D0C(v9, v5, v6) )
  {
    v7 = sub_1800323A0(*(_QWORD *)(a3 + 3648), 1);
    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C4908, 0LL);
  }
  v8 = (__int64 *)sub_1800488C8(a2, &v11);
  sub_180045508(*v8);
  if ( v12 )
    sub_18001050C(v12);
  if ( v10 )
    sub_18001050C(v10);
}
