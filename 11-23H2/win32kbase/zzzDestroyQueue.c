/*
 * XREFs of zzzDestroyQueue @ 0x1C012DDA0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     FreeQueue @ 0x1C0038668 (FreeQueue.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C003869C (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     IsFreeMessageListSupported @ 0x1C00386BC (IsFreeMessageListSupported.c)
 *     FreeMessageList @ 0x1C00386E8 (FreeMessageList.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0050440 (ApiSetEditionUpdateRawMouseMode.c)
 *     ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x1C0056CC0 (-UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ.c)
 *     HMAssignmentUnlock @ 0x1C0056D00 (HMAssignmentUnlock.c)
 *     RecalculateQueueInfo @ 0x1C0098220 (RecalculateQueueInfo.c)
 *     IsClearDelegationCaptureSupported @ 0x1C009B050 (IsClearDelegationCaptureSupported.c)
 *     LockQCursor @ 0x1C009E354 (LockQCursor.c)
 *     ?RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z @ 0x1C00A3210 (-RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z.c)
 *     ClearDelegationCapture @ 0x1C00AA064 (ClearDelegationCapture.c)
 *     SetWakeBit @ 0x1C00C2C14 (SetWakeBit.c)
 *     xxxWindowEvent @ 0x1C00C4C0C (xxxWindowEvent.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1C00CFF20 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C012D754 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C0207A00 (ApiSetEditionSystemGenerateMove.c)
 */

void __fastcall zzzDestroyQueue(tagQ *this, tagTHREADINFO *a2)
{
  int v2; // esi
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r10
  int v11; // r9d
  __int64 v12; // r14
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+20h] [rbp-48h]

  v2 = 0;
  if ( a2 )
    tagTHREADINFO::RemoveThreadFromQSharingLists(a2, this);
  if ( tagQ::IsAnyThreadAttached(this) )
  {
    if ( *((tagTHREADINFO **)this + 9) == a2 )
    {
      v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v5,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          v18,
          0x13u,
          0xBu,
          (__int64)&WPP_58e5e48e7cdb3be4103bc9d4c641fa22_Traceguids);
      *((_QWORD *)this + 9) = 0LL;
    }
    if ( a2 && (*((tagTHREADINFO **)this + 13) == a2 || *((tagTHREADINFO **)this + 12) == a2) )
    {
      v6 = *((_QWORD *)this + 60);
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      while ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 488) & 1) == 0 )
        {
          v10 = *((_QWORD *)a2 + 56);
          v7 = v6;
          v11 = *(_DWORD *)(v10 + 8);
          if ( (v11 & 6) != 0 && (*(_BYTE *)(*(_QWORD *)(v6 + 448) + 16LL) & 6) != 0 )
            v8 = v6;
          if ( (v11 & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v6 + 448) + 16LL) & 1) != 0 )
            v9 = v6;
          if ( (*(_DWORD *)(v10 + 16) & 0x400) != 0 && (*(_DWORD *)(*(_QWORD *)(v6 + 448) + 16LL) & 0x400) != 0 )
            v9 = v6;
        }
        v6 = *(_QWORD *)(v6 + 1528);
      }
      v12 = v7;
      if ( v8 )
        v12 = v8;
      if ( v9 )
        v7 = v9;
      if ( qword_1C0295580 && (int)qword_1C0295580() >= 0 )
      {
        if ( v12 )
          SetWakeBit(v12, *(_DWORD *)(*((_QWORD *)a2 + 56) + 8LL) & 6);
        if ( v7 )
        {
          SetWakeBit(v7, *(_DWORD *)(*((_QWORD *)a2 + 56) + 8LL) & 1);
          SetWakeBit(v7, *(_DWORD *)(*((_QWORD *)a2 + 56) + 8LL) & 0x400);
        }
      }
      if ( *((tagTHREADINFO **)this + 13) == a2 )
        *((_QWORD *)this + 13) = v7;
      if ( *((tagTHREADINFO **)this + 12) == a2 )
      {
        *((_QWORD *)this + 12) = v12;
        ApiSetEditionUpdateRawMouseMode((__int64)this);
      }
    }
    RecalculateQueueInfo();
  }
  else
  {
    if ( (tagQ *)gpqForeground == this )
    {
      v13 = *((_QWORD *)this + 15);
      if ( v13 )
      {
        v14 = 49;
        if ( gdwDeferWinEvent )
          v14 = 51;
        xxxWindowEvent(2147483651LL, v13, 0LL, 6LL, v14);
      }
    }
    if ( qword_1C02955A0 && (int)qword_1C02955A0() >= 0 && qword_1C02955A8 )
      qword_1C02955A8(this);
    tagQ::UnlockFocusWnd(this);
    tagQ::SetActiveWindow(this, 0LL);
    HMAssignmentUnlock((__int64 *)this + 17);
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
      ClearDelegationCapture();
    HMAssignmentUnlock((__int64 *)this + 38);
    LockQCursor((__int64)this, 0LL);
    if ( (int)IsFreeMessageListSupported() >= 0 )
      FreeMessageList((__int64)this + 24);
    if ( qword_1C02955C0 && (int)qword_1C02955C0() >= 0 && (tagQ *)gpqForeground == this && qword_1C02955C8 )
      qword_1C02955C8(0LL);
    if ( (tagQ *)gpqForegroundPrev == this )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == this )
    {
      gpqCursor = 0LL;
      v2 = 1;
    }
    if ( *((_DWORD *)this + 100) )
      *((_DWORD *)this + 99) |= 0x4000000u;
    else
      FreeQueue(this, v15, v16, v17);
    if ( v2 )
      ApiSetEditionSystemGenerateMove(2LL);
  }
}
