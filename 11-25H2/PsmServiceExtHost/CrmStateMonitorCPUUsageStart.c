/*
 * XREFs of CrmStateMonitorCPUUsageStart @ 0x180079880
 * Callers:
 *     CrmStateMonitorStart @ 0x18006F408 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D45C (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x18002DE70 (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CrmStateMonitorCPUUsageStart(__int64 a1, void *a2)
{
  int v4; // ecx
  unsigned int v5; // eax
  const void *v6; // rdx
  NTSTATUS result; // eax
  _BYTE SystemInformation[64]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(SystemInformation, 0, sizeof(SystemInformation));
  v4 = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 100;
  v5 = CrmStateMonitorStateSizeGet(v4);
  memcpy_0(a2, v6, v5);
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    *(_BYTE *)(a1 + 100) = SystemInformation[56];
    result = TpAllocTimer(a1 + 88, CrmStateMonitorCPUUsageTimerCallback, a1, 0LL);
    if ( result >= 0 )
      return CrmRegisterToStateMonitor(a1 + 64, 8);
  }
  return result;
}
