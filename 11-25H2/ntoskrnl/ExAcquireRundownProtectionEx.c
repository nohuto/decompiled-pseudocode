/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x14036CEA0
 * Callers:
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14036CC90 (ExCompareExchangeCallBack.c)
 *     PfSnAddProcessTrace @ 0x14036CE24 (PfSnAddProcessTrace.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14078D518 (SmHwAcceleratorParitionCtxCreate.c)
 *     PspRundownProcess @ 0x1409F25F8 (PspRundownProcess.c)
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
