/*
 * XREFs of RtlpHpHeapCreate @ 0x1800A6374
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x1800A5E80 (RtlpHpMetadataHeapCreate.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapDestroy @ 0x180090050 (RtlpHpHeapDestroy.c)
 *     RtlpHpRegisterEnvironment @ 0x180090838 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextReserve @ 0x180090A14 (RtlpHpSegContextReserve.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800A4968 (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpHpSegContextInitialize @ 0x1800A570C (RtlpHpSegContextInitialize.c)
 *     RtlpHpLfhContextStart @ 0x1800A5818 (RtlpHpLfhContextStart.c)
 *     RtlpHpLfhContextInitialize @ 0x1800A5888 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpVsContextInitialize @ 0x1800A59FC (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x1800A5BA4 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapLoggingStateSync @ 0x1800A5F50 (RtlpHpHeapLoggingStateSync.c)
 *     RtlpHeapLogRangeCreate @ 0x1800A6FE4 (RtlpHeapLogRangeCreate.c)
 *     RtlQueryResourcePolicy @ 0x1800A9730 (RtlQueryResourcePolicy.c)
 *     RtlpLogHeapCreateEvent @ 0x180115370 (RtlpLogHeapCreateEvent.c)
 *     RtlpHpVsContextStart @ 0x18011CC54 (RtlpHpVsContextStart.c)
 *     RtlpHpLfhContextEnable @ 0x18011CDD8 (RtlpHpLfhContextEnable.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011D844 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHpHeapSetInterceptor @ 0x180157F5C (RtlpHpHeapSetInterceptor.c)
 */

unsigned __int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, unsigned __int64 a3, __m128i *a4)
{
  __int64 v4; // rdi
  int ProcessorCount; // r14d
  volatile signed __int64 *v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  __m128i v12; // xmm0
  char v13; // cl
  char v14; // bl
  bool v15; // zf
  __int64 v16; // rcx
  signed __int32 v18; // eax
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v20; // rcx
  int v21; // [rsp+28h] [rbp-41h]
  __m128i v22; // [rsp+50h] [rbp-19h] BYREF
  __int128 v23; // [rsp+60h] [rbp-9h] BYREF
  __int64 (__fastcall *v24)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp+7h]
  __int64 (__fastcall *v25)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+Fh]
  unsigned __int64 (__fastcall *v26)(__int64, __int64); // [rsp+80h] [rbp+17h]
  __int64 (__fastcall *v27)(__int64, __int64); // [rsp+88h] [rbp+1Fh]
  int v28; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned __int64 v29; // [rsp+E0h] [rbp+77h]

  v29 = a3;
  v4 = 0LL;
  v28 = 0;
  if ( a2 <= 0x7FFFFFFFFFFFFFFFLL && (int)RtlpHpRegisterEnvironment(a4, 1, a3) >= 0 )
  {
    ProcessorCount = dword_1801D2234;
    if ( !dword_1801D2234 )
    {
      ProcessorCount = RtlpHpEnvQueryProcessorCount();
      v18 = _InterlockedCompareExchange(&dword_1801D2234, ProcessorCount, 0);
      if ( v18 )
        ProcessorCount = v18;
    }
    if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v28, 4LL) >= 0 && v28 <= 10 )
      ProcessorCount = 1;
    if ( (a1 & 0x2000000) != 0 )
      ProcessorCount = 1;
    v22 = *a4;
    v9 = RtlpHpHeapAllocate(a1, ProcessorCount, &v22);
    v11 = (unsigned __int64)v9;
    if ( v9 )
    {
      v12 = *a4;
      *((_DWORD *)v9 + 4) = -571548178;
      v13 = 0;
      *((_DWORD *)v9 + 5) = a1;
      *(__m128i *)v9 = v12;
      if ( BYTE1(a4->m128i_i64[0]) >= 2u && BYTE1(a4->m128i_i64[0]) < 5u )
        v13 = 16;
      v14 = v13 | 4;
      if ( (a1 & 0x4000000) == 0 )
        v14 = v13;
      v22 = v12;
      RtlpHpSegContextInitialize(
        (__int64 *)v9 + 40,
        0x100000u,
        (__int64)v9,
        (__int64)(v9 + 104),
        (__int64)(v9 + 88),
        (_WORD)v9 + 128,
        (_WORD)v9 + 168,
        &v22,
        v14);
      v22 = *a4;
      RtlpHpSegContextInitialize((__int64 *)(v11 + 512), 0x1000000u, v11, 0LL, 0LL, v11 + 128, v11 + 184, &v22, v14);
      *(_QWORD *)(v11 + 64) = 0LL;
      *(_QWORD *)(v11 + 72) = 0LL;
      *(_QWORD *)(v11 + 80) = 0LL;
      v15 = (*(_DWORD *)(v11 + 20) & 0x20000000) == 0;
      *(_QWORD *)(v11 + 232) = 0LL;
      if ( !v15 )
      {
        HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
        RtlpHpHeapSetInterceptor(v11, HeapInterceptorIndex);
      }
      *(_QWORD *)&v23 = RtlpHpSegVsAllocate;
      v27 = 0LL;
      *((_QWORD *)&v23 + 1) = RtlpHpSegLfhVsFree;
      v24 = RtlpHpSegLfhVsCommit;
      v25 = RtlpHpSegLfhVsDecommit;
      v26 = RtlpHpSegLfhExtendContext;
      RtlpHpVsContextInitialize(
        v11 + 704,
        v11 + 320,
        &v23,
        a4->m128i_i32[0] & 1,
        ProcessorCount,
        v21,
        (_BYTE *)&qword_1801D21F8 + 4,
        v11 + 128);
      *(_QWORD *)&v23 = RtlpHpSegLfhAllocate;
      *((_QWORD *)&v23 + 1) = RtlpHpSegLfhVsFree;
      v24 = RtlpHpSegLfhVsCommit;
      v25 = RtlpHpSegLfhVsDecommit;
      v26 = RtlpHpSegLfhExtendContext;
      v27 = RtlpHpSegTlsCleanup;
      RtlpHpLfhContextInitialize(v11 + 832, v11 + 320, ProcessorCount, a4->m128i_i32[0] & 1, &v23, v11 + 128);
      *(_QWORD *)(v11 + 112) = 0LL;
      if ( (int)RtlpHpLfhContextStart(v11 + 832) >= 0
        && (int)RtlpHpVsContextStart(v11 + 704) >= 0
        && ((a1 & 0x400000) != 0 || (int)RtlpHpLfhContextEnable(v11 + 832, &qword_1801D21F8) >= 0)
        && (int)RtlpHpSegContextReserve((_BYTE *)(v11 + 320), a2, v29) >= 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v16 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v16 = 2147353480LL;
        if ( *(_BYTE *)v16 )
          RtlpHeapLogRangeCreate(v11, *(_QWORD *)(v11 + 256) - v11, a1);
        RtlpHpHeapLoggingStateSync(v11);
        if ( *(char *)(v11 + 20) < 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v20 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v20 = 2147353472LL;
          RtlpLogHeapCreateEvent(
            v11,
            a1,
            *(_QWORD *)(v11 + 256) - v11,
            *(_DWORD *)(v11 + 248) - v11,
            *(unsigned __int8 *)v20);
        }
        return v11;
      }
      else
      {
        RtlpHpHeapDestroy(v11);
      }
    }
    else
    {
      RtlpHpRegisterEnvironment(a4, 0, v10);
    }
  }
  return v4;
}
