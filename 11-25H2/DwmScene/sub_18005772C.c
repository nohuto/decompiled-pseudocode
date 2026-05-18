/*
 * XREFs of sub_18005772C @ 0x18005772C
 * Callers:
 *     sub_1800621A0 @ 0x1800621A0 (sub_1800621A0.c)
 * Callees:
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_180058790 @ 0x180058790 (sub_180058790.c)
 *     sub_1800588FC @ 0x1800588FC (sub_1800588FC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18005772C(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 176LL))(a1, a3);
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, a3);
  result = sub_1800577C8(a1, a2, a3);
  if ( a1[32] )
  {
    v7 = 0LL;
    sub_1800588FC(a1, &v7);
    v7 = 0LL;
    return sub_180058790(a1, &v7);
  }
  return result;
}
