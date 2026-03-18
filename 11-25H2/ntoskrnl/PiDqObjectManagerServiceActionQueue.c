/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x1408380E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     IoSetActivityIdThread @ 0x14045CC40 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140464140 (IoClearActivityIdThread.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1404C85C4 (McTemplateK0p_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PnpIsNullGuid @ 0x140838480 (PnpIsNullGuid.c)
 *     PiDqQueryLock @ 0x1408384AC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x14083850C (PiDqQueryUnlock.c)
 *     PiDqQueryApplyObjectEvent @ 0x14083856C (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectEventRelease @ 0x140838F9C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryFreeActiveData @ 0x140839030 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryCompletePendedIrp @ 0x1408390C8 (PiDqQueryCompletePendedIrp.c)
 *     PiDqQueryRelease @ 0x140839334 (PiDqQueryRelease.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 Pool2; // rax
  __int64 v10; // rdx
  volatile signed __int32 *j; // rcx
  PVOID v12; // r14
  __int64 v13; // rax
  int OwnerTable_high; // eax
  PVOID *v15; // rbx
  __int64 v16; // rdi
  PVOID *v17; // rsi
  struct _LIST_ENTRY *v18; // r12
  char *v19; // rdi
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
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
      goto LABEL_18;
    }
    if ( !v3 )
      goto LABEL_6;
    OwnerTable_low = LODWORD(v2[2].OwnerTable);
    v26 = OwnerTable_low;
    if ( (_DWORD)OwnerTable_low )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v27 = (PVOID *)Pool2;
      v6 = (PVOID *)Pool2;
      if ( !Pool2 )
        goto LABEL_5;
      v10 = 0LL;
      for ( j = (volatile signed __int32 *)v2[1].Address;
            j != (volatile signed __int32 *)&v2[1].Address;
            j = *(volatile signed __int32 **)j )
      {
        if ( (unsigned int)v10 >= (unsigned int)OwnerTable_low )
        {
          v3 = 0;
          break;
        }
        *(_QWORD *)(Pool2 + 8 * v10) = j;
        v10 = (unsigned int)(v10 + 1);
        _InterlockedIncrement(j + 53);
      }
      v27 = (PVOID *)Pool2;
      if ( !v3 )
        goto LABEL_6;
    }
LABEL_18:
    KeReleaseGuardedMutex(v4);
    while ( 1 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      if ( v3 && (_DWORD)OwnerTable_low )
      {
        v17 = v6;
        v18 = v28;
        do
        {
          v19 = (char *)*v17;
          if ( *((_QWORD *)*v17 + 28) <= *((_QWORD *)v12 + 3) )
          {
            v23 = 0;
            if ( !(unsigned __int8)PnpIsNullGuid(*((void **)v19 + 3)) )
            {
              v30 = *(struct _LIST_ENTRY *)*((_QWORD *)v19 + 3);
              v18 = IoSetActivityIdThread(&v30);
              v23 = 1;
            }
            if ( (byte_140EEFA6B & 1) != 0 )
              McTemplateK0p_EtwWriteTransfer(
                v20,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStart,
                *((const GUID **)v19 + 3),
                v19);
            PiDqQueryLock(v19);
            v21 = *((_DWORD *)v19 + 54);
            PiDqQueryUnlock(v19);
            if ( (v21 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v19, *((_QWORD *)v12 + 2));
              PiDqQueryLock(v19);
              if ( (*((_DWORD *)v19 + 54) & 1) != 0 || *((char **)v19 + 24) != v19 + 192 )
                PiDqQueryCompletePendedIrp(v19);
              PiDqQueryUnlock(v19);
            }
            if ( (byte_140EEFA6B & 1) != 0 )
              McTemplateK0p_EtwWriteTransfer(
                v22,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStop,
                *((const GUID **)v19 + 3),
                v19);
            if ( v23 )
              IoClearActivityIdThread(v18);
          }
          ++v17;
          --OwnerTable_low;
        }
        while ( OwnerTable_low );
        v2 = v29;
        OwnerTable_low = v26;
        v28 = v18;
        v6 = v27;
      }
      PiPnpRtlObjectEventRelease(*((PVOID *)v12 + 2));
      ExFreePoolWithTag(v12, 0x58706E50u);
    }
    if ( v6 )
    {
      if ( (_DWORD)OwnerTable_low )
      {
        v15 = v6;
        v16 = (unsigned int)OwnerTable_low;
        do
        {
          PiDqQueryRelease(*v15++);
          --v16;
        }
        while ( v16 );
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
