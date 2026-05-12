/*
 * XREFs of StorRemoveIoGatewayItem @ 0x140050F10
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 * Callees:
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     StorIsIoGatewayPaused @ 0x140025B10 (StorIsIoGatewayPaused.c)
 *     RaFreeIoResource @ 0x140029070 (RaFreeIoResource.c)
 *     StorGetOutstandingIoCount @ 0x140055E34 (StorGetOutstandingIoCount.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x140055F24 (RaidGetQosEntryForDeviceEntry.c)
 *     StorSetAllIoGatewayNotBusy @ 0x1400A7088 (StorSetAllIoGatewayNotBusy.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall StorRemoveIoGatewayItem(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  bool v3; // bp
  char v4; // r13
  char v5; // r12
  struct _KEVENT *v8; // r15
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  union _SLIST_HEADER *v18; // rcx
  struct _SLIST_ENTRY *v19; // rdx
  bool v20; // zf
  __int64 v21; // rcx
  unsigned int OutstandingIoCount; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // edx
  unsigned int v30; // eax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rdx
  char v35; // cl
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v8 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *(_QWORD *)(v2 - 16);
  if ( a2 )
    *a2 = 0LL;
  if ( FeatureFixKcsanRacyAccessV2 )
  {
    v10 = *(_DWORD *)(v9 + 32);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v9 + 192)) > v10
      || !*(_DWORD *)(v9 + 40)
      || *(_DWORD *)(*(_QWORD *)(v9 + 48) + 992LL) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 48) + 992LL) == 2 )
      {
        v11 = *(_DWORD *)(*(_QWORD *)(v9 + 48) + 984LL);
        if ( (unsigned int)StorGetOutstandingIoCount(*(_QWORD *)(v9 + 48)) <= v11 )
        {
          StorSetAllIoGatewayNotBusy(*(_QWORD *)(v9 + 48), v12, v13);
          v3 = 1;
        }
      }
    }
    else
    {
      if ( *(_DWORD *)(v9 + 40) )
      {
        *(_DWORD *)(v9 + 32) = *(_DWORD *)(v9 + 28);
        *(_DWORD *)(v9 + 40) = 0;
      }
      v3 = 1;
    }
    if ( !*(_DWORD *)(v9 + 192) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9, &LockHandle);
      if ( (*(_QWORD *)(v9 + 200) || *(_BYTE *)(v9 + 208)) && !*(_DWORD *)(v9 + 192) )
      {
        v8 = *(struct _KEVENT **)(v9 + 200);
        v4 = *(_BYTE *)(v9 + 208);
        *(_QWORD *)(v9 + 200) = 0LL;
        *(_BYTE *)(v9 + 208) = 0;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    if ( *(_DWORD *)(v9 + 24) && *(_DWORD *)(v9 + 40) != 1850304845 && !*(_DWORD *)(*(_QWORD *)(v9 + 48) + 988LL) && a2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9, &LockHandle);
      if ( *(_DWORD *)(v9 + 40) != 1850304845 && !StorIsIoGatewayPaused(v9) && *(_DWORD *)(v9 + 24) )
      {
        v14 = *(_QWORD **)(v9 + 8);
        v15 = (_QWORD *)(v9 + 8);
        if ( v14[1] != v9 + 8 )
          goto LABEL_70;
        v16 = *v14;
        if ( *(_QWORD **)(*v14 + 8LL) != v14 )
          goto LABEL_70;
        *v15 = v16;
        *(_QWORD *)(v16 + 8) = v15;
        *a2 = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 192));
        if ( *(_DWORD *)(v9 + 192) <= *(_DWORD *)(v9 + 36) )
          v17 = *(_DWORD *)(v9 + 36);
        else
          v17 = *(_DWORD *)(v9 + 192);
        *(_DWORD *)(v9 + 36) = v17;
        if ( *(_DWORD *)(v9 + 192) == *(_DWORD *)(v9 + 28) )
        {
          *(_DWORD *)(v9 + 40) = 1631805773;
          v3 = 0;
        }
        goto LABEL_64;
      }
      goto LABEL_71;
    }
    v18 = (union _SLIST_HEADER *)(v9 + 64);
    v19 = (struct _SLIST_ENTRY *)(*(_QWORD *)(a1 + 16) - 48LL);
    v20 = *(_DWORD *)(v9 + 128) == 0;
    goto LABEL_74;
  }
  if ( (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 192)) > *(_DWORD *)(v9 + 32)
    || !*(_DWORD *)(v9 + 40)
    || *(_DWORD *)(*(_QWORD *)(v9 + 48) + 992LL) )
  {
    v21 = *(_QWORD *)(v9 + 48);
    if ( *(_DWORD *)(v21 + 992) != 2 )
      goto LABEL_44;
    OutstandingIoCount = StorGetOutstandingIoCount(v21);
    v25 = *(_QWORD *)(v9 + 48);
    if ( OutstandingIoCount > *(_DWORD *)(v25 + 984) )
      goto LABEL_44;
    StorSetAllIoGatewayNotBusy(v25, v23, v24);
  }
  else if ( *(_DWORD *)(v9 + 40) )
  {
    *(_DWORD *)(v9 + 32) = *(_DWORD *)(v9 + 28);
    *(_DWORD *)(v9 + 40) = 0;
  }
  v3 = 1;
LABEL_44:
  if ( !*(_DWORD *)(v9 + 192) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9, &LockHandle);
    if ( (*(_QWORD *)(v9 + 200) || *(_BYTE *)(v9 + 208)) && !*(_DWORD *)(v9 + 192) )
    {
      v4 = *(_BYTE *)(v9 + 208);
      v8 = *(struct _KEVENT **)(v9 + 200);
      *(_BYTE *)(v9 + 208) = 0;
      *(_QWORD *)(v9 + 200) = 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( *(_DWORD *)(v9 + 24) && *(_DWORD *)(v9 + 40) != 1850304845 && !*(_DWORD *)(*(_QWORD *)(v9 + 48) + 988LL) && a2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9, &LockHandle);
    if ( *(_DWORD *)(v9 + 40) != 1850304845 && !StorIsIoGatewayPaused(v9) && *(_DWORD *)(v9 + 24) )
    {
      v26 = *(_QWORD **)(v9 + 8);
      v27 = (_QWORD *)(v9 + 8);
      if ( v26[1] != v9 + 8 )
        goto LABEL_70;
      v28 = *v26;
      if ( *(_QWORD **)(*v26 + 8LL) != v26 )
        goto LABEL_70;
      *v27 = v28;
      *(_QWORD *)(v28 + 8) = v27;
      *a2 = v26;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 192));
      v29 = *(_DWORD *)(v9 + 192);
      v30 = v29;
      if ( v29 <= *(_DWORD *)(v9 + 36) )
        v30 = *(_DWORD *)(v9 + 36);
      *(_DWORD *)(v9 + 36) = v30;
      if ( v29 == *(_DWORD *)(v9 + 28) )
      {
        *(_DWORD *)(v9 + 40) = 1631805773;
        v3 = 0;
      }
      if ( !FeatureFixKcsanRacyAccess )
      {
        --*(_DWORD *)(v9 + 24);
        goto LABEL_66;
      }
LABEL_64:
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 24));
LABEL_66:
      if ( (*(_BYTE *)(*a2 + 22LL) & 0x20) == 0 )
      {
LABEL_72:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_77:
        if ( *a2 )
        {
          RaidZeroXrb(
            *(_QWORD *)(a1 + 16),
            v34,
            *(_DWORD *)(*(_QWORD *)(a1 + 16) + 744LL),
            *(void **)(*(_QWORD *)(a1 + 16) + 760LL));
          v5 = 1;
        }
        goto LABEL_79;
      }
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(*a2);
      v32 = *QosEntryForDeviceEntry;
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
      {
        v33 = (_QWORD *)QosEntryForDeviceEntry[1];
        if ( (_QWORD *)*v33 == QosEntryForDeviceEntry )
        {
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
          goto LABEL_72;
        }
      }
LABEL_70:
      __fastfail(3u);
    }
LABEL_71:
    RaFreeIoResource(v9 + 64, (struct _SLIST_ENTRY *)(*(_QWORD *)(a1 + 16) - 48LL));
    goto LABEL_72;
  }
  v18 = (union _SLIST_HEADER *)(v9 + 64);
  v19 = (struct _SLIST_ENTRY *)(*(_QWORD *)(a1 + 16) - 48LL);
  v20 = *(_DWORD *)(v9 + 128) == 0;
LABEL_74:
  if ( !v20 )
    v18 = *(union _SLIST_HEADER **)(v18->Alignment + 8LL * LODWORD(v19->Next));
  ExpInterlockedPushEntrySList(v18, v19);
  if ( a2 )
    goto LABEL_77;
LABEL_79:
  v35 = *(_BYTE *)(*(_QWORD *)(v9 + 48) + 112LL);
  if ( FeatureFixKcsanRacyAccessV2 )
  {
    if ( (v35 & 4) != 0 && !v5 && !v3 && *(_DWORD *)(v9 + 24) && !*(_DWORD *)(v9 + 192) )
    {
      if ( *(_DWORD *)(v9 + 40) == 1699901262 )
      {
        *(_DWORD *)(v9 + 40) = 0;
        v3 = 1;
      }
      else
      {
        v3 = *(_DWORD *)(v9 + 40) == 0;
      }
    }
  }
  else if ( (v35 & 4) != 0 && !v5 && !v3 && *(_DWORD *)(v9 + 24) && !*(_DWORD *)(v9 + 192) )
  {
    if ( *(_DWORD *)(v9 + 40) == 1699901262 )
    {
      *(_DWORD *)(v9 + 40) = 0;
      v3 = 1;
    }
    else
    {
      v3 = *(_DWORD *)(v9 + 40) == 0;
    }
  }
  if ( v8 )
  {
    v36 = *(_QWORD *)(v9 + 48);
    v37 = (unsigned int)(*(_DWORD *)(v9 + 284) + 1);
    if ( (unsigned int)v37 < *(_DWORD *)(v36 + 968) )
    {
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * v37 + *(_QWORD *)(v36 + 960)), &LockHandle);
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 320 * v37 + 192),
               0,
               0) )
        {
          break;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v36 = *(_QWORD *)(v9 + 48);
        v37 = (unsigned int)(v37 + 1);
        if ( (unsigned int)v37 >= *(_DWORD *)(v36 + 968) )
          goto LABEL_102;
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 320 * v37 + 200) = v8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
LABEL_102:
    if ( (unsigned int)v37 >= *(_DWORD *)(*(_QWORD *)(v9 + 48) + 968LL) )
      KeSetEvent(v8, 0, 0);
  }
  if ( v4 )
  {
    v38 = *(_QWORD *)(v9 + 48);
    v39 = (unsigned int)(*(_DWORD *)(v9 + 284) + 1);
    if ( (unsigned int)v39 < *(_DWORD *)(v38 + 968) )
    {
      while ( 1 )
      {
        v40 = 320 * v39;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * v39 + *(_QWORD *)(v38 + 960)), &LockHandle);
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 320 * v39 + 192),
               0,
               0) )
        {
          break;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v38 = *(_QWORD *)(v9 + 48);
        v39 = (unsigned int)(v39 + 1);
        if ( (unsigned int)v39 >= *(_DWORD *)(v38 + 968) )
          goto LABEL_110;
      }
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v40 + 208) = 1;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v40 + 224) = *(_QWORD *)(v9 + 224);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v40 + 216) = *(_QWORD *)(v9 + 216);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v40 + 232) = *(_QWORD *)(v9 + 232);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + v40 + 240) = *(_QWORD *)(v9 + 240);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
LABEL_110:
    v41 = *(_QWORD *)(v9 + 48);
    if ( (unsigned int)v39 >= *(_DWORD *)(v41 + 968) )
    {
      v42 = *(_QWORD *)(v41 + 960);
      if ( FeatureFixKcsanRacyAccessV2 )
      {
        if ( *(_BYTE *)(v42 + 209) )
        {
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 224LL) = *(_QWORD *)(v9 + 224);
LABEL_119:
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 216LL) = *(_QWORD *)(v9 + 216);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 232LL) = *(_QWORD *)(v9 + 232);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 240LL) = *(_QWORD *)(v9 + 240);
          IoQueueWorkItem(
            *(PIO_WORKITEM *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 960LL) + 312LL),
            GatewayWaitForForwardIo,
            DelayedWorkQueue,
            *(PVOID *)(v9 + 48));
          return v3;
        }
        v43 = *(_QWORD *)(v9 + 224);
      }
      else
      {
        v43 = *(_QWORD *)(v9 + 224);
        if ( *(_BYTE *)(v42 + 209) )
        {
          *(_QWORD *)(v42 + 224) = v43;
          goto LABEL_119;
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v9 + 240))(*(_QWORD *)(v9 + 232), *(_QWORD *)(v9 + 216), v43);
    }
  }
  return v3;
}
