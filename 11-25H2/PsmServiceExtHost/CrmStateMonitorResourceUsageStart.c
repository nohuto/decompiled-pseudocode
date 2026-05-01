/*
 * XREFs of CrmStateMonitorResourceUsageStart @ 0x18007A948
 * Callers:
 *     CrmStateMonitorStart @ 0x18006F408 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D45C (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x18002DE70 (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsageStart(__int64 a1)
{
  int v1; // edi
  __int64 result; // rax
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 29 )
  {
    *(_QWORD *)(a1 + 104) = -1LL;
  }
  else if ( v1 != 43 )
  {
    return 3221225485LL;
  }
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 100;
  v4 = CrmStateMonitorStateSizeGet(v1);
  memcpy_0(v6, v5, v4);
  if ( v1 == 43
    || (result = TpAllocTimer(a1 + 88, CrmStateMonitorResourceUsageTimerCallback, a1, 0LL), (int)result >= 0) )
  {
    result = CrmRegisterToStateMonitor(a1 + 64, 8);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
