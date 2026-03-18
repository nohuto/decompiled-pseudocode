/*
 * XREFs of zzzReattachThreads @ 0x1C0038F98
 * Callers:
 *     zzzAttachThreadInput @ 0x1C0038BD8 (zzzAttachThreadInput.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01BADCC (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0015018 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0031FE8 (zzzInputFocusReceivedWindowEvent.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0038EF4 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C0039390 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00394B4 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C0039524 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00399E8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0039D88 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     UnpackAffectedThreadList @ 0x1C0039DC8 (UnpackAffectedThreadList.c)
 *     SetNewForegroundQueue @ 0x1C0039E50 (SetNewForegroundQueue.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C003A03C (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C003A190 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1C013953C (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1C013962C (-SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139810 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _GetNextQueueWindow @ 0x1C01C9A08 (_GetNextQueueWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  int v3; // r15d
  int v4; // edi
  int v5; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // r12
  __int64 v11; // rbx
  tagQ *v12; // rdi
  __int64 v13; // rax
  const struct tagTHREADINFO *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  const struct tagTHREADINFO *v18; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rsi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  tagQ *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct tagQMSG *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 NextQueueWindow; // rax
  __int64 v32; // [rsp+40h] [rbp-48h]
  char v33; // [rsp+90h] [rbp+8h] BYREF
  int v34; // [rsp+A8h] [rbp+20h]

  v3 = 1;
  v32 = 0LL;
  v4 = a1 & 1;
  v5 = a1 & 2;
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  v9 = *(_QWORD *)(v8 + 120);
  if ( v9 )
    v10 = *(struct tagTHREADINFO **)(v9 + 16);
  else
    v10 = *(struct tagTHREADINFO **)(v8 + 104);
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v33);
  if ( v4 )
    goto LABEL_10;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_11;
  }
  if ( !v5 && !a3 )
  {
LABEL_10:
    UnpackAffectedThreadList();
    if ( v4 )
    {
LABEL_15:
      v11 = 0LL;
      goto LABEL_16;
    }
  }
LABEL_11:
  zzzRecalcThreadAttachment();
  v11 = gpqForeground;
  if ( !gpqForeground )
    v11 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( tagQ::IsSingleThreadAttached((tagQ *)v11) )
    goto LABEL_15;
  ++*(_DWORD *)(v11 + 400);
LABEL_16:
  v12 = 0LL;
  if ( gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 128LL)) != 0 )
  {
    v14 = *(const struct tagTHREADINFO **)(v13 + 16);
    v12 = (tagQ *)*((_QWORD *)v14 + 82);
    if ( !v12 && !InAffectedThreadList(v14) )
      v12 = *(tagQ **)(*(_QWORD *)(*(_QWORD *)(gpqForeground + 128LL) + 16LL) + 432LL);
    v15 = *(__int64 **)(gpqForeground + 120LL);
    if ( v15 )
      v32 = *v15;
  }
  else
  {
    v3 = 0;
  }
  v16 = 0LL;
  if ( gpqForegroundPrev )
  {
    v17 = *(_QWORD *)(gpqForegroundPrev + 136LL);
    if ( v17 )
    {
      v18 = *(const struct tagTHREADINFO **)(v17 + 16);
      v16 = *((_QWORD *)v18 + 82);
      if ( !v16 && !InAffectedThreadList(v18) )
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gpqForegroundPrev + 136LL) + 16LL) + 432LL);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      v22 = (tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 82);
      if ( v22 == *((tagQ **)RecalcPtiFromListEntry + 54) )
      {
        tagTHREADINFO::AssignAttachQueue(RecalcPtiFromListEntry, 0LL);
      }
      else if ( v22 )
      {
        tagQ::zzzAttachToQueue(v22, RecalcPtiFromListEntry, (struct tagQ *)v11, v12 == v22);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v11 )
  {
    if ( !*(_DWORD *)(v11 + 400) )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11787LL);
    }
    v25 = *(struct tagQMSG **)(v11 + 24);
    --*(_DWORD *)(v11 + 400);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_DWORD *)(v11 + 40) = 0;
    RedistributeInput(v25, (struct tagQ *)v11, v10);
    if ( !tagQ::IsAnyThreadAttached((tagQ *)v11) )
    {
      v23 = 0LL;
LABEL_47:
      zzzDestroyQueue(v26, v23);
      goto LABEL_48;
    }
    v27 = *(_QWORD *)(v11 + 96);
    if ( v27 && v11 != *(_QWORD *)(v27 + 432) )
      zzzDestroyQueue(v26, v27);
    v23 = *(_QWORD *)(v11 + 104);
    if ( v23 && v11 != *(_QWORD *)(v23 + 432) )
    {
      v26 = v11;
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    if ( (tagQ *)gpqForeground != v12 )
    {
      if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(
                           grpdeskRitInput,
                           v23,
                           v24) )
      {
        if ( v12 )
          SetNewForegroundQueue2(v12, 0LL);
        else
          ResetForegroundQueue(0LL);
      }
      else
      {
        SetNewForegroundQueue(v12);
      }
      gpqForegroundPrev = v16;
      if ( gpqForeground )
      {
        v29 = *(_QWORD **)(gpqForeground + 120LL);
        if ( v29 )
        {
          if ( v32 != *v29 )
            zzzInputFocusReceivedWindowEvent(4u);
        }
      }
    }
    UnpackAffectedThreadList();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33);
    zzzEndDeferWinEventNotify(v30);
    if ( !gpqForeground && v3 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 112LL),
                          0LL,
                          0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *(struct tagTHREADINFO **)(NextQueueWindow + 16),
          *(struct tagQ **)(*(_QWORD *)(NextQueueWindow + 16) + 432LL),
          6u,
          0LL,
          0,
          0LL,
          *(_QWORD *)NextQueueWindow,
          0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33);
    zzzEndDeferWinEventNotify(v28);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33);
  }
}
