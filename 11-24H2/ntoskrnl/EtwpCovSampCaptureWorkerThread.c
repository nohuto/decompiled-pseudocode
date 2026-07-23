/*
 * XREFs of EtwpCovSampCaptureWorkerThread @ 0x1407B2900
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140434AE4 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140439240 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x1404ED000 (EtwpCovSampLookasideGrow.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140922AE8 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140924BD4 (EtwpCovSampSampleBufferProcess.c)
 */

void __fastcall __noreturn EtwpCovSampCaptureWorkerThread(__int64 a1)
{
  _QWORD **v2; // r14
  unsigned int v3; // eax
  unsigned int v4; // edi
  PSLIST_ENTRY v5; // rdi
  PSLIST_ENTRY v6; // rsi
  _SLIST_ENTRY *Next; // rax
  int v8; // ecx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  PVOID Object[2]; // [rsp+40h] [rbp-78h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-68h] BYREF

  Object[0] = (PVOID)(a1 + 1104);
  v2 = (_QWORD **)(a1 + 944);
  Object[1] = (PVOID)(a1 + 1040);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v3 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray);
          v4 = v3;
        }
        while ( v3 >= 2 );
        KeResetEvent((PRKEVENT)Object[v3]);
        if ( v4 )
          break;
        v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 1088));
        while ( v5 )
        {
          v6 = v5;
          v5 = v5->Next;
          Next = v6[1].Next;
          if ( Next == (_SLIST_ENTRY *)1342288122 )
          {
            EtwpCovSampSampleBufferProcess(a1, v6);
            EtwpCovSampCaptureReleaseToLookaside(a1, a1 + 880, v6);
          }
          else if ( Next == (_SLIST_ENTRY *)3401298175LL )
          {
            EtwpCovSampCaptureBufferProcess(a1, v6);
            EtwpCovSampCaptureBufferRelease(a1, v6);
          }
          else if ( Next == (_SLIST_ENTRY *)4054171642LL )
          {
            KeSetEvent((PRKEVENT)&v6[3], 0, 0);
          }
        }
      }
      if ( v4 == 1 )
      {
        v8 = MEMORY[0xFFFFF78000000320];
        if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 1064)) >= 0x40 )
        {
          v9 = *v2;
          *(_DWORD *)(a1 + 1064) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(a1 + 1068) = v8;
          if ( v9 != v2 )
            break;
        }
      }
    }
    do
    {
      v10 = (__int64)(v9 - 2);
      if ( *((_DWORD *)v9 + 8) )
      {
        *(_DWORD *)(v10 + 48) = 0;
        EtwpCovSampLookasideGrow(a1, v10);
      }
      v9 = (_QWORD *)*v9;
    }
    while ( v9 != v2 );
  }
}
