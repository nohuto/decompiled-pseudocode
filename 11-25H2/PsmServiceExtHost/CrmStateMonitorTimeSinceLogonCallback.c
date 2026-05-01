/*
 * XREFs of CrmStateMonitorTimeSinceLogonCallback @ 0x180069130
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D2A0 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceLogonCallback(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = (__int64 *)(a2 + 16);
  CrmStateMonitorStateSet(a2, a2 + 16, 8uLL, 0);
  v5 = *v3;
  *v3 *= 2LL;
  v7 = -10000000 * v5;
  return TpSetTimer(a3, &v7, 0LL, 0LL);
}
