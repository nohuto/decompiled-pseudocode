/*
 * XREFs of sub_18008770C @ 0x18008770C
 * Callers:
 *     sub_180086ED0 @ 0x180086ED0 (sub_180086ED0.c)
 *     sub_180088710 @ 0x180088710 (sub_180088710.c)
 *     sub_1800888A0 @ 0x1800888A0 (sub_1800888A0.c)
 *     sub_1800DAFC1 @ 0x1800DAFC1 (sub_1800DAFC1.c)
 *     sub_1800DB150 @ 0x1800DB150 (sub_1800DB150.c)
 *     unknown_libname_63 @ 0x1800DB162 (unknown_libname_63.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008770C(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  result = sub_180012408((__int64)(a1 + 15), a2);
  v5 = (_QWORD *)a1[14];
  if ( v5 )
  {
    LOBYTE(v4) = v5 != a1 + 7;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v5 + 32LL))(v5, v4);
    a1[14] = 0LL;
  }
  v6 = a1[3];
  if ( v6 )
    result = sub_18001050C(v6);
  v7 = a1[1];
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
