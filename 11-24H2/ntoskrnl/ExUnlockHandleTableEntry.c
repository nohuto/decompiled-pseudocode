/*
 * XREFs of ExUnlockHandleTableEntry @ 0x14093D890
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1405972F0 (IopCheckHandleForRevocation.c)
 *     ObAuditInheritedHandleProcedure @ 0x140742E00 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140743EE0 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B0D30 (EtwpObjectHandleEnumCallback.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     ExQueryProcessHandleInformation @ 0x14093BA20 (ExQueryProcessHandleInformation.c)
 *     ExDupHandleTable @ 0x14093D080 (ExDupHandleTable.c)
 *     ExpDuplicateSingleHandle @ 0x14093D6A4 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x14093D784 (ObInheritObjectHandle.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 *     ObpAuditObjectAccess @ 0x140989024 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
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
