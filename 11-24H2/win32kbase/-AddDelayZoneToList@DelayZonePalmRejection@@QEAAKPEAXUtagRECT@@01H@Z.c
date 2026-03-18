/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x140210F84
 * Callers:
 *     AddPalmRejectionDelayZone @ 0x140211D50 (AddPalmRejectionDelayZone.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14004A450 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ @ 0x140096334 (-GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x140210F1C (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x140210F5C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x14021F7B0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        PERESOURCE *this,
        void *a2,
        struct tagRECT *a3,
        void *a4,
        struct tagRECT *a5,
        int a6)
{
  unsigned int v10; // r14d
  __int64 v11; // rcx
  char v12; // di
  char v13; // bl
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  bool v18; // si
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  PVOID v22; // rbp
  PVOID v23; // r14
  struct tagRECT *v24; // rax
  int v25; // eax
  unsigned int NewDelayZoneListIndex; // eax
  __int64 *v27; // rdx
  PERESOURCE v28; // r8
  int v29; // ebp
  char v30; // bl
  __int64 v31; // rax
  PERESOURCE v32; // rcx
  __int64 v33; // rdx
  PVOID v35[2]; // [rsp+50h] [rbp-48h] BYREF
  PERESOURCE *v36[2]; // [rsp+60h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v36, this + 14);
  v10 = 0;
  Object = 0LL;
  v35[0] = 0LL;
  v12 = 1;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v11) + 132, 0, 0) & 1) != 0 )
  {
    v13 = 75;
    goto LABEL_9;
  }
  if ( a2 )
  {
    v14 = CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)&Object);
    v13 = v14;
    if ( v14 < 0 )
      goto LABEL_9;
  }
  if ( a4 )
  {
    v15 = CompositionInputObject::ResolveHandle(a4, 1u, 1, (struct CompositionInputObject **)v35);
    v13 = v15;
    if ( v15 < 0 )
      goto LABEL_9;
  }
  v17 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x7A647355u);
  if ( !v17 )
  {
    v13 = 23;
LABEL_9:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v12 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        4,
        24,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        v13);
    }
    goto LABEL_34;
  }
  v22 = Object;
  if ( Object )
    ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
  v23 = v35[0];
  if ( v35[0] )
    ObReferenceObjectByPointer(v35[0], 3u, ExCompositionObjectType, 0);
  v24 = a5;
  *(struct tagRECT *)(v17 + 24) = *a3;
  *(_QWORD *)(v17 + 72) = v22;
  *(struct tagRECT *)(v17 + 40) = *v24;
  *(_QWORD *)(v17 + 80) = v23;
  *(_QWORD *)(v17 + 16) = KeGetCurrentThread();
  if ( a6 )
    v25 = *(_DWORD *)(*((_QWORD *)PtiCurrent(v16) + 58) + 56LL);
  else
    v25 = 0;
  *(_DWORD *)(v17 + 64) = v25;
  NewDelayZoneListIndex = DelayZonePalmRejection::GetNewDelayZoneListIndex((DelayZonePalmRejection *)this);
  *(_DWORD *)(v17 + 56) = NewDelayZoneListIndex;
  v10 = NewDelayZoneListIndex;
  *(_DWORD *)(v17 + 92) = 3;
  *(_DWORD *)(v17 + 88) = *((_DWORD *)this + 26);
  v27 = (__int64 *)(this + 9);
  *(_QWORD *)(v17 + 96) = 0LL;
  *(_BYTE *)(v17 + 60) = 0;
  v28 = this[9];
  if ( (PERESOURCE *)v28->SystemResourcesList.Blink != this + 9 )
    __fastfail(3u);
  *(_QWORD *)v17 = v28;
  *(_QWORD *)(v17 + 8) = v27;
  v28->SystemResourcesList.Blink = (struct _LIST_ENTRY *)v17;
  *v27 = v17;
  v29 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v29;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v12 = 0;
  }
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v30,
      *(_QWORD *)(v31 + 69400),
      4u,
      4u,
      0x17u,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      v10,
      v29);
  }
  v32 = this[15];
  if ( v32 )
  {
    v33 = *((unsigned int *)this + 1);
    *(struct tagRECT *)v35 = *a3;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v32, v33, v28, 3LL, v35);
  }
LABEL_34:
  CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded(v36);
  return v10;
}
