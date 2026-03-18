/*
 * XREFs of ACPIBuildDeviceDpc @ 0x14002A280
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x14001D5EC (ACPIPowerScheduleDpc.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140029D5C (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x14002A7D0 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessGenericList @ 0x14002AA90 (ACPIBuildProcessGenericList.c)
 *     ACPIBuildProcessSynchronizationList @ 0x14002AB4C (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildProcessGenericComplete @ 0x14002AC50 (ACPIBuildProcessGenericComplete.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 v10; // r9
  volatile signed __int32 *v11; // rbx
  char v12; // si
  volatile signed __int32 *v13; // rdi
  unsigned __int32 v14; // eax
  __int64 (__fastcall *v15)(PVOID); // rdx
  signed __int32 v16; // ebp
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rdi
  unsigned __int32 v19; // eax
  __int64 (__fastcall *v20)(PVOID); // rdx
  signed __int32 v21; // esi
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rdi
  unsigned __int32 v25; // eax
  __int64 (__fastcall *v26)(PVOID); // rdx
  signed __int32 v27; // esi
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rdi
  unsigned __int32 v30; // eax
  void (__fastcall *v31)(volatile signed __int32 *); // rdx
  signed __int32 v32; // esi
  char v33; // si
  volatile signed __int32 *v34; // rdi
  unsigned __int32 v35; // eax
  void (__fastcall *v36)(volatile signed __int32 *); // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 *v39; // rcx
  signed __int32 v40; // ebp

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = AcpiBuildDpcFlags;
  if ( (AcpiBuildDpcFlags & 2) == 0 )
    goto LABEL_28;
  do
  {
    v5 = AcpiBuildQueueList;
    AcpiBuildDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
    {
      do
      {
        v6 = *(__int64 **)v5;
        if ( (*(_DWORD *)(v5 + 20) & 0x40) == 0 )
        {
          if ( v6[1] != v5
            || (v7 = *(__int64 ***)(v5 + 8), *v7 != (__int64 *)v5)
            || (*v7 = v6, v6[1] = (__int64)v7, v8 = *(_QWORD *)(v5 + 128), v9 = *(__int64 **)(v8 + 8), *v9 != v8) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)v5 = v8;
          *(_QWORD *)(v5 + 8) = v9;
          *v9 = v5;
          *(_QWORD *)(v8 + 8) = v5;
          *(_DWORD *)(v5 + 20) &= ~0x1000u;
          *(_QWORD *)(v5 + 128) = 0LL;
        }
        v5 = (__int64)v6;
      }
      while ( v6 != &AcpiBuildQueueList );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    v11 = (volatile signed __int32 *)AcpiBuildRunMethodList;
    if ( AcpiBuildRunMethodList == &AcpiBuildRunMethodList )
    {
      v17 = (volatile signed __int32 *)AcpiBuildOperationRegionList;
      if ( AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList )
      {
        while ( v17 != (volatile signed __int32 *)&AcpiBuildOperationRegionList )
        {
          v18 = *(volatile signed __int32 **)v17;
          v19 = _InterlockedCompareExchange(v17 + 6, 1, 1);
          if ( v19 >= 4 )
LABEL_89:
            ACPIInternalError(0x102126uLL);
          v20 = AcpiBuildOperationRegionDispatch[v19];
          if ( v20 )
          {
            if ( v19 != 2 )
              *((_DWORD *)v17 + 7) = v19;
            v21 = _InterlockedCompareExchange(v17 + 6, 1, v19);
            v20((PVOID)v17);
            if ( v21 )
            {
              if ( v21 != 2 )
                continue;
            }
          }
          v17 = v18;
        }
      }
      v22 = (volatile signed __int32 *)AcpiBuildPowerResourceList;
      if ( AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList )
      {
LABEL_41:
        v23 = (volatile signed __int32 *)AcpiBuildDelayedDependencyList;
        if ( AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
        {
          while ( v23 != (volatile signed __int32 *)&AcpiBuildDelayedDependencyList )
          {
            v24 = *(volatile signed __int32 **)v23;
            v25 = _InterlockedCompareExchange(v23 + 6, 1, 1);
            if ( v25 >= 5 )
              goto LABEL_89;
            v26 = AcpiBuildDelayedDependencyDispatch[v25];
            if ( v26 )
            {
              if ( v25 != 2 )
                *((_DWORD *)v23 + 7) = v25;
              v27 = _InterlockedCompareExchange(v23 + 6, 1, v25);
              v26((PVOID)v23);
              if ( v27 )
              {
                if ( v27 != 2 )
                  continue;
              }
            }
            v23 = v24;
          }
          if ( AcpiBuildDelayedDependencyList == &AcpiBuildDelayedDependencyList
            && (AcpiOverrideAttributes & 0x80000) != 0 )
          {
            ACPIBuildSynchronizationRequestInternal(
              RootDeviceExtension,
              (__int64)ACPIBuildIssueNotifyInvalidateRelations,
              RootDeviceExtension,
              v10,
              0);
          }
        }
        if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
          ACPIBuildProcessGenericList(&AcpiBuildDeviceList, &AcpiBuildDeviceDispatch, 34LL);
        v28 = (volatile signed __int32 *)AcpiBuildThermalZoneList;
        if ( AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList )
        {
          while ( v28 != (volatile signed __int32 *)&AcpiBuildThermalZoneList )
          {
            v29 = *(volatile signed __int32 **)v28;
            v30 = _InterlockedCompareExchange(v28 + 6, 1, 1);
            if ( v30 >= 0xA )
              goto LABEL_89;
            v31 = (void (__fastcall *)(volatile signed __int32 *))*(&AcpiBuildThermalZoneDispatch + v30);
            if ( v31 )
            {
              if ( v30 != 2 )
                *((_DWORD *)v28 + 7) = v30;
              v32 = _InterlockedCompareExchange(v28 + 6, 1, v30);
              v31(v28);
              if ( v32 )
              {
                if ( v32 != 2 )
                  continue;
              }
            }
            v28 = v29;
          }
        }
        if ( (__int64 *)AcpiBuildDeviceList == &AcpiBuildDeviceList
          && AcpiBuildOperationRegionList == &AcpiBuildOperationRegionList
          && AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
          && AcpiBuildRunMethodList == &AcpiBuildRunMethodList
          && AcpiBuildThermalZoneList == &AcpiBuildThermalZoneList )
        {
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
          v37 = AcpiPowerDelayedQueueList;
          if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
          {
            v38 = qword_14008AFF8;
            v39 = (__int64 *)qword_14008B008;
            *(_QWORD *)qword_14008AFF8 = &AcpiPowerQueueList;
            qword_14008B008 = v38;
            *(_QWORD *)(v37 + 8) = v39;
            *v39 = v37;
            qword_14008AFF8 = (__int64)&AcpiPowerDelayedQueueList;
            AcpiPowerDelayedQueueList = (__int64)&AcpiPowerDelayedQueueList;
            ACPIPowerScheduleDpc();
          }
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
        }
        if ( AcpiBuildSynchronizationList != &AcpiBuildSynchronizationList )
          ACPIBuildProcessSynchronizationList();
        if ( AcpiBuildSpecialSynchronizationList != &AcpiBuildSpecialSynchronizationList )
          ACPIBuildProcessSpecialSynchronizationList();
        goto LABEL_26;
      }
      v33 = 1;
      while ( 1 )
      {
        if ( v22 == (volatile signed __int32 *)&AcpiBuildPowerResourceList )
        {
          if ( v33 )
            goto LABEL_41;
LABEL_26:
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          goto LABEL_27;
        }
        v34 = *(volatile signed __int32 **)v22;
        v35 = _InterlockedCompareExchange(v22 + 6, 1, 1);
        if ( v35 >= 7 )
          goto LABEL_89;
        v36 = (void (__fastcall *)(volatile signed __int32 *))*(&AcpiBuildPowerResourceDispatch + v35);
        if ( !v36 )
          break;
        if ( v35 != 2 )
          *((_DWORD *)v22 + 7) = v35;
        v40 = _InterlockedCompareExchange(v22 + 6, 1, v35);
        v36(v22);
        if ( !v40 || v40 == 2 )
LABEL_72:
          v22 = v34;
      }
      v33 = 0;
      goto LABEL_72;
    }
    v12 = 1;
    while ( v11 != (volatile signed __int32 *)&AcpiBuildRunMethodList )
    {
      v13 = *(volatile signed __int32 **)v11;
      v14 = _InterlockedCompareExchange(v11 + 6, 1, 1);
      if ( v14 >= 0xA )
        goto LABEL_89;
      v15 = AcpiBuildRunMethodDispatch[v14];
      if ( !v15 )
      {
        v12 = 0;
        goto LABEL_15;
      }
      if ( v14 != 2 )
        *((_DWORD *)v11 + 7) = v14;
      v16 = _InterlockedCompareExchange(v11 + 6, 1, v14);
      v15((PVOID)v11);
      if ( !v16 || v16 == 2 )
LABEL_15:
        v11 = v13;
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
    if ( v12 )
      AcpiBuildDpcFlags |= 2u;
LABEL_27:
    v4 = AcpiBuildDpcFlags;
  }
  while ( (AcpiBuildDpcFlags & 2) != 0 );
LABEL_28:
  AcpiBuildDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
