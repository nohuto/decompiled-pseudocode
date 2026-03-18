/*
 * XREFs of ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x14019C7D0
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1402152B8 (UserSetMITInputCallbacks.c)
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1400C2150 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x14014E590 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThreadBase::DeclareThreadAsInput(CInputThreadBase *this)
{
  char v2; // si
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  unsigned int CurrentThreadId; // eax

  W32AcquirePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0);
  if ( *((_QWORD *)this + 3) )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 16)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 100);
    v4 = PtiCurrent(v3);
    *((_QWORD *)this + 3) = v4;
    *((_QWORD *)this + 4) = *(_QWORD *)v4;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *((_DWORD *)this + 4) = 1;
    *((_DWORD *)this + 10) = CurrentThreadId;
    SetThreadBasePriority(KeGetCurrentThread(), 16);
  }
  W32ReleasePushLockExclusiveEx((CInputThreadBase *)((char *)this + 8), 0LL);
  return v2;
}
