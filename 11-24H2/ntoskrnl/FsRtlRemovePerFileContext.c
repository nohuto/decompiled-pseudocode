/*
 * XREFs of FsRtlRemovePerFileContext @ 0x14057D350
 * Callers:
 *     FsRtlRemovePerFileContextWithReserve @ 0x14057D420 (FsRtlRemovePerFileContextWithReserve.c)
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403B432C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1403B44A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _DWORD *v3; // rbp
  struct _FSRTL_PER_FILE_CONTEXT **v6; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *Flink; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v8; // rbx
  struct _FSRTL_PER_FILE_CONTEXT *v9; // rcx
  struct _FSRTL_PER_FILE_CONTEXT **Blink; // rax

  v3 = *PerFileContextPointer;
  if ( !*PerFileContextPointer )
    return 0LL;
  v6 = (struct _FSRTL_PER_FILE_CONTEXT **)(v3 + 4);
  if ( *v6 == (struct _FSRTL_PER_FILE_CONTEXT *)v6 )
    return 0LL;
  FsRtlAcquireAutoExpandPushLockExclusive((__int64)*PerFileContextPointer);
  Flink = *v6;
  v8 = 0LL;
  if ( InstanceId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v6 )
    {
      if ( Flink->OwnerId == OwnerId && Flink->InstanceId == InstanceId )
        goto LABEL_13;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v6 )
    {
      if ( Flink->OwnerId == OwnerId )
        goto LABEL_13;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v6 )
  {
LABEL_13:
    v8 = Flink;
    if ( Flink )
    {
      v9 = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink->Blink != Flink
        || (Blink = (struct _FSRTL_PER_FILE_CONTEXT **)Flink->Links.Blink, *Blink != v8) )
      {
        __fastfail(3u);
      }
      *Blink = v9;
      v9->Links.Blink = (struct _LIST_ENTRY *)Blink;
    }
  }
  FsRtlReleaseAutoExpandPushLockExclusive(v3);
  return v8;
}
