/*
 * XREFs of RtlUnlockBootStatusData @ 0x140A1CA60
 * Callers:
 *     PopBootStatUnlock @ 0x1406E9C8C (PopBootStatUnlock.c)
 *     PoClearTransitionMarker @ 0x14073CF8C (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x140A1C0B0 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A1C6F8 (PopBootStatSet.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6644 (PopBootStatRestoreDefaults.c)
 *     PopBootStatCheckIntegrity @ 0x140AB0F30 (PopBootStatCheckIntegrity.c)
 * Callees:
 *     RtlpAcquireBootStatusLock @ 0x1404A7CE0 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404B6CA4 (RtlpReleaseBootStatusLock.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwFsControlFile @ 0x14069B860 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  int v2; // eax
  char v3; // di
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  IoStatusBlock = 0LL;
  InputBuffer = 0;
  RtlpAcquireBootStatusLock();
  if ( !BootStatReferenceCount )
    goto LABEL_6;
  v2 = BootStatReferenceCount - 1;
  v3 = 0;
  --BootStatReferenceCount;
  if ( !BootStatFileHandleAcquired )
    goto LABEL_7;
  if ( !FileHandle )
  {
    FileHandle = BootStatFileHandle;
LABEL_14:
    BootStatReferenceCount = 0;
    v3 = 1;
    BootStatFileHandle = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
LABEL_7:
    if ( !FileHandle )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( !BootStatKeepHandleOpen && !v2 )
    goto LABEL_14;
LABEL_5:
  ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
  if ( v3 )
  {
    if ( BootStatDataCache )
    {
      ExFreePoolWithTag(BootStatDataCache, 0);
      BootStatDataCache = 0LL;
    }
    ZwClose(FileHandle);
  }
LABEL_6:
  RtlpReleaseBootStatusLock();
  return result;
}
