/*
 * XREFs of sub_180055714 @ 0x180055714
 * Callers:
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 *     sub_1800D01A0 @ 0x1800D01A0 (sub_1800D01A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_180025F78 @ 0x180025F78 (sub_180025F78.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180055714(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  _BYTE *v4; // rax
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v8 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v3 )
  {
    v4 = (_BYTE *)(**v3)(v3, v7);
    v8 = v4;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    sub_180025F78((__int64)v9, (__int64)v7);
    sub_180025F78((__int64)v7, a1);
    sub_180025F78(a1, (__int64)v9);
    sub_180012508((__int64)v9, v5);
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v4;
  }
  sub_180012508((__int64)v7, a2);
  return a1;
}
