/*
 * XREFs of CrmStateMonitorFanNoiseHysteresisTimerCallback @ 0x18006E8B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorFanNoiseHysteresisSetTimer @ 0x180069E8C (CrmStateMonitorFanNoiseHysteresisSetTimer.c)
 */

__int64 __fastcall CrmStateMonitorFanNoiseHysteresisTimerCallback(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  int v3; // eax
  __int128 v5; // xmm0
  __int64 result; // rax
  _OWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_OWORD *)(a2 + 56);
  v3 = *(_DWORD *)(a2 + 64);
  v5 = *(_OWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 152) = 0LL;
  v7[0] = v2;
  DWORD2(v7[0]) = v3 - 1;
  v7[1] = v5;
  CrmStateMonitorStateSet((unsigned int *)a2, v7, 0x20uLL, 0);
  result = *(unsigned int *)(a2 + 128);
  if ( DWORD2(v7[0]) > (unsigned int)result )
    return CrmStateMonitorFanNoiseHysteresisSetTimer(a2, 0);
  return result;
}
