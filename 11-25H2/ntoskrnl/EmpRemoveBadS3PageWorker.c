/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x1406FE270
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x140650F00 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((UNICODE_STRING *)(unsigned int)EmpBadS3Page);
}
