/*
 * XREFs of MiReferenceInPageFile @ 0x140350A90
 * Callers:
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x14093A5EC (MiPfExecuteReadList.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiComputeImagePteIndex @ 0x140350C54 (MiComputeImagePteIndex.c)
 *     ObFastReferenceObjectLocked @ 0x1403517CC (ObFastReferenceObjectLocked.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  __int64 v19; // r8
  __int64 v20; // r9

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
  v12 = ObFastReferenceObjectLocked(v7 + 64, 1666411853LL);
  MiReleaseSpinLockShared((volatile signed __int32 *)(v7 + 72), v18, v19, v20);
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
