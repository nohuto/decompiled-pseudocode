/*
 * XREFs of MmIsWriteErrorFatal @ 0x1402CC028
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     FsRtlLogCcFlushError @ 0x140AB2090 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1402CC0B0 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  if ( a3 != -1073741740 && (a1 && a2 || a3 == -1073741672 || a3 == -1073741566 || a3 == -1073741202)
    || a3 == -1073741810 )
  {
    return 1LL;
  }
  if ( a3 == -1073741667 )
  {
    if ( !a1 || !a2 )
      return 1LL;
  }
  else if ( a3 == -1073741662 && a1 )
  {
    return 1LL;
  }
  return !FsRtlIsTotalDeviceFailure(a3);
}
