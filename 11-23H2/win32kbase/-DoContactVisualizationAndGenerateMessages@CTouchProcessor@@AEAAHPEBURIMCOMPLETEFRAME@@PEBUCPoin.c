/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01C1D88
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01D0228 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01D0844 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00B9720 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00B9790 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C00D41B0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C00D462C (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E3A96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     IsTouchpadDevice @ 0x1C00E5A5C (IsTouchpadDevice.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C01C1CD0 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4EF8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C7248 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z @ 0x1C01CC0E4 (-HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C01D0B1C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D82E0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C0205F98 (ApiSetEditionEdgyProcessInput.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        CTouchProcessor *this,
        const struct RIMCOMPLETEFRAME *a2,
        const struct CPointerInputFrame *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  const struct CPointerInputFrame *v8; // rsi
  PDEVICE_OBJECT v10; // rcx
  char v11; // di
  CTouchProcessor *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // ebx
  unsigned int v19; // r8d
  struct CPointerInputFrame *v21; // rbp
  const struct CPointerInputFrame *NextFrame; // rbx
  unsigned int MessagesCore; // ebx
  int v24; // edx
  int v25; // r8d
  _BYTE v26[40]; // [rsp+40h] [rbp-88h] BYREF
  CInpLockGuard *v27; // [rsp+68h] [rbp-60h]
  CInpLockGuard *v28[6]; // [rsp+70h] [rbp-58h] BYREF
  struct CPointerInputFrame *v29; // [rsp+D8h] [rbp+10h] BYREF

  v29 = a2;
  v8 = a3;
  v10 = WPP_GLOBAL_Control;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      327,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  if ( *((struct _KTHREAD **)this + 5) != KeGetCurrentThread() )
  {
    LODWORD(v29) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14736);
  }
  if ( !a7 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v26,
      (CTouchProcessor *)((char *)this + 32),
      0LL,
      a4);
    CTouchProcessor::DoContactVisualization(v12, v8, a4, a5);
    CInpLockGuard::LockExclusive(v27);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v26, v13, v14, v15);
  }
  if ( qword_1C0296AF0
    && (int)qword_1C0296AF0() >= 0
    && qword_1C0296AF8
    && (unsigned int)qword_1C0296AF8()
    && !IsTouchpadDevice(a4) )
  {
    v29 = 0LL;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v28,
      (CTouchProcessor *)((char *)this + 32),
      0LL,
      v16);
    v18 = ApiSetEditionEdgyProcessInput(this, v17, v8, &v29);
    InputTraceLogging::Pointer::HandleDesktopEdgy(v8, v18);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v28);
    if ( !v18 )
    {
      *((_DWORD *)v8 + 57) |= 0x20u;
      return 1LL;
    }
    v21 = v29;
    if ( v29 )
    {
      *((_DWORD *)v29 + 57) &= ~0x20u;
      if ( v29 )
      {
        if ( *((_DWORD *)v29 + 12) == 1 && (*((_DWORD *)v29 + 57) & 8) != 0 )
        {
          v10 = (PDEVICE_OBJECT)*((_QWORD *)v29 + 30);
          if ( (*(_DWORD *)&v10->Type & 0x400) != 0 && (HIDWORD(v10->DeviceQueue.DeviceListHead.Blink) & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v29, v19);
        }
      }
      do
      {
        if ( v21 == v8 )
          break;
        CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList((CTouchProcessor *)v10, v21);
        CTouchProcessor::GenerateMessagesCore(
          this,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v21 + 32) + 360LL), 4),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v21 + 32) + 360LL), 5),
          0,
          v21);
        NextFrame = CTouchProcessor::GetNextFrame(this, v21, (struct _LIST_ENTRY *)((char *)this + 56));
        CTouchProcessor::UnreferenceFrame(this, v21);
        v21 = NextFrame;
      }
      while ( NextFrame );
    }
    if ( qword_1C0296B10 && (int)qword_1C0296B10() >= 0 && qword_1C0296B18 )
      qword_1C0296B18();
  }
  CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList((CTouchProcessor *)v10, v8);
  MessagesCore = CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, v8);
  CTouchProcessor::UnreferenceFrame(this, v8);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v24) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( (_BYTE)v24 || v11 )
  {
    LOBYTE(v25) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v24,
      v25,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      328,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  }
  return MessagesCore;
}
