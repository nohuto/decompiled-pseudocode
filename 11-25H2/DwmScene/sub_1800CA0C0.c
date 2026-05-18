/*
 * XREFs of sub_1800CA0C0 @ 0x1800CA0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_1800BC4BC @ 0x1800BC4BC (sub_1800BC4BC.c)
 *     sub_1800C2EE4 @ 0x1800C2EE4 (sub_1800C2EE4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CA0C0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v4 = sub_1800BC4BC(&v7, a2);
  sub_180011010((_QWORD *)(a1 + 104), v4);
  if ( v8 )
    sub_18001050C(v8);
  sub_1800C2EE4(*(_QWORD *)(a1 + 104), &v9);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 216LL))(v9, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 0;
  result = sub_18000E854(&v9);
  v6 = a2[1];
  if ( v6 )
    return sub_18001050C(v6);
  return result;
}
