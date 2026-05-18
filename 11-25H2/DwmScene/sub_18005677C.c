/*
 * XREFs of sub_18005677C @ 0x18005677C
 * Callers:
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180054E9C @ 0x180054E9C (sub_180054E9C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005677C(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 *v4; // rax
  _BYTE v6[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  sub_180054E9C(a2, a1);
  v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v3 + 32) + 8LL))(*(_QWORD *)(v3 + 32), v6);
  sub_180011010((_QWORD *)(a2 + 32), v4);
  if ( v7 )
    sub_18001050C(v7);
  return a2;
}
