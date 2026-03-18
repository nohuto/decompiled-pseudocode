/*
 * XREFs of CmDoVirtualTest @ 0x1404A1900
 * Callers:
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
 */

bool CmDoVirtualTest()
{
  struct _KTHREAD *CurrentThread; // rcx

  if ( !CmpVEEnabled )
    return 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(CurrentThread) == 0;
}
