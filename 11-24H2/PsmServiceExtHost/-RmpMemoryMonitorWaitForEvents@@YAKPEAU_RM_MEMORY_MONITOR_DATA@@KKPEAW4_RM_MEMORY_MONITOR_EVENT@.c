/*
 * XREFs of ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001FBE0
 * Callers:
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x18000F808 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001F430 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180021B40 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180044FAC (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18006A9CC (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18006C4F0 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008F0DC (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorWaitForEvents(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        int a2,
        DWORD a3,
        enum _RM_MEMORY_MONITOR_EVENT *a4)
{
  void *v7; // rcx
  DWORD v8; // edi
  unsigned int v10; // r9d
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  void *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  void *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  void *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  void *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  void *v26; // rdx
  __int64 v27; // r8
  DWORD v28; // eax
  unsigned int v29; // ebx
  int v30; // ecx
  DWORD v32; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v33[3]; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR v34; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v36; // [rsp+60h] [rbp-A0h]
  __int16 v37; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v38[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  DWORD *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  _DWORD *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  DWORD *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  HANDLE Handles[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v50; // [rsp+F0h] [rbp-10h]
  __int128 v51; // [rsp+100h] [rbp+0h]

  v7 = (void *)*((_QWORD *)a1 + 1);
  *(_OWORD *)Handles = 0LL;
  v8 = 0;
  v50 = 0LL;
  v51 = 0LL;
  if ( WaitForSingleObjectEx(v7, 0, 0) )
    *((_DWORD *)a1 + 23) &= ~1u;
  v10 = 0;
  v11 = 1;
  do
  {
    if ( (v11 & a2) != 0 && (v10 || (*((_BYTE *)a1 + 92) & 1) == 0) )
    {
      v12 = v8++;
      v38[v12] = v10;
      Handles[v12] = (HANDLE)*((_QWORD *)a1 + v10 + 1);
    }
    if ( (__ROL4__(v11, 1) & a2) != 0 )
    {
      v13 = v10 + 1;
      v14 = (void *)*((_QWORD *)a1 + v13 + 1);
      v15 = v8++;
      v38[v15] = v13;
      Handles[v15] = v14;
    }
    if ( (__ROL4__(v11, 2) & a2) != 0 )
    {
      v16 = v10 + 2;
      v17 = (void *)*((_QWORD *)a1 + v16 + 1);
      v18 = v8++;
      v38[v18] = v16;
      Handles[v18] = v17;
    }
    if ( (__ROL4__(v11, 3) & a2) != 0 )
    {
      v19 = v10 + 3;
      v20 = (void *)*((_QWORD *)a1 + v19 + 1);
      v21 = v8++;
      v38[v21] = v19;
      Handles[v21] = v20;
    }
    if ( (__ROL4__(v11, 4) & a2) != 0 )
    {
      v22 = v10 + 4;
      v23 = (void *)*((_QWORD *)a1 + v22 + 1);
      v24 = v8++;
      v38[v24] = v22;
      Handles[v24] = v23;
    }
    if ( (__ROL4__(v11, 5) & a2) != 0 )
    {
      v25 = v10 + 5;
      v26 = (void *)*((_QWORD *)a1 + v25 + 1);
      v27 = v8++;
      v38[v27] = v25;
      Handles[v27] = v26;
    }
    v10 += 6;
    v11 = __ROL4__(v11, 6);
  }
  while ( v10 < 6 );
  if ( (unsigned int)dword_1800E8278 > 5 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v32 = a3;
    v36 = v38;
    v47 = &v32;
    v37 = v8;
    v46 = 4 * (unsigned int)(unsigned __int16)v8;
    *(_DWORD *)&v34.Level = 261;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v43 = (DWORD *)&v37;
    v45 = v38;
    v48 = 4LL;
    v44 = 2LL;
    *(_DWORD *)&v34.Id = 184549376;
    v34.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v40 = &unk_1800DA093;
    UserData.Reserved = 2;
    v41 = 51;
    v42 = 1;
    v33[0] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &v34, 0LL, 0LL, 5u, &UserData);
  }
  v28 = WaitForMultipleObjectsEx(v8, Handles, 0, a3, 0);
  if ( v28 >= 0x40 )
  {
    v29 = 258;
    if ( v28 != 258 )
    {
      v29 = 0;
      *(_DWORD *)a4 = v38[0];
    }
  }
  else
  {
    v29 = 0;
    v30 = v38[v28];
    *(_DWORD *)a4 = v30;
    if ( !v30 )
      *((_DWORD *)a1 + 23) |= 1u;
  }
  if ( (unsigned int)dword_1800E8278 > 5 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v33[0] = *(_DWORD *)a4;
    v32 = v29;
    v45 = v33;
    v46 = 4LL;
    v43 = &v32;
    *(_DWORD *)&EventDescriptor.Level = 517;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v44 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v40 = &unk_1800DA384;
    UserData.Reserved = 2;
    v41 = 57;
    v42 = 1;
    v33[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return v29;
}
