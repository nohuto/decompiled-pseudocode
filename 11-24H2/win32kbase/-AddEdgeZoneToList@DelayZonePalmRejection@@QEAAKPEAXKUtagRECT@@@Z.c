/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x140096178
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x140096120 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ @ 0x140096334 (-GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x140210F1C (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x140210F5C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  char v8; // bl
  __int64 v9; // rax
  unsigned int NewDelayZoneListIndex; // eax
  __int64 v11; // r8
  unsigned int v12; // esi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // ebp
  bool v16; // di
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  _BYTE v21[16]; // [rsp+50h] [rbp-28h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded(
    (CEResourceLockExclusiveIfNeeded *)v21,
    (DelayZonePalmRejection *)((char *)this + 112));
  v8 = 1;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 132, 0, 0) & 1) != 0
    || (v9 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x7A647355u)) == 0 )
  {
    CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v21);
    return 0LL;
  }
  else
  {
    *(struct tagRECT *)(v9 + 24) = *a4;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_OWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)(v9 + 80) = 0LL;
    *(_QWORD *)(v9 + 16) = KeGetCurrentThread();
    *(_DWORD *)(v9 + 64) = 0;
    NewDelayZoneListIndex = DelayZonePalmRejection::GetNewDelayZoneListIndex(this);
    *(_DWORD *)(v11 + 56) = NewDelayZoneListIndex;
    v12 = NewDelayZoneListIndex;
    v13 = (_QWORD *)((char *)this + 72);
    *(_DWORD *)(v11 + 92) = a3;
    *(_DWORD *)(v11 + 88) = 0;
    *(_QWORD *)(v11 + 96) = a2;
    *(_BYTE *)(v11 + 60) = 1;
    v14 = *((_QWORD *)this + 9);
    if ( *(DelayZonePalmRejection **)(v14 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
      __fastfail(3u);
    *(_QWORD *)v11 = v14;
    *(_QWORD *)(v11 + 8) = v13;
    *(_QWORD *)(v14 + 8) = v11;
    *v13 = v11;
    v15 = *((_DWORD *)this + 23) + 1;
    *((_DWORD *)this + 23) = v15;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v8 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v8;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        4,
        25,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        v12,
        v15);
    }
    CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v21);
    return v12;
  }
}
