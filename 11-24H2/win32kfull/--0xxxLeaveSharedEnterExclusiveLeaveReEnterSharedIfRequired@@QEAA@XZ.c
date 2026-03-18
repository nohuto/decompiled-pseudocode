/*
 * XREFs of ??0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1402B14C4
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *__fastcall xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired(
        xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *this,
        __int64 a2,
        __int64 a3)
{
  bool v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v4 = IS_USERCRIT_OWNED_SHAREDONLY((__int64)this, a2, a3);
  *(_BYTE *)this = v4;
  if ( !v4 && !IS_USERCRIT_OWNED_EXCLUSIVE(v6, v5, v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 145);
  if ( *(_BYTE *)this )
  {
    UserSessionSwitchLeaveCrit(v6);
    EnterCrit(1LL, 0LL);
  }
  return this;
}
