/*
 * XREFs of CrmStateMonitorFanNoiseHysteresisCallback @ 0x180069DF0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorFanNoiseHysteresisSetTimer @ 0x180069E8C (CrmStateMonitorFanNoiseHysteresisSetTimer.c)
 */

__int64 __fastcall CrmStateMonitorFanNoiseHysteresisCallback(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  bool v7; // cc

  v3 = a1 - 88;
  TpSetTimer(*(_QWORD *)(a1 - 88 + 112), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(v3 + 112), 1LL);
  result = *((unsigned int *)a3 + 2);
  v6 = 0LL;
  *(_OWORD *)(v3 + 120) = *a3;
  *(_OWORD *)(v3 + 136) = a3[1];
  v7 = (unsigned int)result <= *(_DWORD *)(v3 + 64);
  if ( (unsigned int)result < *(_DWORD *)(v3 + 64) )
  {
    LOBYTE(v6) = *(_QWORD *)(v3 + 152) != 0LL;
    return CrmStateMonitorFanNoiseHysteresisSetTimer(v3, v6);
  }
  else
  {
    *(_QWORD *)(v3 + 152) = 0LL;
    if ( !v7 )
      return CrmStateMonitorStateSet((unsigned int *)v3, a3, 0x20uLL, 0);
  }
  return result;
}
