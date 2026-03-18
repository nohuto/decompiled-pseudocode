/*
 * XREFs of ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x140211894
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C2FA8 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 */

void __fastcall DelayZonePalmRejection::LockTouchDeviceHandle(DelayZonePalmRejection *this)
{
  __int64 v1; // rbx
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 3) )
  {
    v1 = (unsigned __int16)*((_DWORD *)this + 4);
    v2[0] = (char *)this + 24;
    v2[1] = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(this) + 19888) + 40 * v1);
    HMAssignmentLock((__int64)v2, 0);
  }
}
