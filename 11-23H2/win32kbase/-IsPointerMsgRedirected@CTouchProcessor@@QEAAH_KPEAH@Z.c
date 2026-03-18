/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C01CCD60
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00B9740 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C01B9658 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C266C (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7400 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(struct _KTHREAD **this, __int64 a2, int *a3)
{
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v8; // rdi
  _QWORD *FrameById; // rax
  _QWORD *v10; // rsi
  CPointerInfoNode *v11; // rbx
  unsigned int v12; // ebx
  CInpLockGuard *v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v14, (struct CInpLockGuard *)(this + 4), 1);
  *a3 = 0;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, a2);
  v8 = NonConstMsgData;
  if ( NonConstMsgData
    && (FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)NonConstMsgData + 7), 4), (v10 = FrameById) != 0LL) )
  {
    if ( *((_DWORD *)v8 + 8) >= *((_DWORD *)FrameById + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13718);
    v11 = (CPointerInfoNode *)(v10[30] + 480LL * *((unsigned int *)v8 + 8));
    if ( !(unsigned int)CPointerInfoNode::IsValid(v11) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13720);
    if ( *((_DWORD *)v11 + 43) != *((unsigned __int16 *)v8 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13723);
    if ( (*((_DWORD *)v11 + 1) & 0x80u) != 0 )
      *a3 = 1;
    v12 = -__CFSHR__(*(_DWORD *)v11, 11);
  }
  else
  {
    v12 = 0;
  }
  if ( !v15 )
    CInpLockGuard::UnLock(v14);
  return v12;
}
