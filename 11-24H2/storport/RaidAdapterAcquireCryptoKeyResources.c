/*
 * XREFs of RaidAdapterAcquireCryptoKeyResources @ 0x14004537C
 * Callers:
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterGetCryptoKeyIndex @ 0x14006A004 (RaidAdapterGetCryptoKeyIndex.c)
 */

__int64 __fastcall RaidAdapterAcquireCryptoKeyResources(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int AdapterCryptoEngineExtension; // ebx
  int *v6; // r15
  int IsEnabledDeviceUsageNoInline; // eax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int CryptoKeyIndex; // eax
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int i; // ebp
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v20; // r9
  struct _IO_WORKITEM *v21; // rbx
  __int64 Pool; // rax
  void *v23; // r13
  unsigned __int64 v24; // rbx
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // r9
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // ecx
  bool v31; // zf
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  int v34; // ecx
  __int64 *v36; // [rsp+60h] [rbp+8h] BYREF
  PIO_WORKITEM IoWorkItem; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 792);
  v36 = 0LL;
  *(_OWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  AdapterCryptoEngineExtension = IoGetAdapterCryptoEngineExtension(*(_QWORD *)(a2 + 160), &v36);
  if ( (AdapterCryptoEngineExtension & 0x80000000) != 0 )
    return 0;
  if ( !v36 )
    return 0;
  v6 = (int *)v36[1];
  if ( !v6 )
    return 0;
  IsEnabledDeviceUsageNoInline = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
  v8 = *v6;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !v8 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v6[1] < 0x48 )
      return (unsigned int)-1073741811;
    v12 = *(_QWORD *)(a1 + 5616);
    v13 = (unsigned int)v6[2];
    if ( (unsigned int)v13 >= *(unsigned __int16 *)(v12 + 2) )
      return (unsigned int)-1073741811;
    v11 = *(_DWORD *)(v12 + 16 * v13 + 20);
  }
  else
  {
    if ( v8 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v6[1] < 0x48 )
      return (unsigned int)-1073741811;
    v9 = *(_QWORD *)(a1 + 5624);
    v10 = (unsigned int)v6[2];
    if ( (unsigned int)v10 >= *(unsigned __int16 *)(v9 + 10) )
      return (unsigned int)-1073741811;
    v11 = *(_DWORD *)(28 * v10 + v9 + 24);
  }
  if ( v6[3] != v11 )
    return (unsigned int)-1073741811;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
  CryptoKeyIndex = RaidAdapterGetCryptoKeyIndex(a1, v6 + 6, 0LL);
  if ( CryptoKeyIndex != *(_DWORD *)(a1 + 5632) )
  {
    v32 = *(_QWORD *)(a1 + 5640) + ((unsigned __int64)CryptoKeyIndex << 6);
    v33 = *v36;
    v34 = *(_DWORD *)v32;
    **(_DWORD **)(a2 + 792) = 1;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 4LL) = 24;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 8LL) = v34;
    *(_QWORD *)(*(_QWORD *)(a2 + 792) + 16LL) = v33;
    _InterlockedAdd((volatile signed __int32 *)(v32 + 40), 1u);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
    return AdapterCryptoEngineExtension;
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
  LOBYTE(v15) = 1;
  v16 = RaidAdapterGetCryptoKeyIndex(a1, v6 + 6, v15);
  v17 = *(_DWORD *)(a1 + 5632);
  if ( v16 != v17 )
  {
    v27 = *(_QWORD *)(a1 + 5640);
    v28 = (unsigned __int64)v16 << 6;
    v29 = *v36;
    v30 = *(_DWORD *)(v28 + v27);
    v31 = *(_DWORD *)(v28 + v27 + 44) == 1;
    **(_DWORD **)(a2 + 792) = 1;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 4LL) = 24;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 8LL) = v30;
    *(_QWORD *)(*(_QWORD *)(a2 + 792) + 16LL) = v29;
    if ( !v31 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v28 + v27 + 40), 1u);
      goto LABEL_27;
    }
    _InterlockedAdd((volatile signed __int32 *)(v28 + v27 + 40), 1u);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v28 + v27 + 48), (PSLIST_ENTRY)(a2 + 32));
LABEL_31:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
    return 259;
  }
  if ( *(_BYTE *)(a1 + 5636) )
    goto LABEL_22;
  for ( i = 0; i < v17; ++i )
  {
    if ( !*(_DWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)(a1 + 5640) + 44) )
      break;
  }
  if ( i == v17 )
  {
LABEL_22:
    *(_BYTE *)(a1 + 5636) = 1;
    i = 0;
    if ( v17 )
    {
      do
      {
        if ( !*(_DWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)(a1 + 5640) + 40) )
          break;
        ++i;
      }
      while ( i < *(_DWORD *)(a1 + 5632) );
    }
  }
  if ( i == *(_DWORD *)(a1 + 5632) )
  {
    AdapterCryptoEngineExtension = -1073741823;
LABEL_27:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
    return AdapterCryptoEngineExtension;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  v20 = *(_QWORD *)(a1 + 8);
  IoWorkItem = WorkItem;
  v21 = WorkItem;
  Pool = RaidAllocatePool(64LL, 56LL, 1917018450LL, v20);
  v23 = (void *)Pool;
  if ( v21 && Pool )
  {
    v24 = *(_QWORD *)(a1 + 5640) + ((unsigned __int64)i << 6);
    *(_DWORD *)(v24 + 36) = v6[2];
    *(_OWORD *)(v24 + 4) = *(_OWORD *)(v6 + 6);
    *(_OWORD *)(v24 + 20) = *(_OWORD *)(v6 + 10);
    *(_DWORD *)(v24 + 44) = 1;
    *(_QWORD *)Pool = a1;
    *(_DWORD *)(Pool + 8) = i;
    *(_DWORD *)(Pool + 16) = 2621441;
    *(_DWORD *)(Pool + 20) = i;
    *(_DWORD *)(Pool + 24) = v6[2];
    *(_DWORD *)(Pool + 28) = v6[4];
    *(_DWORD *)(Pool + 32) = v6[5];
    *(_QWORD *)(Pool + 40) = *((_QWORD *)v6 + 7);
    *(_QWORD *)(Pool + 48) = *((_QWORD *)v6 + 8);
    v25 = *(_DWORD *)v24;
    v26 = *v36;
    **(_DWORD **)(a2 + 792) = 1;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 4LL) = 24;
    *(_DWORD *)(*(_QWORD *)(a2 + 792) + 8LL) = v25;
    *(_QWORD *)(*(_QWORD *)(a2 + 792) + 16LL) = v26;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v24 + 48), (PSLIST_ENTRY)(a2 + 32));
    _InterlockedAdd((volatile signed __int32 *)(v24 + 40), 1u);
    IoQueueWorkItemEx(IoWorkItem, RaidAdapterProgramCryptoKeyRoutine, CriticalWorkQueue, v23);
    goto LABEL_31;
  }
  AdapterCryptoEngineExtension = -1073741670;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5648));
  if ( v23 )
    ExFreePoolWithTag(v23, 0x72436152u);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  return AdapterCryptoEngineExtension;
}
