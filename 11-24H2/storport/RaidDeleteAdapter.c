/*
 * XREFs of RaidDeleteAdapter @ 0x1400437A8
 * Callers:
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401BB770 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaidDeleteDeferredQueue @ 0x14003A6A4 (RaidDeleteDeferredQueue.c)
 *     PortFreeRegistryBuffer @ 0x1400555BC (PortFreeRegistryBuffer.c)
 *     RaDriverDeleteDevice @ 0x140055730 (RaDriverDeleteDevice.c)
 *     StorDeleteDictionary @ 0x140055FA8 (StorDeleteDictionary.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     StorFreeEventNotificationResources @ 0x140066A8C (StorFreeEventNotificationResources.c)
 *     RaidDeleteResourceList @ 0x1401812E0 (RaidDeleteResourceList.c)
 *     RaDeleteBus @ 0x140181334 (RaDeleteBus.c)
 *     RaidDeleteDma @ 0x140183EF4 (RaidDeleteDma.c)
 *     StorFreeContiguousMemory @ 0x140184F04 (StorFreeContiguousMemory.c)
 *     RaFreeUniqueTagging @ 0x1401B1DC4 (RaFreeUniqueTagging.c)
 *     StorDlrmCleanup @ 0x1401B32A4 (StorDlrmCleanup.c)
 *     PortFreeDriverParameters @ 0x1401B35EC (PortFreeDriverParameters.c)
 *     RaDeleteMiniport @ 0x1401BBE48 (RaDeleteMiniport.c)
 */

