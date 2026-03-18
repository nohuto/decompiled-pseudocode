/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1401FAE28
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x140203D88 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140204168 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     IsTouchpadDevice @ 0x140048B4C (IsTouchpadDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14010EE14 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x14011C6D4 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z @ 0x140154320 (-HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z.c)
 *     ApiSetEditionEdgyProcessInput @ 0x14019180C (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x140191880 (ApiSetEditionEdgyResetCurrentFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1401FEE14 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x140204464 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        CTouchProcessor *this,
        const struct RIMCOMPLETEFRAME *a2,
        const struct CPointerInputFrame *a3,
        void *a4,
        int a5,
        int a6,
        int a7)
{
  const struct CPointerInputFrame *v8; // rsi
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  CTouchProcessor *v13; // rcx
  CTouchProcessor *v14; // rcx
  int (*v15)(void); // rax
  __int64 v16; // rdx
  unsigned int (*v17)(void); // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // ebx
  struct CPointerInputFrame *v21; // rdx
  CTouchProcessor *v22; // rcx
  unsigned int v23; // r8d
  struct CPointerInputFrame *v25; // rbp
  const struct CPointerInputFrame *NextFrame; // rbx
  unsigned int MessagesCore; // ebx
  int v28; // edx
  int v29; // r8d
  PERESOURCE *v30[6]; // [rsp+40h] [rbp-58h] BYREF
  struct CPointerInputFrame *v31; // [rsp+A8h] [rbp+10h] BYREF

  v31 = a2;
  v8 = a3;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      331,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)this + 4) )
  {
    LODWORD(v31) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14914);
  }
  if ( !a7 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v30,
      (CTouchProcessor *)((char *)this + 32),
      0LL);
    CTouchProcessor::DoContactVisualization(v13, v8, a4, a5);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v30);
  }
  v14 = *(CTouchProcessor **)(W32GetWin32kBaseApiSetTable(v12, v11) + 48);
  v15 = (int (*)(void))*((_QWORD *)v14 + 832);
  if ( v15 )
  {
    if ( v15() >= 0 )
    {
      v14 = *(CTouchProcessor **)(W32GetWin32kBaseApiSetTable(v14, v16) + 48);
      v17 = (unsigned int (*)(void))*((_QWORD *)v14 + 833);
      if ( v17 )
      {
        if ( v17() && !IsTouchpadDevice((__int64)a4, v18) )
        {
          v31 = 0LL;
          CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
            (CInpUnlockGuardExclusive *)v30,
            (CTouchProcessor *)((char *)this + 32),
            0LL);
          v20 = ApiSetEditionEdgyProcessInput((__int64)this, v19, (__int64)v8, (__int64)&v31);
          InputTraceLogging::Pointer::HandleDesktopEdgy(v8);
          CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v30);
          if ( !v20 )
          {
            *((_DWORD *)v8 + 57) |= 0x20u;
            return 1LL;
          }
          v25 = v31;
          if ( v31 )
          {
            *((_DWORD *)v31 + 57) &= ~0x20u;
            v21 = v31;
            if ( v31 )
            {
              if ( *((_DWORD *)v31 + 12) == 1 && (*((_DWORD *)v31 + 57) & 8) != 0 )
              {
                v22 = (CTouchProcessor *)*((_QWORD *)v31 + 30);
                if ( (*(_DWORD *)v22 & 0x400) != 0 && (*((_DWORD *)v22 + 45) & 1) == 0 )
                  CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v31, v23);
              }
            }
            do
            {
              if ( v25 == v8 )
                break;
              CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v22, v25);
              CTouchProcessor::GenerateMessagesCore(
                this,
                -__CFSHR__(*(_DWORD *)(*((_QWORD *)v25 + 32) + 368LL), 4),
                -__CFSHR__(*(_DWORD *)(*((_QWORD *)v25 + 32) + 368LL), 5),
                0,
                v25);
              NextFrame = CTouchProcessor::GetNextFrame(this, v25, (struct _LIST_ENTRY *)this + 3);
              CTouchProcessor::UnreferenceFrame(this, v25);
              v25 = NextFrame;
            }
            while ( NextFrame );
          }
          ApiSetEditionEdgyResetCurrentFrame((__int64)v22, (__int64)v21);
        }
      }
    }
  }
  CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v14, v8);
  MessagesCore = CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, v8);
  CTouchProcessor::UnreferenceFrame(this, v8);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v28) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v28) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v10 = 0;
  if ( (_BYTE)v28 || v10 )
  {
    LOBYTE(v29) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v29,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      332,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  return MessagesCore;
}
