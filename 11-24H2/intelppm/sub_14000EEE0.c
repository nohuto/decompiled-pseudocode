/*
 * XREFs of sub_14000EEE0 @ 0x14000EEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F0DC @ 0x14000F0DC (sub_14000F0DC.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000EEE0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 48);
  v9 = 0LL;
  LODWORD(v9) = *(_DWORD *)(v5 + 48);
  sub_14000F0DC(v7, &v9);
  *a3 = *((_QWORD *)&v9 + 1);
  result = v10;
  *a4 = v10;
  return result;
}
