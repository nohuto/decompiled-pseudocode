/*
 * XREFs of PspAttachSession @ 0x140AC8888
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
 *     Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline @ 0x1405D9F84 (Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall PspAttachSession(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 SessionById; // rax
  void *v6; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *v9; // rdi
  __int64 v10; // r14
  _KPROCESS *Process; // rbp
  unsigned __int64 CycleTime; // r15

  *a3 = 0LL;
  SessionById = PsGetSessionById(a1);
  v6 = (void *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  CurrentThread = KeGetCurrentThread();
  v9 = (_KPROCESS *)SessionById;
  v10 = *(_QWORD *)(SessionById + 744);
  Process = CurrentThread->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  PspLockProcessListExclusive((__int64)CurrentThread);
  if ( (*(_DWORD *)(v10 + 4) & 2) != 0 )
  {
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    ObfDereferenceObjectWithTag(v6, 0x79517350u);
    return 3221225738LL;
  }
  ++*(_DWORD *)(v10 + 52);
  PspUnlockProcessListExclusive((__int64)CurrentThread);
  if ( !(unsigned int)Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline()
    && CycleTime
    && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0
    && CycleTime == v10 )
  {
    v9 = Process;
  }
  KiStackAttachProcess(v9, 0, a2);
  result = 0LL;
  *a3 = v6;
  return result;
}
