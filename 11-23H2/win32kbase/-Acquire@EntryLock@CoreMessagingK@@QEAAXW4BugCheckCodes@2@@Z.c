/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C006A6F0
 * Callers:
 *     CoreMsgOpenConnection @ 0x1C0068F78 (CoreMsgOpenConnection.c)
 *     CoreMsgObjectCallout @ 0x1C0069F44 (CoreMsgObjectCallout.c)
 *     CoreMsgSend @ 0x1C006A2EC (CoreMsgSend.c)
 *     CoreMsgCreatePort @ 0x1C00B0E18 (CoreMsgCreatePort.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C00C2F80 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0234FC4 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

NTSTATUS __fastcall CoreMessagingK::EntryLock::Acquire(_BYTE *a1, unsigned int a2)
{
  NTSTATUS result; // eax

  if ( !CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(a2, 0LL, 0LL);
  result = KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  *a1 = 1;
  return result;
}