void __fastcall RaidDeleteAdapter(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rdx
  void *v7; // rcx
  struct _UNICODE_STRING *v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  void *v13; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v14; // rcx
  void *v15; // rcx
  KIRQL v16; // bl
  void *v17; // rcx
  _DWORD *v18; // rsi
  USHORT HighestNodeNumber; // ax
  unsigned int v20; // ebx
  unsigned int v21; // ebp
  PSLIST_ENTRY i; // rax
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  signed __int32 v33[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(void **)(a1 + 6000);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49436152u);
    *(_QWORD *)(a1 + 6000) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 6160);
  if ( v3 )
  {
    v4 = *(void **)(v3 + 48);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x464D6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 48LL) = 0LL;
    }
    v5 = *(void **)(*(_QWORD *)(a1 + 6160) + 40LL);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x464D6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 40LL) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 6160);
    v7 = *(void **)(v6 + 112);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x464D6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 112LL) = 0LL;
      v6 = *(_QWORD *)(a1 + 6160);
    }
    if ( (unsigned __int8)StorIsMFNDSupported(a1, v6) )
      RtlFreeUnicodeString(v8 + 1);
    ExFreePoolWithTag(*(PVOID *)(a1 + 6160), 0x464D6152u);
    *(_QWORD *)(a1 + 6160) = 0LL;
  }
  v9 = *(void **)(a1 + 6152);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x464D6152u);
    *(_QWORD *)(a1 + 6152) = 0LL;
  }
  StorDlrmCleanup(a1);
  StorFreeEventNotificationResources(*(PVOID *)(a1 + 6208));
  v10 = *(void **)(a1 + 6144);
  *(_QWORD *)(a1 + 6208) = 0LL;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x45526152u);
    *(_QWORD *)(a1 + 6144) = 0LL;
  }
  PortFreeRegistryBuffer(a1 + 2008);
  *(_DWORD *)(a1 + 2064) = 0;
  RaidDeleteResourceList(a1 + 360);
  LOBYTE(v11) = *(_BYTE *)(a1 + 4370) == 0;
  RaDeleteMiniport(a1 + 376, v11);
  if ( *(_DWORD *)(a1 + 928) )
    StorFreeContiguousMemory(a1 + 880, a1 + 912);
  v12 = *(_QWORD *)(a1 + 4552);
  if ( v12 )
  {
    StorFreeContiguousIoResources(a1, v12);
    *(_QWORD *)(a1 + 4552) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4370) )
    RaidDeleteDma(a1 + 880);
  RaDeleteBus(a1 + 776);
  RaidDeleteDeferredQueue((union _SLIST_HEADER *)(a1 + 1008));
  RaidDeleteDeferredQueue((union _SLIST_HEADER *)(a1 + 1392));
  if ( *(_QWORD *)(a1 + 2000) )
  {
    PortFreeDriverParameters();
    *(_QWORD *)(a1 + 2000) = 0LL;
  }
  v13 = *(void **)(a1 + 4376);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x52446152u);
    *(_QWORD *)(a1 + 4376) = 0LL;
  }
  if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
    RaFreeUniqueTagging(a1);
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1976));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5544));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5728));
  RaDriverDeleteDevice(a1);
  v14 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 336);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v14 )
  {
    ExFreeCacheAwareRundownProtection(v14);
    *(_QWORD *)(a1 + 336) = 0LL;
  }
  v15 = *(void **)(a1 + 4360);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x72446152u);
    *(_QWORD *)(a1 + 4360) = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 4660) & 1) != 0 )
  {
    v16 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
    if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
    {
      g_RaidPerfRedirectGroupCount = 0;
      _InterlockedOr(v33, 0);
      ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
      ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
      g_RaidPerProcessorState = 0LL;
      g_RaidDPCRedirectionProcessors = 0LL;
    }
    KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v16);
    v17 = *(void **)(a1 + 4680);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x72446152u);
      *(_QWORD *)(a1 + 4680) = 0LL;
    }
  }
  if ( *(int *)(a1 + 4664) > 1 && *(_QWORD *)(a1 + 4672) )
  {
    v18 = 0LL;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v20 = 0;
    v21 = HighestNodeNumber + 1;
    if ( HighestNodeNumber != -1 )
    {
      do
      {
        for ( i = ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4672) + ((unsigned __int64)v20 << 6)));
              i;
              i = i->Next )
        {
          v18 = i;
          if ( !HIDWORD(i[1].Next) )
            break;
        }
        if ( !v18[5] )
          break;
        ++v20;
      }
      while ( v20 < v21 );
      ExFreePoolWithTag(v18, 0x54436152u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 4672), 0x54436152u);
    *(_QWORD *)(a1 + 4672) = 0LL;
  }
  v23 = *(void **)(a1 + 4728);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x54456152u);
    *(_QWORD *)(a1 + 4728) = 0LL;
  }
  v24 = *(void **)(a1 + 4880);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x4D566152u);
    *(_QWORD *)(a1 + 4880) = 0LL;
  }
  StorDeleteDictionary(a1 + 168);
  v25 = *(void **)(a1 + 48);
  if ( v25 )
    ExFreePoolWithTag(v25, 0x53446152u);
  v26 = *(void **)(a1 + 5384);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0x45436152u);
    *(_QWORD *)(a1 + 5384) = 0LL;
  }
  v27 = *(void **)(a1 + 5080);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0x54456152u);
    *(_QWORD *)(a1 + 5080) = 0LL;
  }
  *(_DWORD *)(a1 + 4928) = -1;
  v28 = *(void **)(a1 + 6056);
  *(_DWORD *)(a1 + 4932) = 0;
  *(_QWORD *)(a1 + 4936) = 0LL;
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0x43546152u);
    *(_QWORD *)(a1 + 6056) = 0LL;
  }
  v29 = *(void **)(a1 + 6064);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0x43546152u);
    *(_QWORD *)(a1 + 6064) = 0LL;
  }
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v30 = *(void **)(a1 + 5616);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0x72436152u);
      *(_QWORD *)(a1 + 5616) = 0LL;
    }
    v31 = *(void **)(a1 + 5624);
    if ( v31 )
    {
      ExFreePoolWithTag(v31, 0x72436152u);
      *(_QWORD *)(a1 + 5624) = 0LL;
    }
  }
  v32 = *(void **)(a1 + 6200);
  if ( v32 )
  {
    IoUnregisterPlugPlayNotificationEx(v32);
    *(_QWORD *)(a1 + 6200) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
