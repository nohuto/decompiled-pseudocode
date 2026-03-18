/*
 * XREFs of UserDeleteW32Thread @ 0x1400590C0
 * Callers:
 *     DereferenceW32Thread @ 0x140058FC0 (DereferenceW32Thread.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x140045BD8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FreeMessageList @ 0x1401001D0 (FreeMessageList.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140106314 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     IsFreeMessageListSupported @ 0x140108404 (IsFreeMessageListSupported.c)
 *     FreeQueue @ 0x14010EA64 (FreeQueue.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall UserDeleteW32Thread(PVOID Buffer)
{
  struct _KTHREAD *v1; // rsi
  _DWORD *ThreadWin32Thread; // rdi
  void *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  __int64 v7; // rax
  tagQ *v8; // rcx
  char v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h]

  v1 = *(struct _KTHREAD **)Buffer;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  if ( *((_DWORD *)Buffer + 94) )
  {
    v10 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2468LL);
  }
  else
  {
    v4 = (void *)*((_QWORD *)Buffer + 96);
    if ( v4 )
      ObfDereferenceObject(v4);
    v5 = (char *)*((_QWORD *)Buffer + 116);
    if ( v5 )
      GreDeleteFastMutex(v5);
    v6 = (char *)*((_QWORD *)Buffer + 67);
    if ( v6 )
      GreDeleteFastMutex(v6);
    *((_QWORD *)Buffer + 96) = MmUserProbeAddress;
    *((_QWORD *)Buffer + 116) = MmUserProbeAddress;
    *((_QWORD *)Buffer + 67) = MmUserProbeAddress;
    v7 = *((_QWORD *)Buffer + 59);
    if ( v7 )
    {
      if ( !*(_DWORD *)(v7 + 440) )
      {
        v10 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2401LL);
      }
      --*(_DWORD *)(*((_QWORD *)Buffer + 59) + 440LL);
      v8 = (tagQ *)*((_QWORD *)Buffer + 59);
      if ( !*((_DWORD *)v8 + 110) && !tagQ::IsAnyThreadAttached(v8) )
      {
        if ( (int)IsFreeMessageListSupported() >= 0 )
          FreeMessageList(*((_QWORD *)Buffer + 59) + 24LL);
        FreeQueue(*((void **)Buffer + 59));
      }
    }
    if ( *((_QWORD *)Buffer + 62) )
      DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)Buffer + 62);
    ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(v1);
    *(_QWORD *)ThreadWin32Thread = 0LL;
    GreDeleteFastMutex((char *)Buffer);
    if ( v1 == KeGetCurrentThread() )
      ThreadWin32Thread[6] |= 0x10u;
    else
      PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
  }
  if ( !v9 )
    UserSessionSwitchLeaveCritWithNonPaged();
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
