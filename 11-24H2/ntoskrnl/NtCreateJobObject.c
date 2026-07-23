/*
 * XREFs of NtCreateJobObject @ 0x14085C390
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PoEnergyEstimationEnabled @ 0x140440E80 (PoEnergyEstimationEnabled.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ExUuidCreate @ 0x14085C0B0 (ExUuidCreate.c)
 *     PspIoRateEntryInitialize @ 0x14085C2E4 (PspIoRateEntryInitialize.c)
 *     PspLockJobListExclusive @ 0x14085C330 (PspLockJobListExclusive.c)
 *     EtwTraceJob @ 0x14085C728 (EtwTraceJob.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     PspUnlockJobListExclusive @ 0x140A4EB18 (PspUnlockJobListExclusive.c)
 */

NTSTATUS __cdecl NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r13d
  struct _KTHREAD *CurrentThread; // r14
  char PreviousMode; // si
  __int64 v7; // rcx
  char v8; // r12
  int v9; // r9d
  int v10; // ecx
  NTSTATUS Object; // esi
  NTSTATUS v12; // r14d
  __int64 Handle; // rax
  __int64 v15; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+C8h] [rbp+20h]

  v3 = (int)ObjectAttributes;
  v15 = 0LL;
  v18 = 0;
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
  LOBYTE(v9) = PreviousMode;
  LOBYTE(v10) = PreviousMode;
  Object = ObCreateObjectEx(v10, (_DWORD)PsJobType, v3, v9);
  if ( Object >= 0 )
  {
    memset_0(0LL, 0, v8 != 0 ? 2272 : 1832);
    MEMORY[0x520] = 0LL;
    MEMORY[0x30] = 40LL;
    MEMORY[0x28] = 40LL;
    MEMORY[0x510] = 1288LL;
    MEMORY[0x508] = 1288LL;
    MEMORY[0x500] = 1272LL;
    MEMORY[0x4F8] = 1272LL;
    MEMORY[0x530] = 1320LL;
    MEMORY[0x528] = 1320LL;
    KeInitializeEvent(0LL, NotificationEvent, 0);
    MEMORY[0x4F0] = 0LL;
    MEMORY[0x108] = 2097153LL;
    memset_0((void *)0x110, 0, 0x100uLL);
    MEMORY[0x2D8] = 2097153LL;
    memset_0((void *)0x2E0, 0, 0x100uLL);
    MEMORY[0x5F0] = 1512LL;
    MEMORY[0x5E8] = 1512LL;
    MEMORY[0x5F8] = 0LL;
    if ( v8 )
      MEMORY[0x618] = 1832LL;
    MEMORY[0x240] = -1;
    MEMORY[0x450] = 16382;
    MEMORY[0x6D8] = 1LL;
    MEMORY[0x424] = 10;
    MEMORY[0x244] = 5;
    ExInitializeResourceLite((PERESOURCE)0x38);
    PspLockJobListExclusive((__int64)CurrentThread);
    if ( *(__int64 **)qword_140FDA070 != &PspJobList )
      __fastfail(3u);
    MEMORY[0x18] = &PspJobList;
    MEMORY[0x20] = qword_140FDA070;
    *(_QWORD *)qword_140FDA070 = 24LL;
    qword_140FDA070 = 24LL;
    PspUnlockJobListExclusive(CurrentThread);
    MEMORY[0x43C] = 5;
    MEMORY[0x440] = 5;
    MEMORY[0x444] = 8;
    MEMORY[0x448] = 8;
    MEMORY[0x610] |= 0x200000u;
    v18 = MEMORY[0x610];
    while ( 1 )
    {
      v12 = ExUuidCreate((UUID *)0x5C0);
      if ( v12 != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    Object = 0;
    if ( v12 != 1073872982 )
      Object = v12;
    if ( Object >= 0 )
    {
      Handle = ExCreateHandleEx((unsigned int *)PspUniqueJobIdTable, 0LL, 0, 0, 0LL);
      if ( Handle )
        MEMORY[0x5BC] = Handle;
      else
        Object = -1073741670;
    }
    PspIoRateEntryInitialize(1632LL);
    MEMORY[0x6A0] = 0LL;
    MEMORY[0x6A8] = 0LL;
    MEMORY[0x6D0] = 0LL;
    if ( Object < 0
      || (PsReferenceSiloContext(0LL),
          Object = ObInsertObjectEx(0LL, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&v15),
          Object < 0) )
    {
      ObfDereferenceObject(0LL);
    }
    else
    {
      *JobHandle = (HANDLE)v15;
    }
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(0LL, v18, (unsigned int)Object, 1824LL);
  return Object;
}
