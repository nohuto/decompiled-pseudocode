/*
 * XREFs of RawInitiateDeleteVolume @ 0x14048419C
 * Callers:
 *     RawCompletionRoutine @ 0x140483810 (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x1405E6F0C (RawVerifyVolume.c)
 *     RawCleanup @ 0x1409A2428 (RawCleanup.c)
 *     RawClose @ 0x1409A25BC (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x1409A2640 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1409A274C (RawCreate.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RawCleanupVcb @ 0x1409A46D4 (RawCleanupVcb.c)
 *     RawDeleteVcb @ 0x140A70C4C (RawDeleteVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // si
  void ***p_FileContextSupportPointer; // r14
  KIRQL v8; // r15
  KIRQL v9; // dl
  char *p_FilterContexts; // rdi
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *Blink; // rax
  void **v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rax
  KIRQL v18; // al
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v20; // rcx

  v3 = 0;
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 4) == 0 )
  {
    p_FileContextSupportPointer = &AdvancedHeader[1].FileContextSupportPointer;
    v8 = KeAcquireQueuedSpinLock(9uLL);
    if ( !a2 && *((_DWORD *)*p_FileContextSupportPointer + 7) + *(_DWORD *)&AdvancedHeader[1].Flags != a3 )
    {
      v9 = v8;
      goto LABEL_5;
    }
    p_FilterContexts = (char *)&AdvancedHeader[1].FilterContexts;
    if ( !(LODWORD(AdvancedHeader[1].Resource) + *((_DWORD *)*p_FileContextSupportPointer + 7)) )
    {
      *((_WORD *)*p_FileContextSupportPointer + 2) &= ~1u;
      (*p_FileContextSupportPointer)[1] = 0LL;
      KeReleaseQueuedSpinLock(9uLL, v8);
      ExAcquireFastMutex(&RawGlobalLock);
      v12 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) != p_FilterContexts )
        goto LABEL_10;
      Blink = AdvancedHeader[1].FilterContexts.Blink;
      if ( (char *)Blink->Flink != p_FilterContexts )
        goto LABEL_10;
      Blink->Flink = v12;
      v12->Blink = Blink;
      KeReleaseGuardedMutex(&RawGlobalLock);
      *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
LABEL_14:
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2]);
      RawCleanupVcb(AdvancedHeader);
      RawDeleteVcb(AdvancedHeader);
      return 1;
    }
    memset_0(AdvancedHeader[1].Oplock, 0, 0x60uLL);
    *(_WORD *)AdvancedHeader[1].Oplock = 10;
    *((_WORD *)AdvancedHeader[1].Oplock + 1) = 96;
    *((_QWORD *)AdvancedHeader[1].Oplock + 2) = (*p_FileContextSupportPointer)[2];
    *((_QWORD *)AdvancedHeader[1].Oplock + 1) = 0LL;
    *((_WORD *)AdvancedHeader[1].Oplock + 2) = *((_WORD *)*p_FileContextSupportPointer + 2) & 8;
    *((_QWORD *)(*p_FileContextSupportPointer)[2] + 7) = AdvancedHeader[1].Oplock;
    v14 = *p_FileContextSupportPointer;
    AdvancedHeader[1].Oplock = 0LL;
    *((_WORD *)v14 + 2) |= 4u;
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 8u;
    KeReleaseQueuedSpinLock(9uLL, v8);
    ExAcquireFastMutex(&RawGlobalLock);
    v15 = *(struct _LIST_ENTRY **)p_FilterContexts;
    if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
    {
      v16 = AdvancedHeader[1].FilterContexts.Blink;
      if ( (char *)v16->Flink == p_FilterContexts )
      {
        v16->Flink = v15;
        v15->Blink = v16;
        *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 6u;
        v17 = (struct _LIST_ENTRY *)qword_140F04F18;
        if ( *(__int64 **)qword_140F04F18 == &RawDismountedQueue )
        {
          *(_QWORD *)p_FilterContexts = &RawDismountedQueue;
          AdvancedHeader[1].FilterContexts.Blink = v17;
          v17->Flink = (struct _LIST_ENTRY *)p_FilterContexts;
          qword_140F04F18 = (__int64)&AdvancedHeader[1].FilterContexts;
          KeReleaseGuardedMutex(&RawGlobalLock);
          return v3;
        }
      }
    }
    goto LABEL_10;
  }
  if ( LODWORD(AdvancedHeader[1].Resource) )
    return v3;
  v18 = KeAcquireQueuedSpinLock(9uLL);
  v9 = v18;
  if ( !*((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
  {
    KeReleaseQueuedSpinLock(9uLL, v18);
    ExAcquireFastMutex(&RawGlobalLock);
    Flink = AdvancedHeader[1].FilterContexts.Flink;
    if ( Flink->Blink == &AdvancedHeader[1].FilterContexts )
    {
      v20 = AdvancedHeader[1].FilterContexts.Blink;
      if ( v20->Flink == &AdvancedHeader[1].FilterContexts )
      {
        v20->Flink = Flink;
        Flink->Blink = v20;
        KeReleaseGuardedMutex(&RawGlobalLock);
        goto LABEL_14;
      }
    }
LABEL_10:
    __fastfail(3u);
  }
LABEL_5:
  KeReleaseQueuedSpinLock(9uLL, v9);
  return v3;
}
