/*
 * XREFs of RtlUpdateSwapReference @ 0x140A36190
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A35CEC (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A360EC (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A90804 (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x140205068 (PoCopyDeepIdleMask.c)
 *     ExBlockOnAddressPushLock @ 0x1402C6C40 (ExBlockOnAddressPushLock.c)
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140354CF8 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403CA140 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall RtlUpdateSwapReference(__int64 a1, char a2)
{
  void *result; // rax
  unsigned __int64 v5; // rdi
  void **v6; // rbx
  signed __int64 v7; // rax
  bool v8; // zf
  void *v9; // [rsp+30h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v10; // [rsp+40h] [rbp-C0h] BYREF

  result = memset_0(&v10.8, 0, sizeof(v10.8));
  v5 = (unsigned __int64)_InterlockedExchange64((volatile __int64 *)a1, a2 & 1) >> 1;
  if ( v5 )
  {
    v10.Reserved = 0;
    *(_DWORD *)&v10.Count = 2097153;
    memset_0(&v10.8, 0, sizeof(v10.8));
    PoCopyDeepIdleMask(&v10.Count);
    KiSubtractAffinityEx(&KeActiveProcessors, &v10, &v10, v10.Size);
    KeRemoveProcessorAffinityEx(&v10.Count, KeGetPcr()->Prcb.Number);
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v10.Count) )
      KeGenericProcessorCallback((__int64 *)&v10, (char (__fastcall *)(__int64, __int64))xHalTimerWatchdogStop, 0LL, 0);
    v6 = (void **)(a1 + 8);
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), v5);
    v8 = v5 + v7 == 0;
    result = (void *)(v5 + v7);
    while ( 1 )
    {
      v9 = result;
      if ( v8 )
        break;
      ExBlockOnAddressPushLock((signed __int64 *)(a1 + 16), (_BYTE *)(a1 + 8), &v9, 8LL, 0LL);
      result = *v6;
      v8 = *v6 == 0LL;
    }
  }
  return result;
}
