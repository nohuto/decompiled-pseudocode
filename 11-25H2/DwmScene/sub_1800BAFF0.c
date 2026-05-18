/*
 * XREFs of sub_1800BAFF0 @ 0x1800BAFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_1800B612C @ 0x1800B612C (sub_1800B612C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BAFF0(__int64 a1, unsigned int a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  sub_1800B612C((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 3872), &v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, a2);
  return sub_18000E854(&v4);
}
