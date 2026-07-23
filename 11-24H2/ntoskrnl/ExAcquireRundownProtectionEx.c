/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x14040EC70
 * Callers:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14040EA64 (ExCompareExchangeCallBack.c)
 *     PfSnAddProcessTrace @ 0x14040EBF8 (PfSnAddProcessTrace.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14079C9E8 (SmHwAcceleratorParitionCtxCreate.c)
 *     PspRundownProcess @ 0x1409E5948 (PspRundownProcess.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  while ( (v2 & 1) == 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v2 + 2 * Count, v2);
    if ( v3 == v2 )
      return 1;
  }
  return 0;
}
