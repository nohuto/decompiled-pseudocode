/*
 * XREFs of MiReferenceInPageFile @ 0x140398340
 * Callers:
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x140956C3C (MiPfExecuteReadList.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     ObFastReferenceObjectLocked @ 0x140397714 (ObFastReferenceObjectLocked.c)
 *     MiComputeImagePteIndex @ 0x140398504 (MiComputeImagePteIndex.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2, int a3)
{
  ULONG_PTR result; // rax
  __int64 v7; // rsi
  signed __int64 v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rdi
  unsigned int v11; // edx
  ULONG_PTR v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  volatile LONG *v17; // rcx
  KIRQL v18; // r15

  result = *(_QWORD *)(a1 + 208);
  if ( !result )
    return result;
  v7 = *(_QWORD *)result;
  _m_prefetchw((const void *)(*(_QWORD *)result + 64LL));
  v8 = *(_QWORD *)(v7 + 64);
  if ( (v8 & 0xF) != 0 )
  {
    do
    {
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 - 1, v8);
      if ( v8 == v9 )
        break;
      v8 = v9;
    }
    while ( (v9 & 0xF) != 0 );
  }
  v10 = v8;
  v11 = v8 & 0xF;
  v12 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v11 > 1 )
  {
LABEL_6:
    ObpTraceObjectReferenceIfActive(v12 - 48);
    if ( v12 )
      goto LABEL_7;
    goto LABEL_22;
  }
  if ( v11 )
  {
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 48), 0xFuLL);
    if ( v14 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v12, 0x10uLL, v14 + 15);
    _m_prefetchw((const void *)(v7 + 64));
    v15 = *(_QWORD *)(v7 + 64);
    while ( (v15 & 0xF) == 0 && v12 == (v15 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v15 + 15, v15);
      if ( v16 == v15 )
        goto LABEL_6;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v12 - 48), 0xFFFFFFFFFFFFFFF1uLL);
    goto LABEL_6;
  }
LABEL_22:
  v17 = (volatile LONG *)(v7 + 72);
  if ( a3 )
  {
    v18 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v17);
  }
  else
  {
    v18 = ExAcquireSpinLockShared(v17);
  }
  v12 = ObFastReferenceObjectLocked((_QWORD *)(v7 + 64), 0x63536D4Du);
  MiReleaseSpinLockShared((volatile signed __int32 *)(v7 + 72), v18);
LABEL_7:
  if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 112));
    v13 = *(_QWORD *)(a1 + 256);
    if ( !v13 )
      v13 = a1 + 272;
    *(_DWORD *)(a1 + 188) = MiComputeImagePteIndex(48LL * *(_QWORD *)(v13 + 48) - 0x220000000000LL, a2);
  }
  else
  {
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return v12;
}
