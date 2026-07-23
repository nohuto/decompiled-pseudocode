/*
 * XREFs of RtlpHpHeapCreate @ 0x14060234C
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x1406029F0 (RtlpHpMetadataHeapCreate.c)
 *     ExCreateHeap @ 0x140658340 (ExCreateHeap.c)
 *     ExpPrivatePoolCreate @ 0x1407C63A0 (ExpPrivatePoolCreate.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     RtlpHpInitializeLock @ 0x1403D970C (RtlpHpInitializeLock.c)
 *     RtlpHpVsContextInitialize @ 0x1404C953C (RtlpHpVsContextInitialize.c)
 *     RtlpLogHeapCreateEvent @ 0x1405F0970 (RtlpLogHeapCreateEvent.c)
 *     RtlpHpHeapAllocate @ 0x140602108 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x14060271C (RtlpHpHeapDestroy.c)
 *     RtlpHpRegisterEnvironment @ 0x140602A30 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextInitialize @ 0x14060358C (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x1406036A8 (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextEnable @ 0x140603BBC (RtlpHpLfhContextEnable.c)
 *     RtlpHpLfhContextInitialize @ 0x140603C04 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpVsContextStart @ 0x140604A2C (RtlpHpVsContextStart.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmSiRWLockInitialize @ 0x140AB8200 (CmSiRWLockInitialize.c)
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
  void *v21; // rax
  __int128 v23; // [rsp+58h] [rbp-29h] BYREF
  __int128 v24; // [rsp+68h] [rbp-19h] BYREF
  __int128 v25; // [rsp+78h] [rbp-9h] BYREF
  __int128 v26; // [rsp+88h] [rbp+7h] BYREF
  __int64 (__fastcall *v27)(__int64, __int64, unsigned int, _DWORD *); // [rsp+98h] [rbp+17h]
  __int64 (__fastcall *v28)(__int64, __int64, unsigned int); // [rsp+A0h] [rbp+1Fh]
  __int64 (__fastcall *v29)(__int64); // [rsp+A8h] [rbp+27h]
  __int64 (__fastcall *v30)(); // [rsp+B0h] [rbp+2Fh]

  v6 = 0LL;
  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) >= 0 )
  {
    MaximumProcessorCount = dword_140E67A90;
    if ( !dword_140E67A90 )
    {
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
      if ( !MaximumProcessorCount )
        MaximumProcessorCount = 1;
      v8 = _InterlockedCompareExchange(&dword_140E67A90, MaximumProcessorCount, 0);
      if ( v8 )
        MaximumProcessorCount = v8;
    }
    if ( (a1 & 0x2000000) != 0 )
      MaximumProcessorCount = 1;
    v23 = *a4;
    v9 = RtlpHpHeapAllocate(a1, MaximumProcessorCount, &v23);
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
      v24 = v11;
      RtlpHpSegContextInitialize(v9 + 320, 0x100000, v9, v9 + 832, v9 + 704, v9 + 128, v9 + 168, (__int64)&v24, v13);
      v25 = *a4;
      RtlpHpSegContextInitialize(v10 + 512, 0x1000000, v10, 0, 0LL, v10 + 128, v10 + 184, (__int64)&v25, v13);
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
      *(_QWORD *)&v26 = RtlpHpSegVsAllocate;
      v30 = 0LL;
      *((_QWORD *)&v26 + 1) = RtlpHpSegLfhVsFree;
      v27 = RtlpHpSegLfhVsCommit;
      v28 = RtlpHpSegLfhVsDecommit;
      v29 = RtlpHpSegLfhExtendContext;
      RtlpHpVsContextInitialize(
        v10 + 704,
        v10 + 320,
        &v26,
        v17 & *(_DWORD *)a4,
        MaximumProcessorCount,
        0,
        byte_140E6BDDC,
        v10 + 128);
      *(_QWORD *)&v26 = RtlpHpSegLfhAllocate;
      *((_QWORD *)&v26 + 1) = RtlpHpSegLfhVsFree;
      v27 = RtlpHpSegLfhVsCommit;
      v28 = RtlpHpSegLfhVsDecommit;
      v29 = RtlpHpSegLfhExtendContext;
      v30 = RtlpHpSegTlsCleanup;
      RtlpHpLfhContextInitialize(
        v10 + 832,
        v10 + 320,
        MaximumProcessorCount,
        *(_DWORD *)a4 & 1,
        (__int64)&v26,
        v10 + 128);
      CmSiRWLockInitialize((PRTL_RUN_ONCE)(v10 + 112));
      v20 = (unsigned __int64)*(unsigned __int8 *)(v10 + 896) << 8;
      v21 = (void *)guard_dispatch_icall_no_overrides(*v14, v20);
      if ( v21
        && (memset_0(v21, 0, v20), (int)RtlpHpVsContextStart(v10 + 704) >= 0)
        && ((a1 & 0x400000) != 0 || (int)RtlpHpLfhContextEnable(v10 + 832, &unk_140E6BDD8) >= 0)
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
