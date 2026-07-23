/*
 * XREFs of MiReferenceControlAreaFileWithTag @ 0x14020C860
 * Callers:
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyPageAccessLog @ 0x14020C9F0 (MiEmptyPageAccessLog.c)
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiDeprioritizeVad @ 0x1403DAB20 (MiDeprioritizeVad.c)
 *     MiCreateSystemSection @ 0x140443248 (MiCreateSystemSection.c)
 *     MmGetFileObjectForSection @ 0x1409220B0 (MmGetFileObjectForSection.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReferenceControlAreaFileWithTag(__int64 a1, ULONG a2, int a3)
{
  signed __int64 v6; // r9
  signed __int64 v7; // rax
  signed __int64 v8; // rbx
  unsigned int v9; // r9d
  ULONG_PTR v10; // rbx
  __int64 v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  volatile LONG *v15; // rcx
  KIRQL v16; // bp

  _m_prefetchw((const void *)(a1 + 64));
  v6 = *(_QWORD *)(a1 + 64);
  if ( (v6 & 0xF) != 0 )
  {
    do
    {
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v6 - 1, v6);
      if ( v6 == v7 )
        break;
      v6 = v7;
    }
    while ( (v7 & 0xF) != 0 );
  }
  v8 = v6;
  v9 = v6 & 0xF;
  v10 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v9 > 1 )
    goto LABEL_5;
  if ( v9 )
  {
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 48), 0xFuLL);
    if ( v12 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v10, 0x10uLL, v12 + 15);
    _m_prefetchw((const void *)(a1 + 64));
    v13 = *(_QWORD *)(a1 + 64);
    while ( (v13 & 0xF) == 0 && v10 == (v13 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v13 + 15, v13);
      if ( v14 == v13 )
        goto LABEL_5;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v10 - 48), 0xFFFFFFFFFFFFFFF1uLL);
LABEL_5:
    ObpTraceObjectReferenceIfActive(v10 - 48, 1LL, a2);
    if ( v10 )
      return v10;
  }
  v15 = (volatile LONG *)(a1 + 72);
  if ( a3 )
  {
    v16 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v15);
  }
  else
  {
    v16 = ExAcquireSpinLockShared(v15);
  }
  v10 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v10 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), a2);
  MiReleaseSpinLockShared(a1 + 72, v16);
  return v10;
}
