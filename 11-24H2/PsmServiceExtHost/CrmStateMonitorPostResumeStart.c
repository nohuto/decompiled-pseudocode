/*
 * XREFs of CrmStateMonitorPostResumeStart @ 0x18007A268
 * Callers:
 *     CrmStateMonitorStart @ 0x18006F1D8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D3DC (CrmStateMonitorStateSizeGet.c)
 *     CrmRegisterToStateMonitor @ 0x18002DDF0 (CrmRegisterToStateMonitor.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeStart(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  __int64 result; // rax

  v2 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v2 = 1;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = TpAllocTimer(a1 + 144, CrmStateMonitorPostResumeTimerCallback, a1, 0LL);
  if ( (int)result >= 0 )
    return CrmRegisterToStateMonitor(a1 + 64, 10);
  return result;
}
