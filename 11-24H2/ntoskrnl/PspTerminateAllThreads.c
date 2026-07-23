/*
 * XREFs of PspTerminateAllThreads @ 0x1408EEED4
 * Callers:
 *     PspTerminateProcess @ 0x1408F4E40 (PspTerminateProcess.c)
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     PspCatchCriticalBreak @ 0x140778FB8 (PspCatchCriticalBreak.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x1408EF16C (PspGetPreviousProcessThread.c)
 *     PspTerminateThreadByPointer @ 0x1408FDF10 (PspTerminateThreadByPointer.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     DbgkClearProcessDebugObject @ 0x1409E37F8 (DbgkClearProcessDebugObject.c)
 */

__int64 __fastcall PspTerminateAllThreads(
        PVOID SystemArgument1,
        struct _EX_RUNDOWN_REF *a2,
        unsigned int a3,
        unsigned int a4)
{
  PVOID Ptr; // r15
  __int64 PreviousProcessThread; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  int v12; // r13d
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v14; // rbp
  void *v15; // rax
  ULONG v16; // edx
  __int64 ProcessServerSilo; // rax
  struct _EX_RUNDOWN_REF *Object; // [rsp+88h] [rbp+10h]

  if ( (*((_DWORD *)SystemArgument1 + 125) & 0x2000) != 0 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)SystemArgument1);
    PspCatchCriticalBreak(
      (__int64)"Terminating critical process 0x%p (%s)\n",
      (ULONG_PTR)SystemArgument1,
      (const char *)SystemArgument1 + 824,
      ProcessServerSilo,
      a3);
  }
  Ptr = a2[23].Ptr;
  PreviousProcessThread = PspGetPreviousProcessThread(SystemArgument1, 0LL);
  v10 = a4 & 4 | (2 * (a4 & 1)) | (a4 >> 1) & 1;
  v11 = 290;
  if ( PreviousProcessThread )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = -1073741558;
      v16 = 1850045264;
      v15 = (void *)PreviousProcessThread;
    }
    else
    {
      Object = (struct _EX_RUNDOWN_REF *)PreviousProcessThread;
      v11 = 0;
      ObfReferenceObjectWithTag((PVOID)PreviousProcessThread, 0x65547350u);
      v12 = 0;
      do
      {
        if ( (struct _EX_RUNDOWN_REF *)PreviousProcessThread != a2 )
        {
          if ( (v10 & 4) != 0 )
          {
            v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(PreviousProcessThread + 1444) >> 3)) & 8;
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(PreviousProcessThread + 1416)) )
          {
            v10 |= 8u;
          }
          else
          {
            v10 = (v10 & 0xFFFFFFEF ^ (16
                                     * (unsigned __int8)_interlockedbittestandset(
                                                          (volatile signed __int32 *)(PreviousProcessThread + 1440),
                                                          0xFu))) & 0xFFFFFFF7;
          }
          if ( (v10 & 8) != 0 )
          {
            ++v12;
            PspTerminateThreadByPointer(PreviousProcessThread, a3, 0LL);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(SystemArgument1, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v12 && SystemArgument1 == Ptr )
        KeFlushProcessWriteBuffers(0LL);
      for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)SystemArgument1, 0LL);
            ;
            i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)SystemArgument1, v14) )
      {
        v14 = i;
        if ( i != a2 && (v10 & 4) == 0 && (i[180].Count & 0x8000) == 0 )
          ExReleaseRundownProtection_0(i + 177);
        if ( v14 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v14, 0x6E457350u);
      v15 = Object;
      v16 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v15, v16);
    if ( (v10 & 2) != 0 && a2[68].Ptr == SystemArgument1 )
      PspTerminateThreadByPointer(a2, a3, 0LL);
  }
  if ( SystemArgument1 != Ptr && a3 == 1073807364 )
    DbgkClearProcessDebugObject((PRKPROCESS)SystemArgument1);
  if ( (v11 == 290 || *((_QWORD *)SystemArgument1 + 97) && SystemArgument1 != Ptr)
    && !(unsigned __int8)PspRundownSingleProcess(SystemArgument1)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
