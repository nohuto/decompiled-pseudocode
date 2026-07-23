/*
 * XREFs of RtlpHpHeapCreate @ 0x1800351B4
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x180034CC0 (RtlpHpMetadataHeapCreate.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x18003402C (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpHpSegContextInitialize @ 0x18003454C (RtlpHpSegContextInitialize.c)
 *     RtlpHpLfhContextStart @ 0x180034658 (RtlpHpLfhContextStart.c)
 *     RtlpHpLfhContextInitialize @ 0x1800346C8 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpVsContextInitialize @ 0x18003483C (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x1800349E4 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapLoggingStateSync @ 0x180034D90 (RtlpHpHeapLoggingStateSync.c)
 *     RtlpHeapLogRangeCreate @ 0x180035E24 (RtlpHeapLogRangeCreate.c)
 *     RtlQueryResourcePolicy @ 0x180038570 (RtlQueryResourcePolicy.c)
 *     RtlpHpHeapDestroy @ 0x1800B93D0 (RtlpHpHeapDestroy.c)
 *     RtlpHpRegisterEnvironment @ 0x1800B9BB8 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextReserve @ 0x1800B9D94 (RtlpHpSegContextReserve.c)
 *     RtlpLogHeapCreateEvent @ 0x180118270 (RtlpLogHeapCreateEvent.c)
 *     RtlpHpVsContextStart @ 0x18011E4E4 (RtlpHpVsContextStart.c)
 *     RtlpHpLfhContextEnable @ 0x18011E668 (RtlpHpLfhContextEnable.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011F114 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHpHeapSetInterceptor @ 0x18015950C (RtlpHpHeapSetInterceptor.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v4; // rdi
  int ProcessorCount; // r14d
  volatile signed __int64 *v9; // rax
  __int64 v10; // rsi
  __int128 v11; // xmm0
  char v12; // cl
  char v13; // bl
  bool v14; // zf
  __int64 v15; // rcx
  signed __int32 v17; // eax
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v19; // rcx
  int v20; // [rsp+28h] [rbp-41h]
  __int128 v21; // [rsp+50h] [rbp-19h] BYREF
  __int128 v22; // [rsp+60h] [rbp-9h] BYREF
  __int64 (__fastcall *v23)(int, __int64, __int64, _DWORD *); // [rsp+70h] [rbp+7h]
  __int64 (__fastcall *v24)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+Fh]
  __int64 (__fastcall *v25)(_QWORD, _QWORD); // [rsp+80h] [rbp+17h]
  __int64 (__fastcall *v26)(); // [rsp+88h] [rbp+1Fh]
  int v27; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+E0h] [rbp+77h]

  v28 = a3;
  v4 = 0LL;
  v27 = 0;
  if ( a2 <= 0x7FFFFFFFFFFFFFFFLL && (int)RtlpHpRegisterEnvironment(a4, 1LL) >= 0 )
  {
    ProcessorCount = dword_1801D4288;
    if ( !dword_1801D4288 )
    {
      ProcessorCount = RtlpHpEnvQueryProcessorCount();
      v17 = _InterlockedCompareExchange(&dword_1801D4288, ProcessorCount, 0);
      if ( v17 )
        ProcessorCount = v17;
    }
    if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v27, 4LL) >= 0 && v27 <= 10 )
      ProcessorCount = 1;
    if ( (a1 & 0x2000000) != 0 )
      ProcessorCount = 1;
    v21 = *a4;
    v9 = RtlpHpHeapAllocate(a1, ProcessorCount, &v21);
    v10 = (__int64)v9;
    if ( v9 )
    {
      v11 = *a4;
      *((_DWORD *)v9 + 4) = -571548178;
      v12 = 0;
      *((_DWORD *)v9 + 5) = a1;
      *(_OWORD *)v9 = v11;
      if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
        v12 = 16;
      v13 = v12 | 4;
      if ( (a1 & 0x4000000) == 0 )
        v13 = v12;
      v21 = v11;
      RtlpHpSegContextInitialize(
        (__int64 *)v9 + 40,
        0x100000u,
        (__int64)v9,
        (__int64)(v9 + 104),
        (__int64)(v9 + 88),
        (_WORD)v9 + 128,
        (_WORD)v9 + 168,
        &v21,
        v13);
      v21 = *a4;
      RtlpHpSegContextInitialize((__int64 *)(v10 + 512), 0x1000000u, v10, 0LL, 0LL, v10 + 128, v10 + 184, &v21, v13);
      *(_QWORD *)(v10 + 64) = 0LL;
      *(_QWORD *)(v10 + 72) = 0LL;
      *(_QWORD *)(v10 + 80) = 0LL;
      v14 = (*(_DWORD *)(v10 + 20) & 0x20000000) == 0;
      *(_QWORD *)(v10 + 232) = 0LL;
      if ( !v14 )
      {
        HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
        RtlpHpHeapSetInterceptor(v10, HeapInterceptorIndex);
      }
      *(_QWORD *)&v22 = RtlpHpSegVsAllocate;
      v26 = 0LL;
      *((_QWORD *)&v22 + 1) = RtlpHpSegLfhVsFree;
      v23 = RtlpHpSegLfhVsCommit;
      v24 = RtlpHpSegLfhVsDecommit;
      v25 = RtlpHpSegLfhExtendContext;
      RtlpHpVsContextInitialize(
        v10 + 704,
        v10 + 320,
        &v22,
        *(_DWORD *)a4 & 1,
        ProcessorCount,
        v20,
        (_BYTE *)&qword_1801D4248 + 4,
        v10 + 128);
      *(_QWORD *)&v22 = RtlpHpSegLfhAllocate;
      *((_QWORD *)&v22 + 1) = RtlpHpSegLfhVsFree;
      v23 = RtlpHpSegLfhVsCommit;
      v24 = RtlpHpSegLfhVsDecommit;
      v25 = RtlpHpSegLfhExtendContext;
      v26 = RtlpHpSegTlsCleanup;
      RtlpHpLfhContextInitialize(v10 + 832, v10 + 320, ProcessorCount, *(_DWORD *)a4 & 1, &v22, v10 + 128);
      *(_QWORD *)(v10 + 112) = 0LL;
      if ( (int)RtlpHpLfhContextStart(v10 + 832) >= 0
        && (int)RtlpHpVsContextStart(v10 + 704) >= 0
        && ((a1 & 0x400000) != 0 || (int)RtlpHpLfhContextEnable(v10 + 832, &qword_1801D4248) >= 0)
        && (int)RtlpHpSegContextReserve(v10 + 320, a2, v28) >= 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v15 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v15 = 2147353480LL;
        if ( *(_BYTE *)v15 )
          RtlpHeapLogRangeCreate(v10, *(_QWORD *)(v10 + 256) - v10, a1);
        RtlpHpHeapLoggingStateSync(v10);
        if ( *(char *)(v10 + 20) < 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v19 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v19 = 2147353472LL;
          RtlpLogHeapCreateEvent(
            v10,
            a1,
            *(_QWORD *)(v10 + 256) - v10,
            *(_DWORD *)(v10 + 248) - v10,
            (HANDLE)*(unsigned __int8 *)v19);
        }
        return v10;
      }
      else
      {
        RtlpHpHeapDestroy(v10);
      }
    }
    else
    {
      RtlpHpRegisterEnvironment(a4, 0LL);
    }
  }
  return v4;
}
