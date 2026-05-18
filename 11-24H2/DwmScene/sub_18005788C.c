/*
 * XREFs of sub_18005788C @ 0x18005788C
 * Callers:
 *     sub_180062300 @ 0x180062300 (sub_180062300.c)
 * Callees:
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18005788C(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 176LL))(a1, a3);
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, a3);
  result = sub_180057928(a1, a2, a3);
  if ( a1[32] )
  {
    v7 = 0LL;
    sub_180058A5C(a1, &v7);
    v7 = 0LL;
    return sub_1800588F0(a1, &v7);
  }
  return result;
}
