/*
 * XREFs of FsRtlRemovePerFileObjectContext @ 0x1403B4230
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403B432C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1403B44A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlRemovePerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rdi
  ULONG_PTR v6; // rdi
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v7; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rcx
  ULONG_PTR v9; // rax
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *Blink; // rax

  if ( !FileObject )
    return 0LL;
  if ( !FileObject->FileObjectExtension )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  v6 = FileObjectExtension[4];
  if ( !v6 )
    return 0LL;
  v7 = 0LL;
  FsRtlAcquireAutoExpandPushLockExclusive(v6);
  Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v6 + 16);
  v9 = v6 + 16;
  if ( InstanceId )
  {
    while ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v9 )
    {
      if ( Flink->OwnerId == OwnerId && Flink->InstanceId == InstanceId )
        goto LABEL_9;
      Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v9 )
    {
      if ( Flink->OwnerId == OwnerId )
        goto LABEL_9;
      Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v9 )
  {
LABEL_9:
    v7 = Flink;
    if ( Flink )
    {
      v10 = Flink->Links.Flink;
      if ( (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v10->Blink != v7
        || (Blink = v7->Links.Blink, (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Flink != v7) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v10;
      v10->Blink = Blink;
    }
  }
  FsRtlReleaseAutoExpandPushLockExclusive(v6);
  return v7;
}
