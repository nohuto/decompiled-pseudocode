/*
 * XREFs of RtlpHpHeapCreate @ 0x140604D0C
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x1406053B0 (RtlpHpMetadataHeapCreate.c)
 *     ExCreateHeap @ 0x140659CA0 (ExCreateHeap.c)
 *     ExpPrivatePoolCreate @ 0x1407C5F40 (ExpPrivatePoolCreate.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x1402B5710 (RtlpHpInitializeLock.c)
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     RtlpHpVsContextInitialize @ 0x1404D03DC (RtlpHpVsContextInitialize.c)
 *     RtlpLogHeapCreateEvent @ 0x1405F3330 (RtlpLogHeapCreateEvent.c)
 *     RtlpHpHeapAllocate @ 0x140604AC8 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x1406050DC (RtlpHpHeapDestroy.c)
 *     RtlpHpRegisterEnvironment @ 0x1406053F0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextInitialize @ 0x140605F4C (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x140606068 (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextEnable @ 0x14060657C (RtlpHpLfhContextEnable.c)
 *     RtlpHpLfhContextInitialize @ 0x1406065C4 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpVsContextStart @ 0x14060742C (RtlpHpVsContextStart.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmSiRWLockInitialize @ 0x140ABD190 (CmSiRWLockInitialize.c)
 */

__int64 __fastcall RtlpHpHeapCreate(int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v6; // rdi
  int MaximumProcessorCount; // r14d
  signed __int32 v8; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int128 v11; // xmm0
  char v12; // cl
  char v13; // bl
  _QWORD *v14; // r13
  char v15; // r8
  int v16; // edx
  unsigned __int16 v17; // r8
  unsigned __int16 i; // ax
  unsigned __int16 v19; // cx
  size_t v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  __int128 v25; // [rsp+58h] [rbp-29h] BYREF
  __int128 v26; // [rsp+68h] [rbp-19h] BYREF
  __int128 v27; // [rsp+78h] [rbp-9h] BYREF
  __int128 v28; // [rsp+88h] [rbp+7h] BYREF
  __int64 (__fastcall *v29)(__int64 *, __int64, unsigned int, _DWORD *); // [rsp+98h] [rbp+17h]
  __int64 (__fastcall *v30)(__int64 *, __int64, unsigned int); // [rsp+A0h] [rbp+1Fh]
  __int64 (__fastcall *v31)(__int64); // [rsp+A8h] [rbp+27h]
  __int64 (__fastcall *v32)(); // [rsp+B0h] [rbp+2Fh]

  v6 = 0LL;
  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) >= 0 )
  {
    MaximumProcessorCount = dword_140E678E4;
    if ( !dword_140E678E4 )
    {
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
      if ( !MaximumProcessorCount )
        MaximumProcessorCount = 1;
      v8 = _InterlockedCompareExchange(&dword_140E678E4, MaximumProcessorCount, 0);
      if ( v8 )
        MaximumProcessorCount = v8;
    }
    if ( (a1 & 0x2000000) != 0 )
      MaximumProcessorCount = 1;
    v25 = *a4;
    v9 = RtlpHpHeapAllocate(a1, MaximumProcessorCount, &v25);
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
      v14 = (_QWORD *)(v9 + 832);
      v26 = v11;
      RtlpHpSegContextInitialize(v9 + 320, 0x100000, v9, v9 + 832, v9 + 704, v9 + 128, v9 + 168, (__int64)&v26, v13);
      v27 = *a4;
      RtlpHpSegContextInitialize(v10 + 512, 0x1000000, v10, 0, 0LL, v10 + 128, v10 + 184, (__int64)&v27, v13);
      RtlpHpInitializeLock((_QWORD *)(v10 + 64), *(_DWORD *)a4 & 1);
      v16 = (unsigned __int8)(v15 & *(_DWORD *)a4);
      *(_QWORD *)(v10 + 72) = 0LL;
      *(_QWORD *)(v10 + 80) = 0LL;
      RtlpHpInitializeLock((_QWORD *)(v10 + 232), v16);
      if ( (*(_DWORD *)(v10 + 20) & 0x20000000) != 0 )
      {
        for ( i = 0; i < v17; i = v19 )
        {
          v19 = v17 + i;
          v17 = 1;
          if ( *((__int64 (**)())&CLFS_LSN_NULL_EXT + i) == PdcCreateWatchdogAroundClientCall )
            goto LABEL_22;
        }
        v19 = 0;
LABEL_22:
        *(_DWORD *)(v10 + 24) = v19;
        if ( v19 )
          _InterlockedOr((volatile signed __int32 *)(v10 + 20), 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)(v10 + 20), 0xFFFFFFDF);
      }
      *(_QWORD *)&v28 = RtlpHpSegVsAllocate;
      v32 = 0LL;
      *((_QWORD *)&v28 + 1) = RtlpHpSegLfhVsFree;
      v29 = RtlpHpSegLfhVsCommit;
      v30 = RtlpHpSegLfhVsDecommit;
      v31 = RtlpHpSegLfhExtendContext;
      RtlpHpVsContextInitialize(
        v10 + 704,
        v10 + 320,
        &v28,
        v17 & *(_DWORD *)a4,
        MaximumProcessorCount,
        0,
        byte_140E6BBDC,
        v10 + 128);
      *(_QWORD *)&v28 = RtlpHpSegLfhAllocate;
      *((_QWORD *)&v28 + 1) = RtlpHpSegLfhVsFree;
      v29 = RtlpHpSegLfhVsCommit;
      v30 = RtlpHpSegLfhVsDecommit;
      v31 = RtlpHpSegLfhExtendContext;
      v32 = RtlpHpSegTlsCleanup;
      RtlpHpLfhContextInitialize(
        v10 + 832,
        v10 + 320,
        MaximumProcessorCount,
        *(_DWORD *)a4 & 1,
        (__int64)&v28,
        v10 + 128);
      CmSiRWLockInitialize((PRTL_RUN_ONCE)(v10 + 112));
      v20 = (unsigned __int64)*(unsigned __int8 *)(v10 + 896) << 8;
      v23 = (void *)guard_dispatch_icall_no_overrides(*v14, v20, v21, v22);
      if ( v23
        && (memset_0(v23, 0, v20), (int)RtlpHpVsContextStart(v10 + 704) >= 0)
        && ((a1 & 0x400000) != 0 || (int)RtlpHpLfhContextEnable(v10 + 832, &unk_140E6BBD8) >= 0)
        && (int)RtlpHpSegContextReserve(v10 + 320, 0LL, 0LL) >= 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v10 + 20), 0xFFFFFF7F);
        if ( (*(_DWORD *)(v10 + 20) & 0x80u) != 0 )
          RtlpLogHeapCreateEvent(v10, a1, *(_QWORD *)(v10 + 256) - v10, *(_QWORD *)(v10 + 248) - v10);
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
  return v6;
}
