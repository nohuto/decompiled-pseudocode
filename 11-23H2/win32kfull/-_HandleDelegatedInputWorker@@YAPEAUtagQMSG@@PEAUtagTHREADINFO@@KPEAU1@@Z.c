/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0150288
 * Callers:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0015650 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0044C94 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00794C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     IsPointerInputMessage @ 0x1C0118DA8 (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C011923C (DelQEntry.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C014FC4A (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C0152958 (DelegateReleasePointerMessage.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B4EF8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v3; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // di
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r8
  char v15; // dl
  char v17; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3, a2);
    InputTraceLogging::DManip::HandleDelegatedInput(a3);
    v9 = 1;
    if ( a2 == 1 )
    {
      v10 = *((_DWORD *)a3 + 25);
      if ( (v10 & 0x20) != 0 )
      {
        v11 = *((_QWORD *)a3 + 2);
        *((_DWORD *)a3 + 25) = v10 & 0xFFFFFF9F | 0x40;
        v12 = HMValidateHandleNoSecure(v11, 1);
        if ( v12 )
        {
          v13 = *((_DWORD *)a3 + 25);
          if ( (v13 & 0x200) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v13 & 0xFFFFFDFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v12 + 16), a3);
          goto LABEL_25;
        }
LABEL_9:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage((void **)a3);
          DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a3, 1);
        }
        v14 = *((_QWORD *)a1 + 54);
        if ( *(struct tagQMSG **)(v14 + 88) == a3 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v15 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v9 = 0;
          }
          if ( v15 || v9 )
            WPP_RECORDER_AND_TRACE_SF_qq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v9,
              (__int64)gFullLog,
              5u,
              0x12u,
              0xEu,
              (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
              v14,
              *(_QWORD *)(v14 + 88));
          *(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) = 0LL;
        }
      }
    }
    else
    {
      if ( a2 == 2 )
        goto LABEL_9;
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_25:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17, v7, v8);
  return (struct tagQMSG *)v3;
}
