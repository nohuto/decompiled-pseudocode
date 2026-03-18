/*
 * XREFs of ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140154028
 * Callers:
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x140157300 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1401456F8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x140210F1C (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x140210F5C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 */

char __fastcall DelayZonePalmRejection::RemoveEdgeZonesForDevice(DelayZonePalmRejection *this, void *a2)
{
  __int64 v4; // rcx
  struct CPalmRejectZoneInfo *v5; // rbx
  bool v6; // di
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  struct CPalmRejectZoneInfo *v11; // rax
  _BYTE v13[16]; // [rsp+50h] [rbp-28h] BYREF
  struct CPalmRejectZoneInfo *v14; // [rsp+80h] [rbp+8h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded(
    (CEResourceLockExclusiveIfNeeded *)v13,
    (DelayZonePalmRejection *)((char *)this + 112));
  v5 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v4);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      4,
      28,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      (char)a2);
  }
  while ( v5 != (DelayZonePalmRejection *)((char *)this + 72) )
  {
    v11 = v5;
    v14 = v5;
    v5 = *(struct CPalmRejectZoneInfo **)v5;
    if ( *((void **)v11 + 12) == a2 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v14);
  }
  CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v13);
  return 1;
}
