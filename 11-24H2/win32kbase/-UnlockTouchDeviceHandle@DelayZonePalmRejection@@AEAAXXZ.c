/*
 * XREFs of ?UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x14019F25C
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1400D0998 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x140211368 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 */

void __fastcall DelayZonePalmRejection::UnlockTouchDeviceHandle(DelayZonePalmRejection *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 24);
  if ( *v1 )
    HMAssignmentUnlock(v1);
}
