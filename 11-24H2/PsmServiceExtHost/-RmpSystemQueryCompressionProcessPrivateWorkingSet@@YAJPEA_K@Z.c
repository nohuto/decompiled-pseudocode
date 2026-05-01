/*
 * XREFs of ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x18004524C
 * Callers:
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180044FAC (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemQueryCompressionProcessPrivateWorkingSet(unsigned __int64 *a1)
{
  NTSTATUS result; // eax
  _DWORD SystemInformation[2]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD *v4; // [rsp+28h] [rbp-48h]
  int v5; // [rsp+30h] [rbp-40h]
  int v6; // [rsp+34h] [rbp-3Ch]
  _OWORD v7[3]; // [rsp+38h] [rbp-38h] BYREF

  v6 = 0;
  SystemInformation[0] = 1;
  SystemInformation[1] = 22;
  v4 = v7;
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 4;
  v5 = 48;
  result = NtQuerySystemInformation(
             SystemVerifierFaultsInformation|SystemLocksInformation,
             SystemInformation,
             0x18u,
             0LL);
  if ( result >= 0 )
  {
    *a1 = *((_QWORD *)&v7[0] + 1);
    return 0;
  }
  return result;
}
