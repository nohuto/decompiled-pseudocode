/*
 * XREFs of CmDoVirtualTest @ 0x14049C88C
 * Callers:
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
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
