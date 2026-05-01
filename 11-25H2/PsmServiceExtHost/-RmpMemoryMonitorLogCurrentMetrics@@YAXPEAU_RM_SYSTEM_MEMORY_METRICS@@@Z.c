/*
 * XREFs of ?RmpMemoryMonitorLogCurrentMetrics@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001F37C
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180020450 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpMemoryMonitorLogCurrentMetrics(struct _RM_SYSTEM_MEMORY_METRICS *a1)
{
  __int64 v1; // rax
  __int64 v2; // [rsp+38h] [rbp-21h] BYREF
  __int64 v3; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  void *v6; // [rsp+70h] [rbp+17h]
  int v7; // [rsp+78h] [rbp+1Fh]
  int v8; // [rsp+7Ch] [rbp+23h]
  __int64 *v9; // [rsp+80h] [rbp+27h]
  int v10; // [rsp+88h] [rbp+2Fh]
  int v11; // [rsp+8Ch] [rbp+33h]
  __int64 *v12; // [rsp+90h] [rbp+37h]
  int v13; // [rsp+98h] [rbp+3Fh]
  int v14; // [rsp+9Ch] [rbp+43h]

  if ( (unsigned int)dword_1800E7278 > 5 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
  {
    v1 = *((_QWORD *)a1 + 7);
    v14 = 0;
    v11 = 0;
    v2 = v1;
    v3 = *((_QWORD *)a1 + 2);
    v12 = &v2;
    v9 = &v3;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800E7280;
    v13 = 8;
    v10 = 8;
    EventDescriptor.Keyword = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E7280;
    v6 = &unk_1800D9113;
    v8 = 1;
    UserData.Reserved = 2;
    v7 = 69;
    EventWriteTransfer(qword_1800E7298, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
