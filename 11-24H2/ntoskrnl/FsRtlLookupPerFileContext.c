/*
 * XREFs of FsRtlLookupPerFileContext @ 0x140414D60
 * Callers:
 *     FsRtlRemovePerFileContextWithReserve @ 0x14057D420 (FsRtlRemovePerFileContextWithReserve.c)
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x14028F100 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     FsRtlReleaseAutoExpandPushLockShared @ 0x14028FF80 (FsRtlReleaseAutoExpandPushLockShared.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlLookupPerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  char *v3; // rcx
  PFSRTL_PER_FILE_CONTEXT result; // rax
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rsi
  struct _FSRTL_PER_FILE_CONTEXT *v8; // rbp
  ULONG_PTR v9; // rdx
  struct _FSRTL_PER_FILE_CONTEXT *j; // rax
  struct _FSRTL_PER_FILE_CONTEXT *i; // rcx

  v3 = (char *)*PerFileContextPointer;
  if ( !v3 )
    return 0LL;
  result = (PFSRTL_PER_FILE_CONTEXT)*((_QWORD *)v3 + 4);
  if ( result && result->OwnerId == OwnerId && (!InstanceId || result->InstanceId == InstanceId) )
    return result;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v3 + 16);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  v8 = 0LL;
  v9 = FsRtlAcquireAutoExpandPushLockShared((__int64)v3);
  if ( InstanceId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
        v8 = i;
        break;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( j = *v7; j != (struct _FSRTL_PER_FILE_CONTEXT *)v7; j = (struct _FSRTL_PER_FILE_CONTEXT *)j->Links.Flink )
    {
      if ( j->OwnerId == OwnerId )
      {
        v8 = j;
        break;
      }
    }
  }
  else if ( *v7 != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
    v8 = *v7;
  }
  FsRtlReleaseAutoExpandPushLockShared(v9);
  return v8;
}
