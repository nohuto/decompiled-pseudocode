/*
 * XREFs of ExUnlockHandleTableEntry @ 0x140972390
 * Callers:
 *     IopCheckHandleForRevocation @ 0x140593BE0 (IopCheckHandleForRevocation.c)
 *     ObAuditInheritedHandleProcedure @ 0x140736DE0 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140737EC0 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407A1960 (EtwpObjectHandleEnumCallback.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     ObpAuditObjectAccess @ 0x140971330 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x140971498 (ExQueryProcessHandleInformation.c)
 *     ExDupHandleTable @ 0x140971B80 (ExDupHandleTable.c)
 *     ExpDuplicateSingleHandle @ 0x1409721A4 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x140972284 (ObInheritObjectHandle.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
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
