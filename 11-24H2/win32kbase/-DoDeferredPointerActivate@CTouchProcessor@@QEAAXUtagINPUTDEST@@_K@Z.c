/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1401FB180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1400967F8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1400C38DC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x140192AE0 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F32F4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F63B8 (--0CInpUnlockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, void *a3)
{
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  _QWORD v24[3]; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v25[7]; // [rsp+50h] [rbp-B0h] BYREF
  PERESOURCE *v26[6]; // [rsp+C0h] [rbp-40h] BYREF
  PERESOURCE *v27[6]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v28[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v29[128]; // [rsp+160h] [rbp+60h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v27, (PERESOURCE *)(a1 + 32), a3);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, (unsigned __int64)a3);
  v8 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v9 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    v10 = v9;
    if ( v9 )
    {
      if ( *((_DWORD *)v8 + 8) >= *(_DWORD *)(v9 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12962);
      v11 = *(_QWORD *)(v10 + 240) + 480LL * *((unsigned int *)v8 + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12964);
      if ( *((_WORD *)v8 + 8) != *(_WORD *)(v11 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12965);
      v13 = PtiCurrent(v12);
      v24[0] = *((_QWORD *)v13 + 48);
      *((_QWORD *)v13 + 48) = v24;
      v24[2] = CTouchProcessor::DereferencePointerInputFrame;
      v24[1] = v10;
      CInputDest::CInputDest((CInputDest *)v29, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v28, (struct CInputDest *)v29);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v26,
        (struct CEResourceLock *)(a1 + 32),
        *(void **)(v11 + 16));
      v14 = *(_QWORD *)(v11 + 16);
      v15 = *(_OWORD *)(a2 + 16);
      v16 = *(unsigned __int16 *)(v11 + 144);
      v25[0] = *(_OWORD *)a2;
      v17 = *(_OWORD *)(a2 + 32);
      v25[1] = v15;
      v18 = *(_OWORD *)(a2 + 48);
      v25[2] = v17;
      v19 = *(_OWORD *)(a2 + 64);
      v25[3] = v18;
      v20 = *(_OWORD *)(a2 + 80);
      v25[4] = v19;
      v21 = *(_OWORD *)(a2 + 96);
      v25[5] = v20;
      v25[6] = v21;
      ApiSetEditionPointerActivate(v25, v16, v14, v11 + 160);
      CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v26);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v28);
      CInputDest::~CInputDest((CInputDest *)v29);
      v23 = PtiCurrent(v22);
      *((_QWORD *)v23 + 48) = v24[0];
      CTouchProcessor::UnreferenceFrame(a1, v10);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v27);
}
