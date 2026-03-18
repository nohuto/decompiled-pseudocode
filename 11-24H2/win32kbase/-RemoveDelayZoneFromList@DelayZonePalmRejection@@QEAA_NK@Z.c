/*
 * XREFs of ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1402119E0
 * Callers:
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401BA760 (NtUserDestroyPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1401456F8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x140210F1C (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x140210F5C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x14021F7B0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromList(PERESOURCE *this, int a2)
{
  PERESOURCE i; // rbx
  char v5; // bl
  bool v7; // si
  bool v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int128 v12; // xmm6
  __int64 v13; // r8
  PERESOURCE v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  PERESOURCE *v17[2]; // [rsp+50h] [rbp-28h] BYREF
  struct CPalmRejectZoneInfo *v18; // [rsp+80h] [rbp+8h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v17, this + 14);
  for ( i = this[9]; ; i = (PERESOURCE)i->SystemResourcesList.Flink )
  {
    if ( i == (PERESOURCE)(this + 9) )
      goto LABEL_5;
    if ( i->OwnerEntry.TableSize == a2 )
      break;
  }
  v18 = (struct CPalmRejectZoneInfo *)i;
  if ( !i || (struct _KTHREAD *)i->OwnerTable != KeGetCurrentThread() )
  {
LABEL_5:
    v5 = 0;
    goto LABEL_6;
  }
  v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      4,
      27,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
  }
  v12 = *(_OWORD *)&i->ActiveCount;
  v5 = DelayZonePalmRejection::RemoveDelayZoneFromListInternal((DelayZonePalmRejection *)this, &v18);
  if ( v5 )
  {
    v14 = this[15];
    if ( v14 )
    {
      v15 = *((unsigned int *)this + 1);
      v16 = v12;
      DelayZoneTelemetry::UpdateDelayZoneStateInfo(v14, v15, v13, 4LL, &v16);
    }
  }
LABEL_6:
  CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded(v17);
  return v5;
}
