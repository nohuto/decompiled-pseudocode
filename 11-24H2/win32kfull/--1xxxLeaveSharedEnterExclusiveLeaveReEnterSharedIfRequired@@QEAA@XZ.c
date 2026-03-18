/*
 * XREFs of ??1xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1401CE790
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     <none>
 */

void __fastcall xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::~xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired(
        xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *this)
{
  if ( *(_BYTE *)this )
  {
    UserSessionSwitchLeaveCrit(this);
    EnterSharedCrit(0LL, 1LL);
  }
}
