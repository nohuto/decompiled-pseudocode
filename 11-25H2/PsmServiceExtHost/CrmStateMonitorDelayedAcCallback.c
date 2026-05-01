/*
 * XREFs of CrmStateMonitorDelayedAcCallback @ 0x18006B270
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D2A0 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorDelayedAcCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 - 64;
  v4 = *(_QWORD *)(a1 - 64 + 88);
  if ( *a3 )
  {
    TpSetTimer(v4, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v6 = 0;
    result = CrmStateMonitorStateSet((unsigned int *)v3, &v6, 4uLL, 0);
    *(_DWORD *)(v3 + 60) = 0;
  }
  else
  {
    v7 = -10000000LL * CrmStateMonitorDelayedAcNotificationSequenceSeconds[*(unsigned int *)(v3 + 60)];
    return TpSetTimer(v4, &v7, 0LL, 60000LL);
  }
  return result;
}
