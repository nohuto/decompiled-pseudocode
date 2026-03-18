/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1400602F0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     AddEdgePalmRejectionZone @ 0x140096120 (AddEdgePalmRejectionZone.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1400C2D48 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x14012AEF0 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x140157300 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401BA760 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x14020F380 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     AddPalmRejectionDelayZone @ 0x140211D50 (AddPalmRejectionDelayZone.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1401367C8 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 */

struct DelayZonePalmRejection *__fastcall DelayZonePalmRejection::GetInstance(__int64 a1)
{
  __int64 UserSessionState; // rbx
  struct DelayZonePalmRejection *result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(UserSessionState + 17360) )
    return *(struct DelayZonePalmRejection **)(UserSessionState + 17360);
  result = (struct DelayZonePalmRejection *)Win32AllocPoolZInitImpl(256LL, 0x80uLL, 0x7A647355u);
  *(_QWORD *)(UserSessionState + 17360) = result;
  if ( result )
  {
    DelayZonePalmRejection::Initialize(result);
    return *(struct DelayZonePalmRejection **)(UserSessionState + 17360);
  }
  return result;
}
