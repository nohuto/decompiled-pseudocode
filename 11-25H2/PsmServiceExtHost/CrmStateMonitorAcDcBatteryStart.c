/*
 * XREFs of CrmStateMonitorAcDcBatteryStart @ 0x18007968C
 * Callers:
 *     CrmStateMonitorStart @ 0x18006F408 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D45C (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x18002DE70 (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorAcDcBatteryStart(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  __int64 result; // rax

  *(_DWORD *)(a1 + 60) = -1;
  v2 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v2 = -1;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = CrmRegisterToStateMonitor(a1 + 64, 4);
  if ( (int)result >= 0 )
  {
    result = CrmRegisterToStateMonitor(a1 + 88, 5);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
