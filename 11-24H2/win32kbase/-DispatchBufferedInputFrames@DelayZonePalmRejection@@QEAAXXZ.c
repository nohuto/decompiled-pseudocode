/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x140211368
 * Callers:
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x14006034C (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C2FA8 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1402118F4 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x14019F25C (-UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1401FACB0 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(DelayZonePalmRejection *this)
{
  char v1; // r14
  int v3; // esi
  CTouchProcessor *v4; // rcx
  char v5; // r15
  int v6; // ebx
  int v7; // edi
  __int64 UserSessionState; // rax
  struct CPointerInputFrame *Next; // rbx
  struct CPointerInputFrame *i; // rdi
  __int64 v11; // rax
  __int64 v12; // rax

  v1 = 1;
  if ( *((_DWORD *)this + 1) == 1 )
  {
    v3 = 0;
    if ( !*((_BYTE *)this + 8) )
    {
      v4 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v1 = 0;
      }
      v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = *((_DWORD *)this + 11);
        v7 = *((_DWORD *)this + 10);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v1,
          v5,
          *(_QWORD *)(UserSessionState + 69400),
          4u,
          4u,
          0xCu,
          (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
          v7,
          v6);
      }
      Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
      for ( i = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
            Next;
            Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(
                     *(CTouchProcessor **)(v11 + 3264),
                     Next) )
      {
        if ( Next == i )
          break;
        v11 = W32GetUserSessionState(v4);
      }
      if ( i )
      {
        v12 = W32GetUserSessionState(v4);
        CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(*(CTouchProcessor **)(v12 + 3264), i);
      }
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
      {
        v3 = 2;
      }
      else
      {
        *((_QWORD *)this + 4) = 0LL;
        *((_QWORD *)this + 2) = 0LL;
      }
      *((_DWORD *)this + 1) = v3;
      DelayZonePalmRejection::UnlockTouchDeviceHandle(this);
    }
  }
}
