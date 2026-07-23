/*
 * XREFs of PopEnableIrpWatchdog @ 0x140314DDC
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x1402BA5A0 (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x1403A96B4 (PopQueueQuerySetIrp.c)
 *     PoHandleIrp @ 0x1403CBD64 (PoHandleIrp.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopComputeWatchdogTimeout @ 0x140314F34 (PopComputeWatchdogTimeout.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 */

void __fastcall PopEnableIrpWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // si
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // edx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 288));
  if ( !*(_DWORD *)(v1 + 296) )
  {
    v3 = *(_QWORD *)(v1 + 24);
    v4 = v3 ? *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) : 0LL;
    if ( *(_DWORD *)(v1 + 188) != 1
      || !v4
      || (_m_prefetchw((const void *)(v4 + 296)),
          (_InterlockedOr((volatile signed __int32 *)(v4 + 296), 0) & 0x8000) == 0) )
    {
      v5 = PopComputeWatchdogTimeout(v1);
      if ( v5 )
      {
        *(_DWORD *)(v1 + 120) = 275;
        *(_QWORD *)(v1 + 152) = v1;
        *(_QWORD *)(v1 + 144) = &PopIrpWatchdog;
        *(_QWORD *)(v1 + 176) = v6;
        *(_QWORD *)(v1 + 136) = v6;
        *(_QWORD *)(v1 + 56) = v6;
        *(_BYTE *)(v1 + 56) = 8;
        *(_QWORD *)(v1 + 72) = v1 + 64;
        *(_QWORD *)(v1 + 64) = v1 + 64;
        *(_QWORD *)(v1 + 80) = v6;
        *(_DWORD *)(v1 + 116) = v6;
        *(_WORD *)(v1 + 112) = v6;
        KiSetTimerEx(v1 + 56, -10000000 * v5, 0, v6, v1 + 120);
        v7 = MEMORY[0xFFFFF780000003B0];
        v8 = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)(v1 + 296) = 1;
        *(_QWORD *)(v1 + 48) = v8 - v7;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 288), v2);
}
