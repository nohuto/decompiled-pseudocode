/*
 * XREFs of DbgkpSetProcessDebugObject @ 0x1409E3B48
 * Callers:
 *     NtDebugActiveProcess @ 0x1409E31E0 (NtDebugActiveProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408F50E4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x1409E3D8C (DbgkpWakeTarget.c)
 *     DbgkpMarkProcessPeb @ 0x140AABE84 (DbgkpMarkProcessPeb.c)
 */

__int64 DbgkpSetProcessDebugObject(PRKPROCESS PROCESS, PRKEVENT Event, int a3, ...)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // edi
  _QWORD *v7; // rbx
  struct _KEVENT *Flink; // r14
  struct _KEVENT *v9; // rbx
  LONG SignalState; // eax
  struct _LIST_ENTRY *Blink; // r13
  struct _KEVENT **v12; // rax
  PVOID *v13; // rax
  LONG v14; // eax
  PVOID v15; // rcx
  __int64 v16; // rax
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  _QWORD *NextProcessThread; // r14
  PVOID v21; // [rsp+30h] [rbp-30h] BYREF
  struct _KTHREAD *v22; // [rsp+38h] [rbp-28h]
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-10h]
  char v26; // [rsp+A8h] [rbp+48h]
  char v27; // [rsp+B0h] [rbp+50h]
  PVOID Object; // [rsp+B8h] [rbp+58h] BYREF
  va_list Objecta; // [rsp+B8h] [rbp+58h]
  va_list va1; // [rsp+C0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(Objecta, a3);
  Object = va_arg(va1, PVOID);
  CurrentThread = KeGetCurrentThread();
  p_P = &P;
  v21 = 0LL;
  P = &P;
  v22 = CurrentThread;
  v4 = a3;
  v26 = 1;
  v27 = 0;
  if ( a3 >= 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v27 = 1;
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      v7 = Object;
      if ( PROCESS[1].UserTime )
        break;
      PROCESS[1].UserTime = (unsigned __int64)Event;
      ObfReferenceObjectWithTag(v7, 0x4F676244u);
      NextProcessThread = PsGetNextProcessThread((__int64)PROCESS, v7);
      if ( !NextProcessThread )
        goto LABEL_3;
      PROCESS[1].UserTime = 0LL;
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      v27 = 0;
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
      v4 = DbgkpPostFakeThreadMessages((__int64)PROCESS, Event, (__int64)NextProcessThread, &v21, (PVOID *)Objecta);
      if ( v4 < 0 )
      {
        v7 = 0LL;
        Object = 0LL;
        goto LABEL_3;
      }
      ObfDereferenceObjectWithTag(v21, 0x4F676244u);
    }
    v4 = -1073741752;
  }
  else
  {
    v7 = 0LL;
    Object = 0LL;
  }
LABEL_3:
  Mutex = (PKGUARDED_MUTEX)&Event[1];
  ExAcquireFastMutex((PKGUARDED_MUTEX)&Event[1]);
  if ( v4 >= 0 )
  {
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      PROCESS[1].UserTime = 0LL;
      v4 = -1073740972;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, 3u);
      PsReferenceSiloContext(Event);
      v7 = Object;
    }
  }
  Flink = (struct _KEVENT *)Event[3].Header.WaitListHead.Flink;
  if ( Flink == (struct _KEVENT *)&Event[3].Header.WaitListHead )
    goto LABEL_19;
  do
  {
    v9 = Flink;
    Flink = *(struct _KEVENT **)&Flink->Header.Lock;
    SignalState = v9[3].Header.SignalState;
    if ( (SignalState & 4) == 0 || (struct _KTHREAD *)v9[3].Header.WaitListHead.Flink != CurrentThread )
      continue;
    Blink = v9[2].Header.WaitListHead.Blink;
    if ( v4 < 0 )
    {
      if ( (struct _KEVENT *)Flink->Header.WaitListHead.Flink != v9 )
        goto LABEL_12;
      v12 = (struct _KEVENT **)v9->Header.WaitListHead.Flink;
      if ( *v12 != v9 )
        goto LABEL_12;
      *v12 = Flink;
      Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
LABEL_11:
      v13 = p_P;
      if ( *p_P != &P )
        goto LABEL_12;
      *(_QWORD *)&v9->Header.Lock = &P;
      v9->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v13;
      *v13 = v9;
      p_P = (PVOID *)v9;
      goto LABEL_14;
    }
    if ( (SignalState & 0x10) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&Blink[90], 0x80u);
      v17 = *(struct _LIST_ENTRY **)&v9->Header.Lock;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v9->Header.Lock + 8LL) != v9
        || (v18 = v9->Header.WaitListHead.Flink, (struct _KEVENT *)v18->Flink != v9) )
      {
LABEL_12:
        __fastfail(3u);
      }
      v18->Flink = v17;
      v17->Blink = v18;
      goto LABEL_11;
    }
    if ( v26 )
    {
      v9[3].Header.SignalState = SignalState & 0xFFFFFFFB;
      KeSetEvent(Event, 0, 0);
      v26 = 0;
    }
    v9[3].Header.WaitListHead.Flink = 0LL;
    _InterlockedOr((volatile signed __int32 *)&Blink[90], 0x40u);
LABEL_14:
    v14 = v9[3].Header.SignalState;
    if ( (v14 & 8) != 0 )
    {
      v9[3].Header.SignalState = v14 & 0xFFFFFFF7;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Blink[88].Blink);
    }
    CurrentThread = v22;
  }
  while ( Flink != (struct _KEVENT *)&Event[3].Header.WaitListHead );
  v7 = Object;
LABEL_19:
  KeReleaseGuardedMutex(Mutex);
  if ( v27 )
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
  while ( 1 )
  {
    v15 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_12;
    v16 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_12;
    P = *(PVOID *)P;
    *(_QWORD *)(v16 + 8) = &P;
    DbgkpWakeTarget(v15);
  }
  if ( v4 >= 0 )
    DbgkpMarkProcessPeb(PROCESS);
  return (unsigned int)v4;
}
