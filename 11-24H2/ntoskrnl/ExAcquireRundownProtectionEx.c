/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x1402C9E60
 * Callers:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x1402C9C50 (ExCompareExchangeCallBack.c)
 *     PfSnAddProcessTrace @ 0x1402C9DE4 (PfSnAddProcessTrace.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14079C8D8 (SmHwAcceleratorParitionCtxCreate.c)
 *     PspRundownProcess @ 0x1409EB058 (PspRundownProcess.c)
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
