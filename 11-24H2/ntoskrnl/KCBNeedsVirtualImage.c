/*
 * XREFs of KCBNeedsVirtualImage @ 0x140426A4C
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x140A203DC (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x140426A80 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
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
