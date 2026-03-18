/*
 * XREFs of RtlUnlockBootStatusData @ 0x140A3F7A0
 * Callers:
 *     PopBootStatUnlock @ 0x1406F5680 (PopBootStatUnlock.c)
 *     PoClearTransitionMarker @ 0x140748F9C (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x140A3F048 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A3F42C (PopBootStatSet.c)
 *     PopBootStatRestoreDefaults @ 0x140AABC04 (PopBootStatRestoreDefaults.c)
 *     PopBootStatCheckIntegrity @ 0x140AB5DF8 (PopBootStatCheckIntegrity.c)
 * Callees:
 *     RtlpAcquireBootStatusLock @ 0x1404A8B8C (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404B6794 (RtlpReleaseBootStatusLock.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwFsControlFile @ 0x1406A6B30 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlUnlockBootStatusData(HANDLE Handle)
{
  int v2; // eax
  char v3; // di
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
  if ( !Handle )
  {
    Handle = BootStatFileHandle;
LABEL_14:
    BootStatReferenceCount = 0;
    v3 = 1;
    BootStatFileHandle = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
LABEL_7:
    if ( !Handle )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( !BootStatKeepHandleOpen && !v2 )
    goto LABEL_14;
LABEL_5:
  ZwFsControlFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
  if ( v3 )
  {
    if ( BootStatDataCache )
    {
      ExFreePoolWithTag(BootStatDataCache, 0);
      BootStatDataCache = 0LL;
    }
    ZwClose(Handle);
  }
LABEL_6:
  RtlpReleaseBootStatusLock();
}
