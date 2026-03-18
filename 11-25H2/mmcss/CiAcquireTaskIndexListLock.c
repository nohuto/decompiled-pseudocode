/*
 * XREFs of CiAcquireTaskIndexListLock @ 0x1C000D700
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0003CB0 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000E130 (CiSystemAcquirePushLock.c)
 */

__int64 CiAcquireTaskIndexListLock()
{
  return CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
}
