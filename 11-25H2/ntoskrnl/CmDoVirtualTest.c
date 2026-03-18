/*
 * XREFs of CmDoVirtualTest @ 0x1404A1EF8
 * Callers:
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
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
