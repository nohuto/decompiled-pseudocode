/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x1409FEBD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403CB688 (FsRtlNotifySetCancelRoutine.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x14070B5EC (FsRtlCheckNotifyForDeleteLite.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyCompleteIrp @ 0x1409FF180 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyInitializeSync @ 0x1409FF310 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x140A6D8B0 (FsRtlNotifyUninitializeSync.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlNotifyFilterChangeDirectoryLite(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        PIRP Irp,
        __int64 a7,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        __int64 a9)
{
  PIRP v13; // rbx
  struct _KTHREAD *CurrentThread; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 Pool2; // rdx
  _QWORD *i; // rax
  __int16 v18; // cx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  PSECURITY_SUBJECT_CONTEXT v23; // rbx
  PNOTIFY_SYNC NotifySync; // [rsp+78h] [rbp+10h] BYREF

  v13 = Irp;
  if ( *(_QWORD *)a2 == a2 && !Irp )
    return;
  if ( !*a1 )
  {
    NotifySync = 0LL;
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  ++*(_DWORD *)(*a1 + 64);
  if ( !v13 )
  {
    FsRtlCheckNotifyForDeleteLite((_QWORD **)a2);
    goto LABEL_36;
  }
  CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
  v13->IoStatus.Status = 0;
  v13->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_19;
  Pool2 = 0LL;
  for ( i = *(_QWORD **)a2; i != (_QWORD *)a2; i = (_QWORD *)*i )
  {
    if ( *(i - 3) == a3 )
    {
      Pool2 = (__int64)(i - 4);
      break;
    }
  }
  if ( !Pool2 )
  {
    Pool2 = ExAllocatePool2(0x120uLL, 0x80uLL, 0x4E725346u);
    *(_WORD *)(Pool2 + 72) |= 0x40u;
    *(_QWORD *)Pool2 = *a1;
    *(_QWORD *)(Pool2 + 8) = a3;
    *(_QWORD *)(Pool2 + 16) = a7;
    *(_QWORD *)(Pool2 + 24) = SubjectContext;
    SubjectContext = 0LL;
    *(_QWORD *)(Pool2 + 64) = a9;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
    *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
    if ( (a4 & 1) != 0 )
      *(_WORD *)(Pool2 + 72) |= 1u;
    if ( CurrentStackLocation->MinorFunction == 3 )
      *(_DWORD *)(Pool2 + 116) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    else
      *(_DWORD *)(Pool2 + 116) = 1;
    *(_DWORD *)(Pool2 + 76) = a5;
    if ( (a4 & 2) == 0 )
      *(_DWORD *)(Pool2 + 96) = CurrentStackLocation->Parameters.Read.Length;
    *(_QWORD *)(Pool2 + 120) = v13->Tail.Overlay.Thread->Process;
    v21 = (_QWORD *)(Pool2 + 32);
    v22 = *(_QWORD **)(a2 + 8);
    if ( *v22 != a2 )
      goto LABEL_18;
    *v21 = a2;
    *(_QWORD *)(Pool2 + 40) = v22;
    *v22 = v21;
    *(_QWORD *)(a2 + 8) = v21;
    *(_DWORD *)(Pool2 + 112) = 1;
LABEL_17:
    v13->IoStatus.Information = Pool2;
    v13->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v13->Tail.Overlay.ListEntry;
    v20 = *(struct _LIST_ENTRY **)(Pool2 + 56);
    if ( v20->Flink == (struct _LIST_ENTRY *)(Pool2 + 48) )
    {
      p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(Pool2 + 48);
      v13->Tail.Overlay.ListEntry.Blink = v20;
      v20->Flink = &p_ListEntry->ListEntry;
      *(_QWORD *)(Pool2 + 56) = p_ListEntry;
      _InterlockedAdd((volatile signed __int32 *)(Pool2 + 112), 1u);
      FsRtlNotifySetCancelRoutine((__int64)v13, 0LL);
      goto LABEL_36;
    }
LABEL_18:
    __fastfail(3u);
  }
  v18 = *(_WORD *)(Pool2 + 72);
  if ( (v18 & 4) != 0 )
  {
LABEL_19:
    CurrentStackLocation->Control |= 1u;
    v13->IoStatus.Status = 267;
  }
  else if ( (v18 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= 1u;
    v13->IoStatus.Status = -1073741738;
  }
  else
  {
    if ( (v18 & 0xA) != 2 )
    {
      if ( *(_DWORD *)(Pool2 + 104) && (v18 & 8) == 0 )
      {
        *(_DWORD *)(Pool2 + 104) = 0;
        *(_DWORD *)(Pool2 + 108) = 0;
        FsRtlNotifyCompleteIrp(v13, 0);
        goto LABEL_36;
      }
      goto LABEL_17;
    }
    *(_WORD *)(Pool2 + 72) = v18 & 0xFFFD;
    v13->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    v13->IoStatus.Status = 268;
  }
  IofCompleteRequest(v13, 1);
LABEL_36:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
  v23 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v23, 0);
  }
}
