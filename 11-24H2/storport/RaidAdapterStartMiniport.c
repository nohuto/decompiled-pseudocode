/*
 * XREFs of RaidAdapterStartMiniport @ 0x1400430C0
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     InitializeBusesWithVmLunsBitmap @ 0x14000E3DC (InitializeBusesWithVmLunsBitmap.c)
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportFindAdapter @ 0x1400370D4 (RaCallMiniportFindAdapter.c)
 *     RaCallMiniportHwInitialize @ 0x14003C630 (RaCallMiniportHwInitialize.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14003D3C0 (RaCallMiniportAdapterControlSafe.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x14003D40C (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterHealthEvents @ 0x14003D77C (StorEnableAdapterHealthEvents.c)
 *     RaidInitializePerfOptsPassive @ 0x140043D90 (RaidInitializePerfOptsPassive.c)
 *     StorEnableAdapterOperationalEvents @ 0x140055888 (StorEnableAdapterOperationalEvents.c)
 *     StorEnableAdapterEtwTracing @ 0x140055BB0 (StorEnableAdapterEtwTracing.c)
 *     RaidAdapterConnectInterrupt @ 0x140059AAC (RaidAdapterConnectInterrupt.c)
 *     RaidAdapterStartRegistryWatch @ 0x1400621DC (RaidAdapterStartRegistryWatch.c)
 *     RaidPreInitializePerfOpts @ 0x1400662FC (RaidPreInitializePerfOpts.c)
 *     StorLogMFNDCapability @ 0x140066C1C (StorLogMFNDCapability.c)
 *     StorValidateMFNDCapabilities @ 0x140067C90 (StorValidateMFNDCapabilities.c)
 *     StorCheckForNvmeTimeoutUpdates @ 0x14008EF10 (StorCheckForNvmeTimeoutUpdates.c)
 *     StorInitializeMFND @ 0x1400C445C (StorInitializeMFND.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     RaInitializeMiniport @ 0x140184AC8 (RaInitializeMiniport.c)
 *     StorGetMFNDCapabilities @ 0x14018E4C4 (StorGetMFNDCapabilities.c)
 *     RaInitializeUniqueTagging @ 0x1401B1E5C (RaInitializeUniqueTagging.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 */

