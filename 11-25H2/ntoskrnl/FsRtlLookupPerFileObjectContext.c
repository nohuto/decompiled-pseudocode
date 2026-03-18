/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x1402059F0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x140205AD0 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140205BC0 (ExReleaseAutoExpandPushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rax
  __int64 v6; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v8; // rbp
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v9; // rbx
  ULONG_PTR v10; // r8
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *i; // rax

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
  v8 = 0LL;
  v9 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v6 + 16);
  v10 = FsRtlAcquireAutoExpandPushLockShared(FileObjectExtension[4]);
  if ( InstanceId )
  {
    for ( i = *v9;
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v9;
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
LABEL_11:
        v8 = i;
        break;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v9;
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v9;
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
        goto LABEL_11;
    }
  }
  else if ( *v9 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v9 )
  {
    v8 = *v9;
  }
  ExReleaseAutoExpandPushLockShared(v10, 0LL);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return v8;
}
