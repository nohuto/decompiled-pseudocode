/*
 * XREFs of ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085754
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180077910 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800811A8 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180086958 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180088914 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008911C (-RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180089EC8 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18008A7F4 (-RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CON.c)
 */

__int64 __fastcall RmpAllocateAllModuleState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  unsigned int v4; // ebx
  int ModuleState; // r8d
  DWORD CurrentProcessId; // eax
  int v7; // eax
  struct ExecutionModel::ResourceManager **v8; // r9
  int v9; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]
  __int128 v17; // [rsp+50h] [rbp-10h]
  DWORD cbSid; // [rsp+90h] [rbp+30h] BYREF

  v4 = 0;
  ModuleState = RmpActivityHostAllocateModuleState(a2);
  if ( ModuleState >= 0 )
  {
    ModuleState = RmpCpuSetManagerAllocateState(a2);
    if ( ModuleState >= 0 )
    {
      ModuleState = RmpEnforcerContextAllocateState(a1, a2);
      if ( ModuleState >= 0 )
      {
        CurrentProcessId = GetCurrentProcessId();
        ModuleState = RmpCpuSetManagerCreateClientContext(
                        (struct _RM_CPU_SET_MANAGER *)(*((_QWORD *)a2 + 262) + 680LL),
                        CurrentProcessId,
                        (struct _RM_CPU_SET_CLIENT_CONTEXT **)a2 + 267);
        if ( ModuleState >= 0 )
          ModuleState = TpAllocWork((char *)a2 + 2160, RmpGameModePolicyWorker, (char *)a2 + 2096, 0LL);
        if ( ModuleState >= 0 )
        {
          v12[1] = 0;
          v16 = 0;
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartition0");
          v12[0] = 48;
          p_DestinationString = &DestinationString;
          v13 = 0LL;
          v15 = 64;
          v17 = 0LL;
          ModuleState = NtOpenPartition((char *)a2 + 360, 1LL, v12);
          if ( ModuleState >= 0 )
          {
            ModuleState = HampManagerAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2248));
            if ( ModuleState >= 0 )
            {
              v7 = TpAllocTimer((char *)a2 + 560, RmpTelemetryTimerCallback, a2, (char *)a2 + 3224);
              ModuleState = 0;
              if ( v7 < 0 )
                ModuleState = v7;
              if ( ModuleState >= 0 )
              {
                cbSid = 68;
                if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)a2 + 3460, &cbSid) )
                {
                  if ( !a1 )
                    goto LABEL_18;
                  v9 = TpAllocWork(
                         (char *)a1 + 264,
                         ModernResourceEnforcer::NotificationWorkCallback,
                         a1,
                         (char *)a2 + 3224);
                  ModuleState = 0;
                  if ( v9 < 0 )
                    ModuleState = v9;
                  if ( ModuleState >= 0 )
                  {
LABEL_18:
                    if ( (int)ExecutionModel::CreateResourceManager(
                                a2,
                                a1,
                                (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 3536),
                                v8) < 0 )
                      return (unsigned int)-1073741823;
                    return v4;
                  }
                }
                else
                {
                  return (unsigned int)-1073741823;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)ModuleState;
}
