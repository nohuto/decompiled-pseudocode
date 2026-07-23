/*
 * XREFs of NtCreateJobObject @ 0x1408DB4B0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PoEnergyEstimationEnabled @ 0x14044A480 (PoEnergyEstimationEnabled.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExCreateHandleEx @ 0x140851070 (ExCreateHandleEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     PspUnlockJobListExclusive @ 0x1408D9C40 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x1408DB848 (PspLockJobListExclusive.c)
 *     PspIoRateEntryInitialize @ 0x1408DB8A4 (PspIoRateEntryInitialize.c)
 *     ExUuidCreate @ 0x1408DB8F0 (ExUuidCreate.c)
 *     EtwTraceJob @ 0x1408DBB24 (EtwTraceJob.c)
 */

NTSTATUS __cdecl NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r13d
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 PreviousMode; // si
  __int64 v7; // rcx
  char v8; // r12
  unsigned int v9; // ebx
  NTSTATUS inserted; // esi
  size_t v11; // r8
  PRKEVENT v12; // rbx
  struct _KEVENT *v13; // rax
  struct _LIST_ENTRY *v14; // rcx
  NTSTATUS v15; // r14d
  __int64 Handle; // rax
  PRKEVENT v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-88h]
  PRKEVENT Event; // [rsp+58h] [rbp-50h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  unsigned int Blink; // [rsp+C8h] [rbp+20h]

  v3 = (int)ObjectAttributes;
  Event = 0LL;
  v21 = 0LL;
  Blink = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)JobHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  *JobHandle = 0LL;
  v8 = PoEnergyEstimationEnabled();
  v9 = v8 != 0 ? 2272 : 1832;
  inserted = ObCreateObjectEx(PreviousMode, PsJobType, v3, PreviousMode, v19, v9, 0, v9, &Event, 0LL);
  if ( inserted < 0 )
  {
    v12 = Event;
  }
  else
  {
    v11 = v9;
    v12 = Event;
    memset_0(Event, 0, v11);
    v12[54].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v12;
    *(_QWORD *)&v12[2].Header.Lock = (char *)v12 + 40;
    v12[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v12[1].Header.WaitListHead.Blink;
    *(_QWORD *)&v12[54].Header.Lock = (char *)v12 + 1288;
    v12[53].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v12[53].Header.WaitListHead.Blink;
    v12[53].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v12[53];
    *(_QWORD *)&v12[53].Header.Lock = v12 + 53;
    v12[55].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v12[55];
    *(_QWORD *)&v12[55].Header.Lock = v12 + 55;
    KeInitializeEvent(v12, NotificationEvent, 0);
    v12[52].Header.WaitListHead.Blink = 0LL;
    *(_QWORD *)&v12[11].Header.Lock = 2097153LL;
    memset_0(&v12[11].Header.WaitListHead, 0, 0x100uLL);
    v12[30].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)2097153;
    memset_0(&v12[30].Header.WaitListHead.Blink, 0, 0x100uLL);
    v12[63].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v12[63];
    *(_QWORD *)&v12[63].Header.Lock = v12 + 63;
    v12[63].Header.WaitListHead.Blink = 0LL;
    if ( v8 )
      *(_QWORD *)&v12[65].Header.Lock = (char *)v12 + 1832;
    v12[24].Header.LockNV = -1;
    v12[46].Header.LockNV = 16382;
    *(_QWORD *)&v12[73].Header.Lock = 1LL;
    v12[44].Header.SignalState = 10;
    v12[24].Header.SignalState = 5;
    ExInitializeResourceLite((PERESOURCE)&v12[2].Header.WaitListHead);
    PspLockJobListExclusive(CurrentThread);
    v13 = v12 + 1;
    v14 = (struct _LIST_ENTRY *)qword_140FD9090;
    if ( *(__int64 **)qword_140FD9090 != &PspJobList )
      __fastfail(3u);
    *(_QWORD *)&v13->Header.Lock = &PspJobList;
    v12[1].Header.WaitListHead.Flink = v14;
    v14->Flink = (struct _LIST_ENTRY *)v13;
    qword_140FD9090 = (__int64)&v12[1];
    PspUnlockJobListExclusive((__int64)CurrentThread);
    v12[45].Header.SignalState = 5;
    LODWORD(v12[45].Header.WaitListHead.Flink) = 5;
    HIDWORD(v12[45].Header.WaitListHead.Flink) = 8;
    LODWORD(v12[45].Header.WaitListHead.Blink) = 8;
    LODWORD(v12[64].Header.WaitListHead.Blink) |= 0x200000u;
    Blink = (unsigned int)v12[64].Header.WaitListHead.Blink;
    while ( 1 )
    {
      v15 = ExUuidCreate((UUID *)&v12[61].Header.WaitListHead);
      if ( v15 != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    inserted = 0;
    if ( v15 != 1073872982 )
      inserted = v15;
    if ( inserted >= 0 )
    {
      Handle = ExCreateHandleEx((unsigned int *)PspUniqueJobIdTable, (__int64)v12, 0, 0, 0LL);
      if ( Handle )
        v12[61].Header.SignalState = Handle;
      else
        inserted = -1073741670;
    }
    PspIoRateEntryInitialize(&v12[68]);
    v12[70].Header.WaitListHead.Blink = 0LL;
    *(_QWORD *)&v12[71].Header.Lock = 0LL;
    v12[72].Header.WaitListHead.Blink = 0LL;
    v17 = v12;
    if ( inserted >= 0 )
    {
      PsReferenceSiloContext(v12);
      inserted = ObInsertObjectEx((char *)v12, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&v21);
      if ( inserted >= 0 )
      {
        *JobHandle = (HANDLE)v21;
        goto LABEL_21;
      }
      v17 = v12;
    }
    ObfDereferenceObject(v17);
    v12 = 0LL;
  }
LABEL_21:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(v12, Blink, (unsigned int)inserted, 1824LL);
  if ( v12 )
    ObfDereferenceObject(v12);
  return inserted;
}
