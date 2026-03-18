/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1401FB424
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1401F6BF0 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1400C393C (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1400DE4B4 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DE6A8 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ApiSetEditionGetInputDelegate @ 0x140191B08 (ApiSetEditionGetInputDelegate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x140205680 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x140208784 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208EB4 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        PERESOURCE *this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        unsigned __int64 a5)
{
  CTouchProcessor *v9; // rcx
  const struct CPointerInputFrame *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  _OWORD v15[7]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v16[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v17; // [rsp+F0h] [rbp-10h]
  __int128 v18; // [rsp+100h] [rbp+0h]

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15739);
  v10 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15743);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 57) &= ~2u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(v9, a2, v10 != 0LL);
  v11 = (unsigned __int16)*((_DWORD *)a3 + 48);
  UserSessionState = W32GetUserSessionState(v12);
  CInputDest::CInputDest((CInputDest *)v16, *(struct tagWND *const *)(*(_QWORD *)(UserSessionState + 19888) + 40 * v11));
  if ( HIDWORD(v17) )
  {
    v15[0] = v16[0];
    v15[2] = v16[2];
    v15[1] = v16[1];
    v15[4] = v16[4];
    v15[3] = v16[3];
    v15[6] = v18;
    v15[5] = v17;
    if ( ApiSetEditionGetInputDelegate(v15, v14) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v10, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v10, a2);
  if ( v10 )
    CTouchProcessor::UnreferenceFrameInt(this, v10);
  CInputDest::~CInputDest((CInputDest *)v16);
}
