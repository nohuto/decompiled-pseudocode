/*
 * XREFs of EtwpOpenLogger @ 0x140326950
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x14064D790 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14064D8FC (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  signed __int64 *v10; // r8
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  char v13; // cl
  __int64 result; // rax

  v4 = a1;
  *a4 = 0;
  if ( a3 == 1 || KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = v4;
    --CurrentThread->KernelApcDisable;
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 704) + 8 * v4);
    v10 = (signed __int64 *)(*(_QWORD *)v9 + *(_DWORD *)(v9 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v9 + 20)));
    _m_prefetchw(v10);
    v11 = *v10;
    while ( (v11 & 1) == 0 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64(v10, v11 + 2, v11);
      if ( v12 == v11 )
      {
        *a4 = 1;
        v13 = 1;
        goto LABEL_8;
      }
    }
    goto LABEL_11;
  }
  v8 = v4;
  v13 = 0;
LABEL_8:
  result = *(_QWORD *)(*(_QWORD *)(a2 + 712) + 8 * v8);
  if ( (result & 1) != 0 )
  {
    if ( !v13 )
      return 0LL;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 704) + 8 * v8), 1u);
LABEL_11:
    KeLeaveCriticalRegionThread();
    return 0LL;
  }
  return result;
}
