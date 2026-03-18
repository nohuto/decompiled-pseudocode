/*
 * XREFs of ExpReleaseRundownProtection @ 0x1402C8140
 * Callers:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     PfSnRemoveProcessTrace @ 0x1402C66D4 (PfSnRemoveProcessTrace.c)
 *     ExCompareExchangeCallBack @ 0x1402C9C50 (ExCompareExchangeCallBack.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x14079CB08 (SmHwAcceleratorPartitionCtxCleanup.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

void __stdcall ExpReleaseRundownProtection(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // r10
  bool v3; // zf
  signed __int64 v4; // rax
  unsigned __int64 v5; // r10

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  while ( (v2 & 1) == 0 )
  {
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v2 - 2 * Count, v2);
    v3 = v2 == v4;
    v2 = v4;
    if ( v3 )
      return;
  }
  v5 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, -(__int64)Count) == Count
    && !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 32), 0) )
  {
    KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  }
}
