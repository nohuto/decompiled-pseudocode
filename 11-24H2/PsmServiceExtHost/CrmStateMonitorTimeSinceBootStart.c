/*
 * XREFs of CrmStateMonitorTimeSinceBootStart @ 0x18007AF54
 * Callers:
 *     CrmStateMonitorStart @ 0x18006F1D8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D3DC (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceBootStart(__int64 a1)
{
  int v2; // ecx
  unsigned int v3; // eax
  const void *v4; // rdx
  void *v5; // r9
  int v6; // edi
  __int128 v7; // kr00_16
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  _OWORD SystemInformation[3]; // [rsp+28h] [rbp-40h] BYREF

  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = *(_DWORD *)a1;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v3 = CrmStateMonitorStateSizeGet(v2);
  memcpy_0(v5, v4, v3);
  NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  v6 = TpAllocTimer(a1 + 72, CrmStateMonitorTimeSinceBootCallback, a1, 0LL);
  if ( v6 >= 0 )
  {
    v7 = SystemInformation[0];
    *(_QWORD *)(a1 + 64) = 30LL;
    if ( *((__int64 *)&v7 + 1) < (__int64)v7 + 300000000 )
      v8 = *((_QWORD *)&v7 + 1) - v7 - 300000000;
    else
      v8 = -1LL;
    v9 = *(_QWORD *)(a1 + 72);
    v11 = v8;
    TpSetTimer(v9, &v11, 0LL, 0LL);
  }
  return (unsigned int)v6;
}
