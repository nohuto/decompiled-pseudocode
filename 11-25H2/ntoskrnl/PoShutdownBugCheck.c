/*
 * XREFs of PoShutdownBugCheck @ 0x140747350
 * Callers:
 *     PopInitializeHibernateGlobals @ 0x14074684C (PopInitializeHibernateGlobals.c)
 *     ExpSystemErrorHandler2 @ 0x140B51340 (ExpSystemErrorHandler2.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     PsGetCurrentThreadProcessId @ 0x140431FB0 (PsGetCurrentThreadProcessId.c)
 *     PsGetCurrentThreadId @ 0x140436710 (PsGetCurrentThreadId.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     PopInternalAddToDumpFile @ 0x1405C8990 (PopInternalAddToDumpFile.c)
 *     ZwInitiatePowerAction @ 0x14069D280 (ZwInitiatePowerAction.c)
 */

void __fastcall __noreturn PoShutdownBugCheck(
        char a1,
        ULONG a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 CurrentThreadProcessId; // rax
  ULONG_PTR v13; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-48h]
  HANDLE CurrentThreadId; // [rsp+40h] [rbp-40h]
  unsigned __int64 v18; // [rsp+48h] [rbp-38h]
  ULONG v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+54h] [rbp-2Ch]
  ULONG_PTR v21; // [rsp+58h] [rbp-28h]
  ULONG_PTR v22; // [rsp+60h] [rbp-20h]
  ULONG_PTR v23; // [rsp+68h] [rbp-18h]
  ULONG_PTR v24; // [rsp+70h] [rbp-10h]
  LARGE_INTEGER Interval; // [rsp+B0h] [rbp+30h] BYREF

  v20 = 0;
  if ( PopCriticalShutdownInProgress )
  {
    Interval.QuadPart = -300000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !a1 )
  {
    Process = 0LL;
    IoConfigureCrashDump(0LL, 0LL, v10, v11);
  }
  CurrentThread = KeGetCurrentThread();
  CurrentThreadId = PsGetCurrentThreadId();
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v13 = BugCheckParameter3;
  BugCheckParameter4 = a6;
  v18 = CurrentThreadProcessId;
  v19 = a2;
  v21 = a3;
  v22 = a4;
  v23 = BugCheckParameter3;
  v24 = a6;
  *(_QWORD *)&qword_140F0AEA0 = &CurrentThread;
  ZwInitiatePowerAction(PowerActionShutdownReset, PowerSystemSleeping3, 0xC0000004, 0);
  KeBugCheckEx(a2, a3, a4, v13, BugCheckParameter4);
}
