/*
 * XREFs of MiReferenceControlAreaFileWithTag @ 0x140323330
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiDeprioritizeVad @ 0x1402A2F94 (MiDeprioritizeVad.c)
 *     MmFlushSection @ 0x1402C1F80 (MmFlushSection.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyPageAccessLog @ 0x140322FE0 (MiEmptyPageAccessLog.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiCreateSystemSection @ 0x14049DE3C (MiCreateSystemSection.c)
 *     MmGetFileObjectForSection @ 0x14090B870 (MmGetFileObjectForSection.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void *__fastcall MiReferenceControlAreaFileWithTag(__int64 a1, ULONG a2, int a3)
{
  signed __int64 v6; // r9
  signed __int64 v7; // rax
  signed __int64 v8; // rdi
  unsigned int v9; // r9d
  ULONG_PTR v10; // rdi
  __int64 v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15; // rdi
  volatile LONG *v16; // rcx
  KIRQL v17; // si
  void *v18; // rbx

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
  if ( v9 <= 1 )
  {
    if ( !v9 )
      goto LABEL_14;
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
  }
LABEL_5:
  ObpTraceObjectReferenceIfActive(v10 - 48);
  if ( v10 )
    return (void *)v10;
LABEL_14:
  v15 = a1 + 72;
  v16 = (volatile LONG *)(a1 + 72);
  if ( a3 )
  {
    v17 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v16);
  }
  else
  {
    v17 = ExAcquireSpinLockShared(v16);
  }
  v18 = (void *)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v18 )
    ObfReferenceObjectWithTag(v18, a2);
  MiReleaseSpinLockShared(v15, v17);
  return v18;
}
