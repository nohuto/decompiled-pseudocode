/*
 * XREFs of PspTerminateAllThreads @ 0x14094A964
 * Callers:
 *     PspTerminateProcess @ 0x140939700 (PspTerminateProcess.c)
 *     NtTerminateProcess @ 0x14093B030 (NtTerminateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KeFlushProcessWriteBuffers @ 0x1403AFA9C (KeFlushProcessWriteBuffers.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     PspCatchCriticalBreak @ 0x140778EB8 (PspCatchCriticalBreak.c)
 *     PspTerminateThreadByPointer @ 0x1408A7CB0 (PspTerminateThreadByPointer.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x14094ABFC (PspGetPreviousProcessThread.c)
 *     DbgkClearProcessDebugObject @ 0x1409E8838 (DbgkClearProcessDebugObject.c)
 */

__int64 __fastcall PspTerminateAllThreads(PVOID SystemArgument1, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  PVOID v8; // r15
  ULONG_PTR PreviousProcessThread; // rbp
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
  v8 = *(PVOID *)(a2 + 184);
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
        if ( PreviousProcessThread != a2 )
        {
          if ( (v10 & 4) != 0 )
          {
            v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(PreviousProcessThread + 1444) >> 3)) & 8;
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(PreviousProcessThread + 1416)) )
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
            PspTerminateThreadByPointer(PreviousProcessThread, a3, 0);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(SystemArgument1, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v12 && SystemArgument1 == v8 )
        KeFlushProcessWriteBuffers(0LL);
      for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)SystemArgument1, 0LL);
            ;
            i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)SystemArgument1, v14) )
      {
        v14 = i;
        if ( i != (struct _EX_RUNDOWN_REF *)a2 && (v10 & 4) == 0 && (i[180].Count & 0x8000) == 0 )
          ExReleaseRundownProtection_0(i + 177);
        if ( v14 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v14, 0x6E457350u);
      v15 = Object;
      v16 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v15, v16);
    if ( (v10 & 2) != 0 && *(PVOID *)(a2 + 544) == SystemArgument1 )
      PspTerminateThreadByPointer(a2, a3, 0);
  }
  if ( SystemArgument1 != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject((PRKPROCESS)SystemArgument1);
  if ( (v11 == 290 || *((_QWORD *)SystemArgument1 + 97) && SystemArgument1 != v8)
    && !PspRundownSingleProcess((char *)SystemArgument1, 0)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
