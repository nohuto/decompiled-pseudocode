/*
 * XREFs of sub_1800BB150 @ 0x1800BB150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800B628C @ 0x1800B628C (sub_1800B628C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BB150(__int64 a1, unsigned int a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  sub_1800B628C((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 3872), &v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, a2);
  return sub_18000E954(&v4);
}
