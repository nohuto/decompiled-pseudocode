/*
 * XREFs of RtlpHpHeapCreate @ 0x180026120
 * Callers:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlpHpMetadataHeapCreate @ 0x180026660 (RtlpHpMetadataHeapCreate.c)
 * Callees:
 *     RtlpLogHeapCreateEvent @ 0x180023758 (RtlpLogHeapCreateEvent.c)
 *     RtlpHeapLogRangeCreate @ 0x180026084 (RtlpHeapLogRangeCreate.c)
 *     RtlpHpHeapLoggingStateSync @ 0x1800265D4 (RtlpHpHeapLoggingStateSync.c)
 *     RtlpHpHeapDestroy @ 0x1800270BC (RtlpHpHeapDestroy.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpRegisterEnvironment @ 0x18009B3C4 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextReserve @ 0x18009B5A0 (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextStart @ 0x1800D631C (RtlpHpLfhContextStart.c)
 *     RtlpHpHeapAllocate @ 0x1800EF054 (RtlpHpHeapAllocate.c)
 *     RtlpHpSegContextInitialize @ 0x1800F1F2C (RtlpHpSegContextInitialize.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800F48EC (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpHpVsContextInitialize @ 0x180107A64 (RtlpHpVsContextInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x180107E48 (RtlpHpLfhContextInitialize.c)
 *     RtlQueryResourcePolicy @ 0x18010B000 (RtlQueryResourcePolicy.c)
 *     RtlpHpVsContextStart @ 0x18011AE84 (RtlpHpVsContextStart.c)
 *     RtlpHpLfhContextEnable @ 0x18011B010 (RtlpHpLfhContextEnable.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011BA74 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHpHeapSetInterceptor @ 0x18015631C (RtlpHpHeapSetInterceptor.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v4; // rdi
  unsigned __int32 ProcessorCount; // r14d
  __int64 v9; // rax
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
  __int64 (__fastcall *v22)(); // [rsp+60h] [rbp-9h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+68h] [rbp-1h]
  __int64 (__fastcall *v24)(); // [rsp+70h] [rbp+7h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp+Fh]
  __int64 (__fastcall *v26)(); // [rsp+80h] [rbp+17h]
  __int64 (__fastcall *v27)(); // [rsp+88h] [rbp+1Fh]
  int v28; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+E0h] [rbp+77h]

  v29 = a3;
  v4 = 0LL;
  v28 = 0;
  if ( a2 <= 0x7FFFFFFFFFFFFFFFLL && (int)RtlpHpRegisterEnvironment(a4, 1LL) >= 0 )
  {
    ProcessorCount = dword_1801D1228;
    if ( !dword_1801D1228 )
    {
      ProcessorCount = RtlpHpEnvQueryProcessorCount();
      v17 = _InterlockedCompareExchange(&dword_1801D1228, ProcessorCount, 0);
      if ( v17 )
        ProcessorCount = v17;
    }
    if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v28, 4LL) >= 0 && v28 <= 10 )
      ProcessorCount = 1;
    if ( (a1 & 0x2000000) != 0 )
      ProcessorCount = 1;
    v21 = *a4;
    v9 = RtlpHpHeapAllocate(a1, ProcessorCount, &v21);
    v10 = v9;
    if ( v9 )
    {
      v11 = *a4;
      *(_DWORD *)(v9 + 16) = -571548178;
      v12 = 0;
      *(_DWORD *)(v9 + 20) = a1;
      *(_OWORD *)v9 = v11;
      if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
        v12 = 16;
      v13 = v12 | 4;
      if ( (a1 & 0x4000000) == 0 )
        v13 = v12;
      v21 = v11;
      RtlpHpSegContextInitialize(v9 + 320, 0x100000, v9, v9 + 832, v9 + 704, v9 + 128, v9 + 168, (__int64)&v21, v13);
      v21 = *a4;
      RtlpHpSegContextInitialize(v10 + 512, 0x1000000, v10, 0, 0LL, v10 + 128, v10 + 184, (__int64)&v21, v13);
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
      v22 = RtlpHpSegVsAllocate;
      v27 = 0LL;
      v23 = RtlpHpSegLfhVsFree;
      v24 = RtlpHpSegLfhVsCommit;
      v25 = RtlpHpSegLfhVsDecommit;
      v26 = RtlpHpSegLfhExtendContext;
      RtlpHpVsContextInitialize(
        v10 + 704,
        v10 + 320,
        (unsigned int)&v22,
        *(_DWORD *)a4 & 1,
        ProcessorCount,
        v20,
        (__int64)&qword_1801D11E8 + 4,
        v10 + 128);
      v22 = RtlpHpSegLfhAllocate;
      v23 = RtlpHpSegLfhVsFree;
      v24 = RtlpHpSegLfhVsCommit;
      v25 = RtlpHpSegLfhVsDecommit;
      v26 = RtlpHpSegLfhExtendContext;
      v27 = RtlpHpSegTlsCleanup;
      RtlpHpLfhContextInitialize(v10 + 832, v10 + 320, ProcessorCount, *(_DWORD *)a4 & 1, (__int64)&v22, v10 + 128);
      *(_QWORD *)(v10 + 112) = 0LL;
      if ( (int)RtlpHpLfhContextStart(v10 + 832) >= 0
        && (int)RtlpHpVsContextStart(v10 + 704) >= 0
        && ((a1 & 0x400000) != 0 || (int)RtlpHpLfhContextEnable(v10 + 832, &qword_1801D11E8) >= 0)
        && (int)RtlpHpSegContextReserve(v10 + 320, a2, v29) >= 0 )
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
            *(_QWORD *)(v10 + 248) - v10,
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
