/*
 * XREFs of CiAcquireTaskIndexListLock @ 0x14000EC90
 * Callers:
 *     CiTaskIndexDereference @ 0x140003CB0 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x14000F6C0 (CiSystemAcquirePushLock.c)
 */

__int64 CiAcquireTaskIndexListLock()
{
  return CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
}
