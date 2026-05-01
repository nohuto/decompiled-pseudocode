/*
 * XREFs of CrmStateMonitorResourceUsageInitialize @ 0x18007A650
 * Callers:
 *     CrmStateMonitorInitialize @ 0x18006EC00 (CrmStateMonitorInitialize.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 (__fastcall *__fastcall CrmStateMonitorResourceUsageInitialize(__int64 a1))()
{
  __int64 (__fastcall *result)(); // rax

  result = (__int64 (__fastcall *)())memset_0((void *)(a1 + 56), 0, 0x48uLL);
  if ( *(_DWORD *)a1 == 29 )
  {
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = CrmStateMonitorResourceUsageLocalPollCSCallback;
  }
  else
  {
    if ( *(_DWORD *)a1 != 43 )
      return result;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = CrmStateMonitorResourceUsageIsolatedPollCSCallback;
  }
  *(_QWORD *)(a1 + 64) = result;
  return result;
}
