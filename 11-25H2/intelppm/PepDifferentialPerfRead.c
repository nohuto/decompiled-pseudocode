/*
 * XREFs of PepDifferentialPerfRead @ 0x14000EC20
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyFeedbackRead @ 0x14000ED9C (PepNotifyFeedbackRead.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 */

__int64 __fastcall PepDifferentialPerfRead(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
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
  LODWORD(v9) = *(_DWORD *)(v5 + 52);
  PepNotifyFeedbackRead(v7, &v9);
  *a3 = *((_QWORD *)&v9 + 1);
  result = v10;
  *a4 = v10;
  return result;
}