__int64 __fastcall RaidAdapterStartMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  char **v5; // r14
  signed int NVMeIdentifyInfo; // edi
  void *v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  char v10; // cl
  int v11; // edx
  int v12; // eax
  KIRQL v13; // al
  KIRQL v14; // bp
  _BYTE *v15; // rsi
  __int64 (__fastcall *v16)(__int64); // rax
  char v17; // al
  PVOID *v18; // rsi
  void *Pool; // rax
  char v20; // si
  _OWORD *v21; // rdi
  _OWORD *v22; // rdx
  int v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+28h] [rbp-70h]
  unsigned int v25; // [rsp+A8h] [rbp+10h] BYREF
  _OWORD *v26; // [rsp+B0h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225486LL;
  v5 = (char **)(a1 + 376);
  NVMeIdentifyInfo = RaInitializeMiniport(a1 + 376, a2, a3, a1 + 360);
  if ( NVMeIdentifyInfo < 0 )
  {
    *(_DWORD *)(a1 + 6188) = 5;
    return (unsigned int)NVMeIdentifyInfo;
  }
  if ( EnableRegistryWatch && !*(_QWORD *)(a1 + 6048) )
    RaidAdapterStartRegistryWatch(a1);
  v7 = *(void **)(a1 + 2000);
  *(_BYTE *)(a1 + 4370) = 1;
  v8 = RaCallMiniportFindAdapter(v5, v7);
  *(_BYTE *)(a1 + 108) |= 0x40u;
  NVMeIdentifyInfo = v8;
  if ( v8 < 0 )
  {
    *(_DWORD *)(a1 + 6188) = 6;
    return (unsigned int)NVMeIdentifyInfo;
  }
  LOBYTE(v9) = StorEtwLoggingEnabled;
  StorEnableAdapterEtwTracing(a1, v9);
  StorEnableAdapterOperationalEvents(a1);
  StorEnableAdapterHealthEvents(a1);
  StorEnableAdapterDiagnosticEvents(a1);
  if ( !*(_DWORD *)(a1 + 928) )
  {
    if ( *(_BYTE *)(a1 + 528) == 2 )
    {
      if ( *(_QWORD *)(a1 + 4288) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4288) = -1LL;
      *(_QWORD *)(a1 + 4304) = 0x100000000LL;
      goto LABEL_19;
    }
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 528) - 3 <= 1 )
    {
      if ( *(_QWORD *)(a1 + 4288) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4288) = -1LL;
      *(_QWORD *)(a1 + 4304) = 0LL;
LABEL_19:
      *(_QWORD *)(a1 + 4320) = -1LL;
    }
  }
  v10 = *(_BYTE *)(a1 + 580);
  v11 = *(_DWORD *)(a1 + 532);
  *(_DWORD *)(a1 + 872) = v11;
  *(_BYTE *)(a1 + 4370) = v10 == 0;
  if ( v10 )
  {
    v14 = 0;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 544);
    *(_BYTE *)(a1 + 107) &= ~1u;
    *(_DWORD *)(a1 + 4336) = v12;
    if ( v12 )
    {
      *(_BYTE *)(a1 + 4368) = 1;
      if ( !v11 )
        *(_DWORD *)(a1 + 4336) = 1;
    }
    NVMeIdentifyInfo = RaidAdapterConnectInterrupt(a1);
    if ( NVMeIdentifyInfo < 0 )
    {
      *(_DWORD *)(a1 + 6188) = 7;
      return (unsigned int)NVMeIdentifyInfo;
    }
    NVMeIdentifyInfo = RaidPreInitializePerfOpts(a1);
    if ( NVMeIdentifyInfo < 0 )
    {
      *(_DWORD *)(a1 + 6188) = 8;
      return (unsigned int)NVMeIdentifyInfo;
    }
    v13 = RaidAdapterAcquireInterruptLock(a1);
    *(_BYTE *)(a1 + 107) |= 1u;
    v14 = v13;
  }
  v15 = (_BYTE *)(a1 + 104);
  *(_BYTE *)(a1 + 104) |= 0x10u;
  NVMeIdentifyInfo = RaCallMiniportHwInitialize((__int64)v5);
  if ( NVMeIdentifyInfo >= 0 )
    *v15 |= 1u;
  if ( *(_BYTE *)(a1 + 4370) )
    RaidAdapterReleaseInterruptLock(a1, v14);
  if ( NVMeIdentifyInfo >= 0 )
  {
    v16 = *(__int64 (__fastcall **)(__int64))(a1 + 4328);
    if ( !v16 || (v17 = v16(*(_QWORD *)(a1 + 616) + 16LL), NVMeIdentifyInfo = v17 == 0 ? 0xC0000001 : 0, v17) )
    {
      *(_BYTE *)(a1 + 104) = *v15 & 0xEF;
      RaidInitializePerfOptsPassive(a1);
      RaCallMiniportAdapterControlSafe(a1 + 376, 23);
      if ( *(char *)(a1 + 110) >= 0
        && (*(_DWORD *)(a1 + 604) & 0x80u) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 188LL) & 2) != 0 )
      {
        RaInitializeUniqueTagging(a1);
      }
      if ( *(int *)(*(_QWORD *)(a1 + 608) + 184LL) < 0 )
      {
        StorCheckForNvmeTimeoutUpdates(a1);
        v18 = (PVOID *)(a1 + 6000);
        if ( *(char *)(a1 + 110) < 0 && (Pool = *v18) != 0LL
          || (Pool = (void *)RaidAllocatePool(64LL, 4096LL, 1229152594LL, *(_QWORD *)(a1 + 8)), (*v18 = Pool) != 0LL) )
        {
          NVMeIdentifyInfo = StorGetNVMeIdentifyInfo(a1, 0, 0, 1, v23, v24, 0, Pool);
          if ( NVMeIdentifyInfo < 0 )
          {
            *(_BYTE *)(a1 + 112) |= 8u;
            if ( *v18 )
            {
              ExFreePoolWithTag(*v18, 0x49436152u);
              *v18 = 0LL;
            }
            *(_DWORD *)(a1 + 6188) = 17;
            return (unsigned int)NVMeIdentifyInfo;
          }
        }
        if ( MFNDEnabled )
        {
          v26 = 0LL;
          v25 = 0;
          v20 = 0;
          if ( (int)StorGetMFNDCapabilities(a1, &v26, &v25) >= 0 )
          {
            v21 = v26;
            if ( v26 )
            {
              if ( (unsigned __int8)StorValidateMFNDCapabilities(v26, *(_QWORD *)(a1 + 6152)) )
              {
                if ( v22 )
                {
                  *v22 = *v21;
                  v22[1] = v21[1];
                  v22[2] = v21[2];
                  v22[3] = v21[3];
                  v22[4] = v21[4];
                  v22[5] = v21[5];
                  v22[6] = v21[6];
                  v22[7] = v21[7];
                }
                else
                {
                  *(_QWORD *)(a1 + 6152) = v21;
                  v21 = 0LL;
                }
                StorInitializeMFND(a1);
                *(_BYTE *)(a1 + 111) |= 1u;
              }
              else
              {
                v20 = 1;
                if ( v22 )
                {
                  *v22 = *v21;
                  v22[1] = v21[1];
                  v22[2] = v21[2];
                  v22[3] = v21[3];
                  v22[4] = v21[4];
                  v22[5] = v21[5];
                  v22[6] = v21[6];
                  v22[7] = v21[7];
                }
                else
                {
                  *(_QWORD *)(a1 + 6152) = v21;
                  v21 = 0LL;
                }
                *(_BYTE *)(a1 + 111) &= ~1u;
              }
              LOBYTE(v22) = v20;
              StorLogMFNDCapability(a1, v22, v25);
              if ( v21 )
                ExFreePoolWithTag(v21, 0x464D6152u);
            }
          }
        }
      }
      NVMeIdentifyInfo = InitializeBusesWithVmLunsBitmap(a1);
      if ( NVMeIdentifyInfo < 0 )
        *(_DWORD *)(a1 + 6188) = 11;
      return (unsigned int)NVMeIdentifyInfo;
    }
    *(_DWORD *)(a1 + 6188) = 10;
  }
  else
  {
    *(_DWORD *)(a1 + 6188) = 9;
  }
  return (unsigned int)NVMeIdentifyInfo;
}
