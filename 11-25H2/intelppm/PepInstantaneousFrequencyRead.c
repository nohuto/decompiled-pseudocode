/*
 * XREFs of PepInstantaneousFrequencyRead @ 0x14000ECA0
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyFeedbackRead @ 0x14000ED9C (PepNotifyFeedbackRead.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PepInstantaneousFrequencyRead(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v6 = 0LL;
  LODWORD(v6) = *(_DWORD *)(v3 + 48);
  PepNotifyFeedbackRead(*(_QWORD *)(a1 + 48), &v6);
  result = 100LL * *((_QWORD *)&v6 + 1) / (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL);
  *a2 = result;
  return result;
}
