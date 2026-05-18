/*
 * XREFs of sub_180090DF8 @ 0x180090DF8
 * Callers:
 *     sub_1800917DC @ 0x1800917DC (sub_1800917DC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_180025E18 @ 0x180025E18 (sub_180025E18.c)
 */

__int64 __fastcall sub_180090DF8(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  _QWORD v6[7]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp-1h]
  _BYTE v8[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v9; // [rsp+98h] [rbp+3Fh]

  v2 = *a2;
  v7 = 0LL;
  if ( v2 )
  {
    v6[1] = v2;
    v6[0] = &std::_Func_impl_no_alloc<float (*)(float),float,float>::`vftable';
    v7 = v6;
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 56) == a1 )
  {
LABEL_5:
    v9 = 0LL;
    sub_180025E18((__int64)v8, (__int64)v6);
    sub_180025E18((__int64)v6, a1);
    sub_180025E18(a1, (__int64)v8);
    sub_180012408((__int64)v8, v4);
    goto LABEL_6;
  }
  v7 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
LABEL_6:
  sub_180012408((__int64)v6, (__int64)a2);
  return a1;
}
