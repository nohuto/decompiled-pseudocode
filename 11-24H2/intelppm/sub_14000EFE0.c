/*
 * XREFs of sub_14000EFE0 @ 0x14000EFE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F0DC @ 0x14000F0DC (sub_14000F0DC.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_14000EFE0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v6 = 0LL;
  LODWORD(v6) = *(_DWORD *)(v3 + 48);
  sub_14000F0DC(*(_QWORD *)(a1 + 48), &v6);
  result = 100LL * *((_QWORD *)&v6 + 1) / (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL);
  *a2 = result;
  return result;
}
