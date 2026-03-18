/*
 * XREFs of PspFindFirstThreadByTebValue @ 0x140ABF77C
 * Callers:
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetThreadId @ 0x14044B4F0 (PsGetThreadId.c)
 *     PsGetThreadTeb @ 0x140456DA0 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspFindFirstThreadByTebValue(
        __int64 BugCheckParameter1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char v7; // r12
  unsigned __int64 v8; // rax
  struct _KTHREAD *i; // rdx
  _QWORD *NextProcessThread; // rax
  struct _KTHREAD *v11; // rbx
  struct _EX_RUNDOWN_REF *v12; // r15
  __int64 ThreadTeb; // rax
  char v14; // r14
  unsigned int v15; // ebx
  __int64 v17; // [rsp+28h] [rbp-A0h]
  _OWORD v19[3]; // [rsp+58h] [rbp-70h] BYREF

  memset(v19, 0, sizeof(v19));
  v7 = 0;
  v8 = 6264LL;
  v17 = 0LL;
  if ( *(_QWORD *)(BugCheckParameter1 + 784) )
  {
    v8 = 12344LL;
    if ( *(_WORD *)(BugCheckParameter1 + 1772) == 0x8664 )
      v8 = 14456LL;
  }
  if ( a2 >= v8 || v8 - a2 < 8 || (a2 & 7) != 0 )
  {
    v15 = -1073741811;
  }
  else
  {
    if ( (_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v19);
      v7 = 1;
    }
    for ( i = 0LL; ; i = v11 )
    {
      NextProcessThread = PsGetNextProcessThread(BugCheckParameter1, i);
      v11 = (struct _KTHREAD *)NextProcessThread;
      if ( !NextProcessThread )
        goto LABEL_20;
      if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0 )
      {
        v12 = (struct _EX_RUNDOWN_REF *)(NextProcessThread + 177);
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)NextProcessThread + 177) )
        {
          ThreadTeb = PsGetThreadTeb((__int64)v11);
          if ( ThreadTeb )
          {
            v14 = 1;
            v17 = *(_QWORD *)(ThreadTeb + a2);
          }
          else
          {
            v14 = 0;
          }
          ExReleaseRundownProtection_0(v12);
          if ( v14 )
          {
            if ( v17 == a3 )
              break;
          }
        }
      }
    }
    if ( !v11 )
    {
LABEL_20:
      v15 = -1073741275;
      goto LABEL_23;
    }
    *a4 = (unsigned int)PsGetThreadId(v11);
    ObfDereferenceObjectWithTag(v11, 0x6E457350u);
    v15 = 0;
  }
LABEL_23:
  if ( v7 )
    KiUnstackDetachProcess((__int64)v19, 0);
  return v15;
}
