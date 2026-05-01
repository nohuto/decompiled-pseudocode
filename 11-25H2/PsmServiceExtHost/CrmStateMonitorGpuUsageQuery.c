/*
 * XREFs of CrmStateMonitorGpuUsageQuery @ 0x180079F64
 * Callers:
 *     CrmStateMonitorResourceUsageQuery @ 0x18007A90C (CrmStateMonitorResourceUsageQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CrmStateMonitorGpuUsageQuery(_QWORD *a1, __int64 *a2)
{
  NTSTATUS result; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD SystemInformation[4]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD *v8; // [rsp+30h] [rbp-30h]
  int v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+3Ch] [rbp-24h]
  _DWORD v11[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]

  SystemInformation[3] = 0;
  v10 = 0;
  v12 = 0LL;
  v11[1] = -1;
  SystemInformation[0] = 45;
  SystemInformation[1] = 1802856515;
  SystemInformation[2] = 28;
  v8 = v11;
  v9 = 16;
  v11[0] = 1;
  result = NtQuerySystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    v5 = v12;
    v6 = -1LL;
    if ( *a1 != -1LL )
      v6 = v12 - *a1;
    *a2 = v6;
    result = 0;
    *a1 = v5;
  }
  return result;
}
