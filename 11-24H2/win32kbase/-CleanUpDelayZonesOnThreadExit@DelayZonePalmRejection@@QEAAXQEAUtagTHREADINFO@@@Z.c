/*
 * XREFs of ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x140061184
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1401456F8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x140210F1C (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x140210F5C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall DelayZonePalmRejection::CleanUpDelayZonesOnThreadExit(
        DelayZonePalmRejection *this,
        struct tagTHREADINFO *const a2)
{
  struct CPalmRejectZoneInfo *v4; // rbx
  __int64 v5; // rax
  struct CPalmRejectZoneInfo *v6; // r8
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  struct CPalmRejectZoneInfo *v8; // [rsp+40h] [rbp+8h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded(
    (CEResourceLockExclusiveIfNeeded *)v7,
    (DelayZonePalmRejection *)((char *)this + 112));
  v4 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  while ( v4 != (DelayZonePalmRejection *)((char *)this + 72) )
  {
    v5 = *(_QWORD *)a2;
    v6 = v4;
    v8 = v4;
    v4 = *(struct CPalmRejectZoneInfo **)v4;
    if ( *((_QWORD *)v6 + 2) == v5 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v8);
  }
  CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v7);
}
