/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x14070A150
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x14065CE90 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((unsigned int)EmpBadS3Page);
}
