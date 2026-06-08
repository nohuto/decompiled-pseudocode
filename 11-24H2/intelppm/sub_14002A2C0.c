/*
 * XREFs of sub_14002A2C0 @ 0x14002A2C0
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14002A2C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD v4[5]; // [rsp+50h] [rbp-28h] BYREF

  v4[1] = a2;
  v2 = *(_QWORD *)(a1 + 16);
  v4[0] = 1LL;
  v4[2] = 16LL;
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(qword_140019120 + 1488))(
           qword_140019128,
           v2,
           0LL,
           2703744LL,
           0LL,
           v4,
           0LL,
           0LL);
}
