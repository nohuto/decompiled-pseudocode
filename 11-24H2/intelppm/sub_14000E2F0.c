/*
 * XREFs of sub_14000E2F0 @ 0x14000E2F0
 * Callers:
 *     sub_14000E410 @ 0x14000E410 (sub_14000E410.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000E2F0(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  if ( *((_BYTE *)a3 + 25) == 1 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(a2 + 24))(
             a1,
             *(_QWORD *)(a2 + 40),
             *a3,
             a3[1],
             a4);
  else
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(a2 + 16))(
             a1,
             *(_QWORD *)(a2 + 48),
             *a3,
             a3[1],
             a4);
}
