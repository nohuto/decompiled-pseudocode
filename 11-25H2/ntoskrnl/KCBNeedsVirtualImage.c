/*
 * XREFs of KCBNeedsVirtualImage @ 0x14042EE34
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x140A15884 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x14042EE70 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 */

char KCBNeedsVirtualImage()
{
  char result; // al
  struct _KTHREAD *CurrentThread; // rcx

  result = KCBIsVirtualizable();
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
    return (unsigned __int8)CmpIsSystemEntity(CurrentThread) == 0;
  }
  return result;
}
