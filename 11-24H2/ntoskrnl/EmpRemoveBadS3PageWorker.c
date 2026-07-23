/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x140707D10
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x14065B5B0 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((UNICODE_STRING *)(unsigned int)EmpBadS3Page);
}
