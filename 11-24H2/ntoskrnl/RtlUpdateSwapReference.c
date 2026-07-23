/*
 * XREFs of RtlUpdateSwapReference @ 0x140A2B6A0
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A2B208 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A2B5FC (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8CF00 (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ExBlockOnAddressPushLock @ 0x1402BB7C0 (ExBlockOnAddressPushLock.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     PoCopyDeepIdleMask @ 0x14032C648 (PoCopyDeepIdleMask.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
