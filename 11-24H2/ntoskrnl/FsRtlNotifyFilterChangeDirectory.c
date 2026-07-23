/*
 * XREFs of FsRtlNotifyFilterChangeDirectory @ 0x1409FE1C0
 * Callers:
 *     FsRtlNotifyChangeDirectory @ 0x14070B640 (FsRtlNotifyChangeDirectory.c)
 *     FsRtlNotifyFullChangeDirectory @ 0x1409FE150 (FsRtlNotifyFullChangeDirectory.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403CB688 (FsRtlNotifySetCancelRoutine.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     FsRtlIsNotifyOnList @ 0x1409FEFA0 (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyCompleteIrp @ 0x1409FF180 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlCheckNotifyForDelete @ 0x1409FF374 (FsRtlCheckNotifyForDelete.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyFilterChangeDirectory(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PVOID FsContext,
        PSTRING FullDirectoryName,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        PIRP NotifyIrp,
        PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PFILTER_REPORT_CHANGE FilterCallback)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v16; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 IsNotifyOnList; // rax
  ULONG_PTR Pool2; // rdx
  __int16 v20; // ax
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // r8
  __int16 v23; // cx
  struct _LIST_ENTRY *v24; // rax
  struct _LIST_ENTRY *Blink; // rcx

  if ( NotifyList->Flink == NotifyList && !NotifyIrp )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  LOBYTE(v16) = 1;
  ++*((_DWORD *)NotifySync + 16);
  if ( !NotifyIrp )
  {
    FsRtlCheckNotifyForDelete(NotifyList, FsContext);
    goto LABEL_36;
  }
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
  NotifyIrp->IoStatus.Status = 0;
  NotifyIrp->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_13;
  IsNotifyOnList = FsRtlIsNotifyOnList(NotifyList, FsContext);
  Pool2 = IsNotifyOnList;
  if ( !IsNotifyOnList )
  {
    Pool2 = ExAllocatePool2(0x120uLL, 0x98uLL, 0x4E725346u);
    *(_QWORD *)Pool2 = NotifySync;
    *(_QWORD *)(Pool2 + 8) = FsContext;
    *(_QWORD *)(Pool2 + 128) = CurrentStackLocation->FileObject->FsContext;
    *(_QWORD *)(Pool2 + 16) = TraverseCallback;
    *(_QWORD *)(Pool2 + 24) = SubjectContext;
    SubjectContext = 0LL;
    *(_QWORD *)(Pool2 + 64) = FilterCallback;
    *(_QWORD *)(Pool2 + 136) = FullDirectoryName;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
    *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
    v16 = 1;
    if ( WatchTree )
      *(_WORD *)(Pool2 + 72) |= 1u;
    if ( FullDirectoryName )
    {
      v23 = 2;
      if ( FullDirectoryName->Length < 2u || FullDirectoryName->Buffer[1] )
      {
        *(_BYTE *)(Pool2 + 144) = 1;
        v23 = 1;
      }
      else
      {
        *(_BYTE *)(Pool2 + 144) = 2;
      }
      if ( FullDirectoryName->Length == v23 )
        *(_WORD *)(Pool2 + 72) |= 0x10u;
    }
    else
    {
      *(_BYTE *)(Pool2 + 144) = 1;
    }
    *(_DWORD *)(Pool2 + 76) = CompletionFilter;
    if ( !IgnoreBuffer )
      *(_DWORD *)(Pool2 + 96) = CurrentStackLocation->Parameters.Read.Length;
    *(_QWORD *)(Pool2 + 120) = NotifyIrp->Tail.Overlay.Thread->Process;
    v24 = (struct _LIST_ENTRY *)(Pool2 + 32);
    Blink = NotifyList->Blink;
    if ( Blink->Flink != NotifyList )
      goto LABEL_16;
    v24->Flink = NotifyList;
    *(_QWORD *)(Pool2 + 40) = Blink;
    Blink->Flink = v24;
    NotifyList->Blink = v24;
    *(_DWORD *)(Pool2 + 112) = 1;
LABEL_15:
    NotifyIrp->IoStatus.Information = Pool2;
    NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&NotifyIrp->Tail.Overlay.ListEntry;
    v22 = *(struct _LIST_ENTRY **)(Pool2 + 56);
    if ( v22->Flink == (struct _LIST_ENTRY *)(Pool2 + 48) )
    {
      p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(Pool2 + 48);
      NotifyIrp->Tail.Overlay.ListEntry.Blink = v22;
      v22->Flink = &p_ListEntry->ListEntry;
      *(_QWORD *)(Pool2 + 56) = p_ListEntry;
      _InterlockedAdd((volatile signed __int32 *)(Pool2 + 112), v16);
      FsRtlNotifySetCancelRoutine((__int64)NotifyIrp, 0LL);
      goto LABEL_36;
    }
LABEL_16:
    __fastfail(3u);
  }
  v20 = *(_WORD *)(IsNotifyOnList + 72);
  if ( (v20 & 4) != 0 )
  {
LABEL_13:
    CurrentStackLocation->Control |= v16;
    NotifyIrp->IoStatus.Status = 267;
LABEL_14:
    IofCompleteRequest(NotifyIrp, v16);
    goto LABEL_36;
  }
  if ( (v20 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= v16;
    NotifyIrp->IoStatus.Status = -1073741738;
    goto LABEL_14;
  }
  if ( ((unsigned __int8)v20 & (unsigned __int8)(v16 + 1)) != 0 && (v20 & 8) == 0 )
  {
    *(_WORD *)(Pool2 + 72) = v20 & 0xFFFD;
    NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
    NotifyIrp->IoStatus.Status = 268;
    goto LABEL_14;
  }
  if ( !*(_DWORD *)(Pool2 + 104) || (v20 & 8) != 0 )
    goto LABEL_15;
  *(_DWORD *)(Pool2 + 104) = 0;
  *(_DWORD *)(Pool2 + 108) = 0;
  FsRtlNotifyCompleteIrp(NotifyIrp, 0);
LABEL_36:
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
  if ( SubjectContext )
  {
    if ( FullDirectoryName )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(SubjectContext, 0);
    }
  }
}
