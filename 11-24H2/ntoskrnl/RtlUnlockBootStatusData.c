/*
 * XREFs of RtlUnlockBootStatusData @ 0x140A35050
 * Callers:
 *     PopBootStatUnlock @ 0x1406F3680 (PopBootStatUnlock.c)
 *     PoClearTransitionMarker @ 0x1407472C8 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x140A348F8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A34CDC (PopBootStatSet.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6BD8 (PopBootStatRestoreDefaults.c)
 *     PopBootStatCheckIntegrity @ 0x140AB00C0 (PopBootStatCheckIntegrity.c)
 * Callees:
 *     RtlpAcquireBootStatusLock @ 0x1404A2FAC (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404B0F74 (RtlpReleaseBootStatusLock.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwFsControlFile @ 0x1406A7AD0 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
