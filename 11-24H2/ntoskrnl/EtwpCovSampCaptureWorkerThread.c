/*
 * XREFs of EtwpCovSampCaptureWorkerThread @ 0x1407B24B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x14043EF30 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140442670 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x1404EF6CC (EtwpCovSampLookasideGrow.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140900208 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409022F4 (EtwpCovSampSampleBufferProcess.c)
 */

void __fastcall __noreturn EtwpCovSampCaptureWorkerThread(__int64 a1)
{
  _QWORD **v2; // r14
  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  PSLIST_ENTRY v7; // rdi
  PSLIST_ENTRY v8; // rsi
  _SLIST_ENTRY *Next; // rax
  int v10; // ecx
  _QWORD *v11; // rdi
  __int64 v12; // rdx
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
        v7 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 1088));
        while ( v7 )
        {
          v8 = v7;
          v7 = v7->Next;
          Next = v8[1].Next;
          if ( Next == (_SLIST_ENTRY *)1342288122 )
          {
            EtwpCovSampSampleBufferProcess(a1, v8);
            EtwpCovSampCaptureReleaseToLookaside(a1, a1 + 880, v8);
          }
          else if ( Next == (_SLIST_ENTRY *)3401298175LL )
          {
            EtwpCovSampCaptureBufferProcess(a1, v8);
            EtwpCovSampCaptureBufferRelease(a1, v8);
          }
          else if ( Next == (_SLIST_ENTRY *)4054171642LL )
          {
            KeSetEvent((PRKEVENT)&v8[3], 0, 0);
          }
        }
      }
      if ( v4 == 1 )
      {
        v10 = MEMORY[0xFFFFF78000000320];
        if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 1064)) >= 0x40 )
        {
          v11 = *v2;
          *(_DWORD *)(a1 + 1064) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(a1 + 1068) = v10;
          if ( v11 != v2 )
            break;
        }
      }
    }
    do
    {
      v12 = (__int64)(v11 - 2);
      if ( *((_DWORD *)v11 + 8) )
      {
        *(_DWORD *)(v12 + 48) = 0;
        EtwpCovSampLookasideGrow(a1, v12, v5, v6);
      }
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != v2 );
  }
}
