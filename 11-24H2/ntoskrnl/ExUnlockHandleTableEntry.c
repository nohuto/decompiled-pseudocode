/*
 * XREFs of ExUnlockHandleTableEntry @ 0x140891F80
 * Callers:
 *     IopCheckHandleForRevocation @ 0x140594270 (IopCheckHandleForRevocation.c)
 *     ObAuditInheritedHandleProcedure @ 0x140740D30 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140741E10 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B1180 (EtwpObjectHandleEnumCallback.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x140863834 (ObpAuditObjectAccess.c)
 *     ExDupHandleTable @ 0x140891770 (ExDupHandleTable.c)
 *     ExpDuplicateSingleHandle @ 0x140891D94 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x140891E74 (ObInheritObjectHandle.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     ExQueryProcessHandleInformation @ 0x1409C6748 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 */

__int64 __fastcall ExUnlockHandleTableEntry(__int64 a1, volatile signed __int64 *a2)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedIncrement64(a2);
  v2 = (_QWORD *)(a1 + 48);
  _InterlockedOr(v4, 0);
  if ( *v2 )
    return ExfUnblockPushLock((__int64)v2, 0LL);
  return result;
}
