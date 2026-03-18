/*
 * XREFs of PopEnableIrpWatchdog @ 0x140441640
 * Callers:
 *     PopQueueQuerySetIrp @ 0x14034DCB8 (PopQueueQuerySetIrp.c)
 *     PoHandleIrp @ 0x140356C48 (PoHandleIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14035836C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     PopComputeWatchdogTimeout @ 0x140441798 (PopComputeWatchdogTimeout.c)
 */

void __fastcall PopEnableIrpWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // si
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // eax
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
        KiSetTimerEx(v1 + 56, -10000000LL * v5, 0, v6, v1 + 120);
        v7 = MEMORY[0xFFFFF780000003B0];
        v8 = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)(v1 + 296) = 1;
        *(_QWORD *)(v1 + 48) = v8 - v7;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 288), v2);
}
