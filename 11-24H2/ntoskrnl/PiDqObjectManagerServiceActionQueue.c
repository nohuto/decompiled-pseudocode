/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x1408D07C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1404C2604 (McTemplateK0p_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D042C (PiPnpRtlObjectEventRelease.c)
 *     PnpIsNullGuid @ 0x1408D0B80 (PnpIsNullGuid.c)
 *     PiDqQueryLock @ 0x1408D0BAC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1408D0C0C (PiDqQueryUnlock.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D0C6C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryFreeActiveData @ 0x1408D1670 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryCompletePendedIrp @ 0x1408D1708 (PiDqQueryCompletePendedIrp.c)
 *     PiDqQueryRelease @ 0x1408D19A0 (PiDqQueryRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  PERESOURCE v1; // rdi
  PERESOURCE v2; // rsi
  char v3; // r15
  struct _FAST_MUTEX *v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v6; // r12
  __int64 OwnerTable_low; // r13
  PVOID *i; // rbx
  PVOID *v9; // rsi
  struct _LIST_ENTRY *v10; // r12
  char *v11; // rdi
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  PVOID v15; // r14
  __int64 v16; // rax
  int OwnerTable_high; // eax
  PVOID *v18; // rbx
  __int64 v19; // rdi
  __int64 Pool2; // rax
  __int64 v21; // rdx
  volatile signed __int32 *j; // rcx
  char v23; // [rsp+20h] [rbp-60h]
  char v24; // [rsp+21h] [rbp-5Fh]
  PVOID P[2]; // [rsp+28h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-48h]
  PVOID *v27; // [rsp+40h] [rbp-40h]
  struct _LIST_ENTRY *v28; // [rsp+48h] [rbp-38h]
  PERESOURCE v29; // [rsp+58h] [rbp-28h]
  struct _LIST_ENTRY v30; // [rsp+60h] [rbp-20h] BYREF

  v28 = 0LL;
  v1 = Resource + 2;
  v29 = Resource;
  *(_OWORD *)P = 0LL;
  v2 = Resource;
  v24 = 1;
  v30 = 0LL;
  v3 = 1;
  v4 = (struct _FAST_MUTEX *)&Resource[1];
  do
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    OwnerTable_low = 0LL;
    v27 = 0LL;
    v26 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v2, 1u);
    ExAcquireFastMutex(v4);
    if ( (PERESOURCE)v1->SystemResourcesList.Flink == v1 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v1->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v1->SystemResourcesList.Blink = &v1->SystemResourcesList;
      v1->SystemResourcesList.Flink = &v1->SystemResourcesList;
    }
    if ( (HIDWORD(v2[2].OwnerTable) & 2) != 0 )
    {
LABEL_5:
      v3 = 0;
LABEL_6:
      for ( i = (PVOID *)v2[1].Address; i != &v2[1].Address; i = (PVOID *)*i )
      {
        PiDqQueryLock(i);
        *((_DWORD *)i + 54) |= 1u;
        PiDqQueryFreeActiveData(i);
        PiDqQueryCompletePendedIrp(i);
        PiDqQueryUnlock(i);
      }
      HIDWORD(v2[2].OwnerTable) &= ~2u;
      goto LABEL_29;
    }
    if ( !v3 )
      goto LABEL_6;
    OwnerTable_low = LODWORD(v2[2].OwnerTable);
    v26 = OwnerTable_low;
    if ( (_DWORD)OwnerTable_low )
    {
      Pool2 = ExAllocatePool2(0x100uLL, 8LL * (unsigned int)OwnerTable_low, 0x58706E50u);
      v27 = (PVOID *)Pool2;
      v6 = (PVOID *)Pool2;
      if ( !Pool2 )
        goto LABEL_5;
      v21 = 0LL;
      for ( j = (volatile signed __int32 *)v2[1].Address;
            j != (volatile signed __int32 *)&v2[1].Address;
            j = *(volatile signed __int32 **)j )
      {
        if ( (unsigned int)v21 >= (unsigned int)OwnerTable_low )
        {
          v3 = 0;
          break;
        }
        *(_QWORD *)(Pool2 + 8 * v21) = j;
        v21 = (unsigned int)(v21 + 1);
        _InterlockedIncrement(j + 53);
      }
      v27 = (PVOID *)Pool2;
      if ( !v3 )
        goto LABEL_6;
    }
LABEL_29:
    KeReleaseGuardedMutex(v4);
    while ( 1 )
    {
      v15 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v16 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v16 + 8) = P;
      if ( v3 && (_DWORD)OwnerTable_low )
      {
        v9 = v6;
        v10 = v28;
        do
        {
          v11 = (char *)*v9;
          if ( *((_QWORD *)*v9 + 28) <= *((_QWORD *)v15 + 3) )
          {
            v23 = 0;
            if ( !(unsigned __int8)PnpIsNullGuid(*((void **)v11 + 3)) )
            {
              v30 = *(struct _LIST_ENTRY *)*((_QWORD *)v11 + 3);
              v10 = IoSetActivityIdThread(&v30);
              v23 = 1;
            }
            if ( (byte_140EEFF63 & 1) != 0 )
              McTemplateK0p_EtwWriteTransfer(
                v12,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStart,
                *((const GUID **)v11 + 3),
                v11);
            PiDqQueryLock(v11);
            v13 = *((_DWORD *)v11 + 54);
            PiDqQueryUnlock(v11);
            if ( (v13 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v11, *((_QWORD *)v15 + 2));
              PiDqQueryLock(v11);
              if ( (*((_DWORD *)v11 + 54) & 1) != 0 || *((char **)v11 + 24) != v11 + 192 )
                PiDqQueryCompletePendedIrp(v11);
              PiDqQueryUnlock(v11);
            }
            if ( (byte_140EEFF63 & 1) != 0 )
              McTemplateK0p_EtwWriteTransfer(
                v14,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStop,
                *((const GUID **)v11 + 3),
                v11);
            if ( v23 )
              IoClearActivityIdThread(v10);
          }
          ++v9;
          --OwnerTable_low;
        }
        while ( OwnerTable_low );
        v2 = v29;
        OwnerTable_low = v26;
        v28 = v10;
        v6 = v27;
      }
      PiPnpRtlObjectEventRelease(*((char **)v15 + 2));
      ExFreePoolWithTag(v15, 0x58706E50u);
    }
    if ( v6 )
    {
      if ( (_DWORD)OwnerTable_low )
      {
        v18 = v6;
        v19 = (unsigned int)OwnerTable_low;
        do
        {
          PiDqQueryRelease(*v18++);
          --v19;
        }
        while ( v19 );
      }
      ExFreePoolWithTag(v6, 0x58706E50u);
    }
    v4 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PKGUARDED_MUTEX)&v2[1]);
    v1 = v2 + 2;
    if ( (PERESOURCE)v1->SystemResourcesList.Flink == v1 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v24 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    KeLeaveCriticalRegion();
  }
  while ( v24 );
}
