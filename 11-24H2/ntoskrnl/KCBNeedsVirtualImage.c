/*
 * XREFs of KCBNeedsVirtualImage @ 0x14041A8FC
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140962FF4 (CmKeyBodyRemapToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x140A154DC (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x14041A930 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
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
