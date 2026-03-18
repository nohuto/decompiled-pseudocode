/*
 * XREFs of FreeTimer @ 0x1C0040360
 * Callers:
 *     DestroyThreadsTimers @ 0x1C003C800 (DestroyThreadsTimers.c)
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0071B3C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyWindowsTimers @ 0x1C008241C (DestroyWindowsTimers.c)
 * Callees:
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1C0040918 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0040A18 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C013AB80 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagTIMER *__fastcall FreeTimer(struct tagTIMER *a1)
{
  __int64 v2; // rbx
  char *v4; // rdi
  struct tagTIMER *v5; // rbp
  char **v6; // rsi
  __int64 v7; // rcx
  char *v8; // rax
  char *v9; // rdi
  char **v10; // rsi
  __int64 v11; // rdx
  char *v12; // rcx
  char v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h]

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v13, a1);
  *((_DWORD *)a1 + 12) |= 0x1000u;
  if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
    DecTimerCountAndClearReadyFlag(a1);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
    if ( !*((_QWORD *)a1 + 11) )
      _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock((char *)a1 + 88);
    v4 = (char *)a1 + 72;
    v5 = (struct tagTIMER *)*((_QWORD *)a1 + 9);
    v6 = (char **)((char *)a1 + 80);
    if ( v5 == (struct tagTIMER *)((char *)a1 + 72) || *v6 == v4 )
    {
      v15 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5191LL);
    }
    v7 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
      goto LABEL_18;
    v8 = *v6;
    if ( *(char **)*v6 != v4 )
      goto LABEL_18;
    *(_QWORD *)v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = v4;
    *(_QWORD *)v4 = v4;
    v9 = (char *)a1 + 112;
    v10 = (char **)((char *)a1 + 120);
    if ( *(char **)v9 == v9 || *v10 == v9 )
    {
      v15 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5191LL);
    }
    v11 = *(_QWORD *)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v12 = *v10, *(char **)*v10 != v9) )
LABEL_18:
      __fastfail(3u);
    *(_QWORD *)v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = v9;
    *(_QWORD *)v9 = v9;
    HMFreeObject(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v13);
    return v5;
  }
  else
  {
    v2 = *((_QWORD *)a1 + 9);
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v13);
    return (struct tagTIMER *)v2;
  }
}
